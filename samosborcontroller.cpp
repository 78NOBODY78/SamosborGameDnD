#include "samosborcontroller.h"
#include <QRandomGenerator>
#include <QTimer>
#include <QDebug>

// Конструктор: инициализирует таймеры и начальные значения
SamosborController::SamosborController(QObject *parent)
    : QObject(parent),
    mainTimer(new QTimer(this)),            // таймер генерации чисел
    rangeShrinkTimer(new QTimer(this)),     // таймер сжатия диапазона
    currentState(State::Idle),
    currentMinRange(initialMinRange),
    currentMaxRange(initialMaxRange),
    startTime(QTime(0,0)),
    lastSamosborTime(QDateTime::currentDateTime().addSecs(-cooldownSeconds)) // позволяет запуск сразу после старта
{
    // Таймер генерации чисел каждые 5 сек
    connect(mainTimer, &QTimer::timeout, this, &SamosborController::update);
    // Таймер сжатия диапазона каждые 2 мин
    connect(rangeShrinkTimer, &QTimer::timeout, this, &SamosborController::handleRangeShrink);
}

// Деструктор: останавливает таймеры
SamosborController::~SamosborController()
{
    mainTimer->stop();
    rangeShrinkTimer->stop();
}

// Запускает процесс самосбора
void SamosborController::start()
{
    if (currentState == State::Running) return;

    startTime = QTime::currentTime();
    currentState = State::Running;

    mainTimer->start(5000);        // генерация числа каждые 5 сек
    rangeShrinkTimer->start(120000); // сжатие диапазона каждые 2 мин

    emit stateChanged("Запущен");
    emit rangeChanged(getRangeInfo());
    emit timeUpdated(getElapsedTimeString());
    emit logMessage("▶ Система самосбора активирована.");
}

// Приостанавливает процесс
void SamosborController::pause()
{
    if (currentState != State::Running) return;

    mainTimer->stop();
    rangeShrinkTimer->stop();
    currentState = State::Paused;

    emit stateChanged("Пауза");
    emit logMessage("⏸ Самосбор приостановлен.");
}

// Возобновляет после паузы
void SamosborController::resume()
{
    if (currentState != State::Paused) return;

    mainTimer->start(5000);
    rangeShrinkTimer->start(120000);
    currentState = State::Running;

    emit stateChanged("Запущен");
    emit logMessage("▶ Самосбор возобновлён.");
}

// Ручной запуск самосбора
void SamosborController::manualTrigger()
{
    triggerSamosbor();
}

// Ручной запуск замедления
void SamosborController::manualSlowdown()
{
    triggerSlowdown();
}

// Обновление времени и генерация случайного числа
void SamosborController::update()
{
    emit timeUpdated(getElapsedTimeString());
    generateRandomNumber();
}

// Генерация случайного числа в текущем диапазоне
void SamosborController::generateRandomNumber()
{
    int value = QRandomGenerator::global()->bounded(currentMinRange, currentMaxRange + 1);

    if (value == currentMaxRange) {
        // Защита от повторного триггера в пределах кулдауна
        if (lastSamosborTime.secsTo(QDateTime::currentDateTime()) < cooldownSeconds)
            return;

        triggerSamosbor(); // Сработал самосбор
    }
    else if (value == currentMinRange) {
        triggerSlowdown(); // Достигнут нижний порог — замедление
    }
}

// Реализация самосбора
void SamosborController::triggerSamosbor()
{
    lastSamosborTime = QDateTime::currentDateTime(); // обновляем время последнего самосбора

    // Сброс диапазона
    currentMinRange = initialMinRange;
    currentMaxRange = initialMaxRange;

    emit rangeChanged(getRangeInfo());
    emit logMessage("☢ САМОСБОР! Диапазон сброшен.");

    // Генерация случайного состояния системы оповещения
    int alertRoll = QRandomGenerator::global()->bounded(1, 7);
    QString alertState;

    switch (alertRoll) {
    case 1: alertState = "📢 Система оповещения: Активна и работает корректно."; break;
    case 2: alertState = "📢 Система оповещения: Активна и работает некорректно."; break;
    case 3: alertState = "📢 Система оповещения: Частично активна и работает корректно."; break;
    case 4: alertState = "📢 Система оповещения: Частично активна и работает некорректно."; break;
    case 5: alertState = "📢 Система оповещения: Неактивна."; break;
    case 6: alertState = "📢 Система оповещения: Заражена."; break;
    }

    emit logMessage(alertState);

    // Завершаем работу
    mainTimer->stop();
    rangeShrinkTimer->stop();
    currentState = State::Idle;
    emit stateChanged("Неактивен");
}

// Реализация замедления (при достижении нижней границы)
void SamosborController::triggerSlowdown()
{
    if (currentState != State::Running) return;

    currentState = State::Slowdown;
    emit stateChanged("Замедление");
    emit logMessage("⚠ Замедление: нижняя граница достигнута.");

    mainTimer->stop(); // приостанавливаем генерацию чисел

    // Через 2 минуты возвращаемся в обычный режим
    QTimer::singleShot(120000, this, [this]() {
        if (currentState == State::Slowdown) {
            mainTimer->start(5000);
            currentState = State::Running;
            emit stateChanged("Запущен");
        }
    });
}

// Сжатие диапазона: верх снижается, низ поднимается
void SamosborController::handleRangeShrink()
{
    if (currentMinRange < 0) currentMinRange += 10;
    if (currentMaxRange > 0) currentMaxRange -= 10;

    emit rangeChanged(getRangeInfo());
}

// Возвращает строку с прошедшим временем с начала самосбора
QString SamosborController::getElapsedTimeString() const
{
    int seconds = startTime.secsTo(QTime::currentTime());
    return QString("%1:%2")
        .arg(seconds / 60, 2, 10, QChar('0'))
        .arg(seconds % 60, 2, 10, QChar('0'));
}

// Форматированный диапазон для отображения
QString SamosborController::getRangeInfo() const
{
    return QString("%1 / %2").arg(currentMinRange).arg(currentMaxRange);
}

// Возвращает строку с текущим состоянием
QString SamosborController::getState() const
{
    switch (currentState)
    {
    case State::Idle:      return "Неактивен";
    case State::Running:   return "Запущен";
    case State::Paused:    return "Пауза";
    case State::Slowdown:  return "Замедление";
    }
    return "Неизвестно";
}

// Полный сброс состояния и диапазона
void SamosborController::reset()
{
    mainTimer->stop();
    rangeShrinkTimer->stop();

    currentMinRange = initialMinRange;
    currentMaxRange = initialMaxRange;
    currentState = State::Idle;

    emit rangeChanged(getRangeInfo());
    emit stateChanged("Неактивен");
    emit logMessage("🔁 Самосбор сброшен.");
}

#include "eventgenerator.h"
#include "terminalprinter.h"

#include <QRandomGenerator>

// Конструктор
EventGenerator::EventGenerator(TerminalPrinter* terminal, QObject* parent)
    : QObject(parent), terminal(terminal)
{
    loadEventTemplates();
    loadAnomalyGrades();
}

// Основной метод генерации события
void EventGenerator::generate()
{
    const int roll = QRandomGenerator::global()->bounded(1, 101); // d100

    // Аномалия?
    if (isAnomaly(roll)) {
        const QString effect = describeAnomaly(roll); // HTML: <span style=...><b>...</b></span>
        terminal->printHtml(QString("🧨 АНОМАЛИЯ [%1]: %2").arg(roll).arg(effect));
        return;
    }

    // Обычное событие
    const EventType type = categorize(roll);
    const auto texts = eventTexts.value(type);

    const QString eventText = texts.isEmpty()
                                  ? QStringLiteral("Неизвестное событие...")
                                  : texts.at(QRandomGenerator::global()->bounded(texts.size()));

    QString typeLabel;
    switch (type) {
    case EventType::Negative: typeLabel = QStringLiteral("Негативное событие"); break;
    case EventType::Neutral:  typeLabel = QStringLiteral("Фоновое событие");    break;
    case EventType::Positive: typeLabel = QStringLiteral("Позитивное событие"); break;
    }

    terminal->print(QString("🎲 [%1] %2").arg(roll).arg(typeLabel));
    terminal->print(QStringLiteral("📍 ") + eventText);
}

// Проверяет, является ли число выпадения аномалией
bool EventGenerator::isAnomaly(int roll) const
{
    // Явно исключённые значения (не вызывают аномалию)
    static const QVector<int> excluded = {2, 3, 5, 23, 31, 41, 61, 71, 99, 100};
    if (excluded.contains(roll)) return false;

    // Специальные числа
    if (roll == 13 || roll == 66) return true;

    // Простые числа -> аномалия
    if (roll < 2) return false;
    for (int i = 2; i * i <= roll; ++i)
        if (roll % i == 0) return false;
    return true;
}

// Определяет тип события на основе броска
EventGenerator::EventType EventGenerator::categorize(int roll) const
{
    if (roll <= 20) return EventType::Negative;
    if (roll <= 80) return EventType::Neutral;
    return EventType::Positive;
}

// Возвращает HTML-описание аномалии по номеру броска
QString EventGenerator::describeAnomaly(int roll) const
{
    if (anomalyGrades.contains(roll)) {
        const auto g = anomalyGrades.value(roll);
        return QString("<span style='color:%1;'><b>%2</b></span>").arg(g.color, g.name);
    }

    // Fallback
    return QStringLiteral("<span style='color:#ff0000;'><b>НЕОПОЗНАННОЕ АНОМАЛЬНОЕ ЯВЛЕНИЕ</b></span>");
}

// Загружает предопределённые шаблоны обычных событий
void EventGenerator::loadEventTemplates()
{
    eventTexts[EventType::Negative] = {
        QStringLiteral("Устройство издаёт тревожный писк и замолкает."),
        QStringLiteral("Связь с внешним периметром потеряна."),
        QStringLiteral("Температура резко падает — что-то случилось с климат-контролем.")
    };

    eventTexts[EventType::Neutral] = {
        QStringLiteral("Система провела самотестирование. Всё в норме."),
        QStringLiteral("Пыль медленно оседает в коридоре."),
        QStringLiteral("Проходит очередной цикл работы освещения.")
    };

    eventTexts[EventType::Positive] = {
        QStringLiteral("Найден источник питания. Возможен перезапуск."),
        QStringLiteral("Случайная проверка выявила полезные данные."),
        QStringLiteral("Запас провизии продержит группу ещё на сутки.")
    };
}

// Загружает список возможных аномалий с названиями и цветами
void EventGenerator::loadAnomalyGrades()
{
    anomalyGrades = {
        {7,  {QStringLiteral("Моментальное озарение"),                      QStringLiteral("#00ff00")}},
        {11, {QStringLiteral("Подключение к неизвестному каналу"),          QStringLiteral("#00aa00")}},
        {17, {QStringLiteral("Благословение поля"),                          QStringLiteral("#33cc66")}},
        {19, {QStringLiteral("Отклонение реальности"),                       QStringLiteral("#cccc00")}},
        {29, {QStringLiteral("Эхо чужого сигнала"),                          QStringLiteral("#999933")}},
        {37, {QStringLiteral("Память системы повреждена"),                   QStringLiteral("#ff9900")}},
        {47, {QStringLiteral("Энергетический сбой"),                         QStringLiteral("#cc6600")}},
        {53, {QStringLiteral("Разлом в пространстве"),                       QStringLiteral("#cc3300")}},
        {66, {QStringLiteral("Активация протокола ИЗОЛЯЦИЯ"),                QStringLiteral("#ff0000")}},
        {79, {QStringLiteral("Поле Хаоса: воспоминания не совпадают"),       QStringLiteral("#990000")}},
        {83, {QStringLiteral("Пси-контакт. Группа не осознаёт происходящего."), QStringLiteral("#990033")}},
        {97, {QStringLiteral("ПОЛНАЯ ДЕГРАДАЦИЯ КОНТУРА"),                   QStringLiteral("#660000")}},
        {13, {QStringLiteral("Аномалия 13. Не трогать. Никогда."),           QStringLiteral("#8b0000")}}
    };
}

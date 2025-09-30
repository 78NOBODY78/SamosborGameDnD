#include "initiativetracker.h"
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <algorithm>

// Конструктор: не делает ничего, кроме инициализации базового QObject
InitiativeTracker::InitiativeTracker(QObject* parent)
    : QObject(parent)
{
}

// Установка виджетов интерфейса и подключение сигналов
void InitiativeTracker::setupUI(QLineEdit* nameInput,
                                QLineEdit* initiativeInput,
                                QTextEdit* display,
                                QPushButton* addButton,
                                QPushButton* nextButton,
                                QPushButton* previousButton)
{
    nameEdit = nameInput;
    initiativeEdit = initiativeInput;
    displayArea = display;
    addBtn = addButton;
    nextBtn = nextButton;
    prevBtn = previousButton;

    // Подключаем кнопки к действиям
    connect(addBtn, &QPushButton::clicked, this, &InitiativeTracker::addEntry);
    connect(nextBtn, &QPushButton::clicked, this, &InitiativeTracker::showNext);
    connect(prevBtn, &QPushButton::clicked, this, &InitiativeTracker::showPrevious);
}

// Добавление нового участника в список инициативы
void InitiativeTracker::addEntry()
{
    QString name = nameEdit->text().trimmed(); // имя участника
    bool ok = false;
    int initiative = initiativeEdit->text().toInt(&ok); // проверка, что это число

    if (name.isEmpty() || !ok)
        return; // если имя пустое или не число — игнорируем

    initiativeList.append(qMakePair(name, initiative)); // добавляем в список
    sortInitiativeList();   // сортировка по убыванию
    currentIndex = 0;       // сброс на начало
    updateDisplay();        // отображение в поле
}

// Сортировка по инициативе: от большего к меньшему
void InitiativeTracker::sortInitiativeList()
{
    std::sort(initiativeList.begin(), initiativeList.end(),
              [](const QPair<QString, int>& a, const QPair<QString, int>& b) {
                  return a.second > b.second;
              });
}

// Обновление текстового поля отображения инициативы
void InitiativeTracker::updateDisplay()
{
    if (!displayArea) return;

    displayArea->clear();
    for (int i = 0; i < initiativeList.size(); ++i) {
        const auto& pair = initiativeList[i];
        QString line = QString("%1. %2 (%3)") // пример: "1. Алексей (17)"
                           .arg(i + 1)
                           .arg(pair.first)
                           .arg(pair.second);

        if (i == currentIndex) {
            line.prepend("👉 "); // указатель на текущего персонажа
        }

        displayArea->append(line); // добавляем строку в текстовое поле
    }
}

// Переход к следующему участнику
void InitiativeTracker::showNext()
{
    if (initiativeList.isEmpty()) return;

    currentIndex = (currentIndex + 1) % initiativeList.size();
    updateDisplay();
}

// Переход к предыдущему участнику
void InitiativeTracker::showPrevious()
{
    if (initiativeList.isEmpty()) return;

    currentIndex = (currentIndex - 1 + initiativeList.size()) % initiativeList.size();
    updateDisplay();
}

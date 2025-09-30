#ifndef INITIATIVETRACKER_H
#define INITIATIVETRACKER_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QPair>

// Вперёд-объявления UI-компонентов
class QTextEdit;
class QLineEdit;
class QPushButton;

// === Класс InitiativeTracker ===
// Отвечает за добавление персонажей с инициативой и навигацию по очереди хода.
class InitiativeTracker : public QObject
{
    Q_OBJECT

public:
    explicit InitiativeTracker(QObject* parent = nullptr); // Конструктор

    // Привязка UI-компонентов к трекеру
    void setupUI(QLineEdit* nameInput,
                 QLineEdit* initiativeInput,
                 QTextEdit* display,
                 QPushButton* addButton,
                 QPushButton* nextButton,
                 QPushButton* previousButton);

private slots:
    // Добавление новой записи в список инициатив
    void addEntry();

    // Переключение к следующему персонажу в списке
    void showNext();

    // Переключение к предыдущему персонажу
    void showPrevious();

private:
    // Привязанные UI-компоненты
    QLineEdit* nameEdit = nullptr;           // Поле ввода имени
    QLineEdit* initiativeEdit = nullptr;     // Поле ввода значения инициативы
    QTextEdit* displayArea = nullptr;        // Отображение списка
    QPushButton* addBtn = nullptr;           // Кнопка добавления
    QPushButton* nextBtn = nullptr;          // Кнопка "Следующий"
    QPushButton* prevBtn = nullptr;          // Кнопка "Предыдущий"

    // Список пар "Имя — Инициатива"
    QVector<QPair<QString, int>> initiativeList;

    // Текущий индекс активного персонажа
    int currentIndex = -1;

    // Сортировка по инициативе (по убыванию)
    void sortInitiativeList();

    // Обновление отображения в QTextEdit
    void updateDisplay();
};

#endif // INITIATIVETRACKER_H

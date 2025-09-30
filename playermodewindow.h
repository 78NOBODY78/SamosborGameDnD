#ifndef PLAYERMODEWINDOW_H
#define PLAYERMODEWINDOW_H

#include <QWidget>
#include <QPointer>  // ✅ Безопасный указатель — автоматически обнуляется при удалении объекта
#include "createcharacterwindow.h"  // Окно создания персонажа

namespace Ui {
class PlayerModeWindow;
}

// === Класс PlayerModeWindow ===
// Главное окно режима игрока. Позволяет создать персонажа,
// выбрать уже существующего или вернуться назад.
class PlayerModeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerModeWindow(QWidget *parent = nullptr); // Конструктор
    ~PlayerModeWindow();                                  // Деструктор

private:
    Ui::PlayerModeWindow *ui;  // Интерфейс, сгенерированный Qt Designer

    // Указатель на окно создания персонажа.
    // QPointer автоматически станет nullptr, если окно удалено вручную.
    QPointer<CreateCharacterWindow> characterWindow;

private slots:
    // Слот: нажата кнопка "Создать персонажа"
    void onCreateCharacterClicked();

    // Слот: нажата кнопка "Выбрать персонажа"
    void onSelectCharacterClicked();

    // Слот: нажата кнопка "Назад"
    void onBackClicked();
};

#endif // PLAYERMODEWINDOW_H

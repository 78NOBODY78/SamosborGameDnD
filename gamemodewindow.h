#ifndef GAMEMODEWINDOW_H
#define GAMEMODEWINDOW_H

#include <QWidget>
#include "playermodewindow.h"       // Окно режима игрока
#include "mastercontrolwindow.h"    // Окно режима мастера

// Пространство имён, содержащее UI-класс, сгенерированный Qt Designer'ом
namespace Ui {
class GameModeWindow;
}

// === Главное окно выбора режима ===
// Отображается при запуске. Позволяет выбрать режим игрока или мастера.
class GameModeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameModeWindow(QWidget *parent = nullptr); // Конструктор
    ~GameModeWindow();                                  // Деструктор

private slots:
    // Слот при нажатии на кнопку "Игрок"
    void onPlayerModeClicked();

    // Слот при нажатии на кнопку "Мастер"
    void onMasterModeClicked();

    // Слот при нажатии на кнопку "Назад"
    void onBackClicked();

private:
    Ui::GameModeWindow *ui;              // Указатель на интерфейс

    // Указатели на окна соответствующих режимов
    PlayerModeWindow *playerModeWindow = nullptr;
    MasterControlWindow *masterWindow = nullptr;
};

#endif // GAMEMODEWINDOW_H

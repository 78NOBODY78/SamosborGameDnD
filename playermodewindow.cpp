#include "playermodewindow.h"
#include "ui_playermodewindow.h"
#include "gamemodewindow.h"
#include "createcharacterwindow.h"
#include "selectcharacterwindow.h"

#include <QScreen>

PlayerModeWindow::PlayerModeWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlayerModeWindow)
{
    ui->setupUi(this);

    // Настройки появления окна
    raise(); // Показываем окно поверх остальных всех
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint | Qt::WindowTitleHint);// Убираем богомерзкие кнопки сверху (дешевку (бедность))
    //Ставим эту скотину в центр экрана
    QScreen *screen = QApplication::primaryScreen(); //обзываем
    QRect screenGeometry = screen->availableGeometry(); // продолжаем булинг
    int x = (screenGeometry.width() - width()) / 2; // опа, а вот и настройка позиции по Х (Хореография)
    int y = (screenGeometry.height() - height()) / 2; // по У (Устал)
    move(x, y); // все двигаем, только не значение регистра У в регистр Х а по лдмки, нормально двигаем
    // теперь просто надо ВСТАВИТЬ (это вдругие окна, чтоб все по человечески открывалось а не где то под Чукоткой)

    // Подключаем кнопки
    connect(ui->pushButtonCreate, &QPushButton::clicked, this, &PlayerModeWindow::onCreateCharacterClicked);
    connect(ui->pushButtonSelect, &QPushButton::clicked, this, &PlayerModeWindow::onSelectCharacterClicked);
    connect(ui->pushButtonBack, &QPushButton::clicked, this, &PlayerModeWindow::onBackClicked);
}

PlayerModeWindow::~PlayerModeWindow()
{
    delete ui;
}

// Реализация кнопки "Создать персонажа"
void PlayerModeWindow::onCreateCharacterClicked()
{
    if (!characterWindow)
    {
        characterWindow = new CreateCharacterWindow();  // ❌ Убираем передачу `this`
        characterWindow->setAttribute(Qt::WA_DeleteOnClose);

        // Связываем событие закрытия с повторным показом PlayerModeWindow
        connect(characterWindow, &QWidget::destroyed, this, [this]() {
            this->show();
        });
    }
    characterWindow->show();
    this->hide();
}


// Реализация кнопки "Выбрать персонажа"
void PlayerModeWindow::onSelectCharacterClicked()
{
    SelectCharacterWindow *selectCharacterWindow = new SelectCharacterWindow();
    selectCharacterWindow->show();
    this->hide(); // Скрываем текущее окно, чтобы избежать дублирования
}

// Реализация кнопки "Назад"
void PlayerModeWindow::onBackClicked()
{
    GameModeWindow *gameModeWin = new GameModeWindow();
    gameModeWin->show();
    this->close();
}

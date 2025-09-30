#include "gamemodewindow.h"
#include "ui_gamemodewindow.h"
#include "mainwindow.h"
#include "playermodewindow.h"
#include "mastercontrolwindow.h"
#include <QScreen>

// Конструктор окна выбора режима игры
GameModeWindow::GameModeWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameModeWindow)
    , playerModeWindow(nullptr)    // указатель на окно режима игрока
    , masterWindow(nullptr)        // указатель на окно режима мастера
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

    // Подключение кнопок интерфейса к соответствующим слотам
    connect(ui->pushButtonPlayer, &QPushButton::clicked, this, &GameModeWindow::onPlayerModeClicked);
    connect(ui->pushButtonMaster, &QPushButton::clicked, this, &GameModeWindow::onMasterModeClicked);
    connect(ui->pushButtBack, &QPushButton::clicked, this, &GameModeWindow::onBackClicked);
}

// Деструктор: освобождаем память
GameModeWindow::~GameModeWindow()
{
    delete playerModeWindow;
    delete masterWindow;
    delete ui;
}

// Кнопка "Игрок": открывает окно режима игрока
void GameModeWindow::onPlayerModeClicked()
{
    if (!playerModeWindow) {
        playerModeWindow = new PlayerModeWindow(nullptr); // создаём окно один раз
    }
    playerModeWindow->show(); // показываем окно игрока
    this->hide();             // прячем текущее окно
}

// Кнопка "Мастер": открывает окно режима мастера
void GameModeWindow::onMasterModeClicked()
{
    if (!masterWindow) {
        masterWindow = new MasterControlWindow(nullptr); // создаём окно один раз
    }
    masterWindow->show(); // показываем окно мастера
    this->hide();         // прячем текущее окно
}

// Кнопка "Назад": возвращает к предыдущему (родительскому) окну
void GameModeWindow::onBackClicked()
{
    if (parentWidget()) {
        parentWidget()->show(); // возвращаем родителя на экран
    }
    this->close(); // закрываем это окно
}

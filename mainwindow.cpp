#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "gamemodewindow.h"
#include "style.h"

#include <QMessageBox>
#include <QScreen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , gameModeWindow(nullptr)  // Инициализация указателя на окно выбора режима
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

    // Подключаем кнопки к соответствующим слотам
    connect(ui->pushButtonStart, &QPushButton::clicked, this, &MainWindow::onStartClicked);
    connect(ui->pushButtonExit, &QPushButton::clicked, this, &MainWindow::onExitClicked);
}

MainWindow::~MainWindow()
{
    delete ui;  // Освобождаем память, выделенную под UI
}

// Обработчик кнопки "Начать" — открывает окно выбора режима игры
void MainWindow::onStartClicked()
{
    if (!gameModeWindow) {
        gameModeWindow = new GameModeWindow(nullptr);  // Создаем окно, если его ещё нет
    }

    gameModeWindow->show();  // Показываем окно выбора режима
    this->hide();  // Скрываем главное окно
}

// Обработчик кнопки "Выход" — завершает приложение
void MainWindow::onExitClicked()
{
    QApplication::quit();
}

#include "mastercontrolwindow.h"
#include "ui_mastercontrolwindow.h"

#include "samosborcontroller.h"
#include "terminalprinter.h"
#include "eventgenerator.h"
#include "battlecontroller.h"
#include "initiativetracker.h"
#include "successcalculator.h"
#include "gamemodewindow.h"
#include "style.h"

#include <QDir>
#include <QDebug>
#include <QScreen>
#include <QFontDatabase>
#include <QString>
#include <QRandomGenerator>
#include <QScrollBar>
#include <QTextBlock>

// Конструктор окна мастера: инициализирует интерфейс, контроллеры и соединения
MasterControlWindow::MasterControlWindow(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::MasterControlWindow),
    samosbor(nullptr),
    terminal(nullptr),
    eventGenerator(nullptr),
    battleController(nullptr),
    initiativeTracker(nullptr),
    successCalculator(nullptr)
{
    qDebug() << "MasterControlWindow создаётся!";
    ui->setupUi(this);
    setupControllers();   // инициализация всех контроллеров
    setupConnections();   // подключение сигналов/слотов

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

    int fontId = QFontDatabase::addApplicationFont(":/fonts/fonts/clacon2.ttf");
    QString fontFam = QFontDatabase::applicationFontFamilies(fontId).at(0);

    QFont consoleFont14(fontFam, 14);
    QFont consoleFont12(fontFam, 12);
    QFont consoleFont10(fontFam, 10);

    this->setStyleSheet(Style::GroupBoxMaster);
    ui->tabWidget->setStyleSheet(Style::tabWidget);

    ui->textEdit->setText(Texts::Text4TE);
    ui->textEdit_4->setText(Texts::Text4TE);
    ui->textEdit_5->setText(Texts::Text4TE_2);

    ui->tabWidget->setFont(consoleFont14);
    ui->textEditTerminallInitiativeBattle->setFont(consoleFont10);
    for (auto te : {ui->textEdit, ui->textEditTerminal, ui->textEdit_2, ui->textEdit_3, ui->textEdit_4, ui->textEdit_5, ui->textEdit_6, ui->textEdit4Fun}) te->setFont(consoleFont14);
    QList<QWidget*> allWidgets = this->findChildren<QWidget*>();
    for (QWidget* widget : allWidgets) {
        if (qobject_cast<QLabel*>(widget) || qobject_cast<QLineEdit*>(widget) || qobject_cast<QComboBox*> (widget) || qobject_cast<QSpinBox*>(widget) ||
                qobject_cast<QGroupBox*>(widget)) {
            widget->setFont(consoleFont12);
        } else if (qobject_cast<QPushButton*>(widget)) {
            widget->setFont(consoleFont10);
        } else if (qobject_cast<QRadioButton*>(widget)) {
                   widget->setFont(consoleFont14);
               }
    }

    timer = new QTimer(this);
       connect(timer, &QTimer::timeout, this, &MasterControlWindow::updateHexDisplay);

    ui->textEdit4Fun->setReadOnly(true);
    ui->textEdit4Fun->setWordWrapMode(QTextOption::NoWrap);

    // Вычисляем максимальное количество видимых строк
    calculateMaxVisibleLines();

    // Запускаем таймер (обновление каждую секунду)
    timer->start(1000);

    // Генерируем начальные строки
    for (int i = 0; i < maxVisibleLines; ++i) {
       hexLines.append(generateRandomHexLine());
    }

    // Отображаем начальные строки
    ui->textEdit4Fun->setPlainText(hexLines.join("\n"));
    ui->textEdit4Fun->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->textEdit4Fun->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}

// Деструктор
MasterControlWindow::~MasterControlWindow()
{
    delete ui;
}



void MasterControlWindow::updateHexDisplay()
{
    // Добавляем новую строку
    hexLines.append(generateRandomHexLine());

    // Если строк больше максимума, удаляем самую старую
    if (hexLines.size() > maxVisibleLines) {
        hexLines.removeFirst();
    }

    // Обновляем отображение
    ui->textEdit4Fun->setPlainText(hexLines.join("\n"));

    // Прокручиваем вниз
    QScrollBar *vScrollBar = ui->textEdit4Fun->verticalScrollBar();
    vScrollBar->setValue(vScrollBar->maximum());
}

QString MasterControlWindow::generateRandomHexLine()
{
    QString result;
    QRandomGenerator *generator = QRandomGenerator::global();

    // Генерируем первую группу из 4 hex-цифр
    for (int i = 0; i < 4; ++i) {
        int randomValue = generator->bounded(16); // 0-15
        result.append(QString::number(randomValue, 16).toUpper());
    }

    result.append(":");

    // Генерируем вторую группу из 4 hex-цифр
    for (int i = 0; i < 4; ++i) {
        int randomValue = generator->bounded(16); // 0-15
        result.append(QString::number(randomValue, 16).toUpper());
    }

    return result;
}

void MasterControlWindow::calculateMaxVisibleLines()
{
    // Получаем высоту QTextEdit
    int textEditHeight = ui->textEdit4Fun->height();

    // Получаем высоту одной строки (примерно)
    QFontMetrics fontMetrics(ui->textEdit4Fun->font());
    int lineHeight = fontMetrics.height();

    // Учитываем отступы
    int verticalMargins = ui->textEdit4Fun->contentsMargins().top() +
                         ui->textEdit4Fun->contentsMargins().bottom();

    // Вычисляем максимальное количество строк
    maxVisibleLines = (textEditHeight - verticalMargins) / lineHeight;

    // Минимум 1 строка
    if (maxVisibleLines < 1) {
        maxVisibleLines = 1;
    }

    qDebug() << "Max visible lines:" << maxVisibleLines;
}





// Кнопка "Назад": возвращает к окну выбора режима
void MasterControlWindow::on_pushButtonBack_clicked()
{
    GameModeWindow* gameModeWin = new GameModeWindow();
    gameModeWin->show();
    this->close();
}

// Настройка всех функциональных контроллеров (события, самосбор, бой и т.п.)
void MasterControlWindow::setupControllers()
{
    qDebug() << "setupControllers стартует";

    // === ТЕРМИНАЛ ===
    terminal = new TerminalPrinter(ui->textEditTerminal, this);

    // === САМОСБОР ===
    samosbor = new SamosborController(this);
    connect(samosbor, &SamosborController::logMessage, terminal, &TerminalPrinter::print);
    connect(samosbor, &SamosborController::timeUpdated, ui->labelTimerSamosbor, &QLabel::setText);
    connect(samosbor, &SamosborController::rangeChanged, ui->labelRangeInfoSamosbor, &QLabel::setText);
    connect(samosbor, &SamosborController::stateChanged, ui->labelSamosborState, &QLabel::setText);

    // === ГЕНЕРАТОР СОБЫТИЙ ===
    eventGenerator = new EventGenerator(terminal, this);

    // === БОЕВОЙ МОДУЛЬ ===
    battleController = new BattleController(terminal, this);

    // Передаём указатели на groupBox’ы (блоки UI для игрока, NPC и инициативы)
    battleController->setGroupBoxes(
        ui->groupBoxBattlePlayer,
        ui->groupBoxBattleNPS,
        ui->groupBoxInitiativeBattle
        );

    battleController->setupPlayerControls(
        ui->comboBoxCharacterSelectBattlePlayer,
        ui->lineEditInResultHitRollPlayer,
        ui->comboBWeaponPlayer,
        ui->radioButtonComplexityStandardPlayer,
        ui->radioButtonComplexitGoodPlayer,
        ui->radioButtonComplexityBadPlayer,
        ui->spinBoxStrenghtBattlePlayer,
        ui->spinBoxAgilityBattlePlayer,
        ui->spinBoxIntelligenceBattlePlayer,
        ui->spinBoxWeaponBattlePlayer,
        ui->spinBoxMedicineBattlePlayer,
        ui->spinBoxMechanicBattlePlayer,
        ui->spinBoxElectronicsBattlePlayer,
        ui->pushButtonCalculateHitPlayer,
        ui->labelClassBattlePlayer      // ⬅ добавляем этот аргумент
        );


    // Настройка интерфейса NPC
    battleController->setupNPCControls(
        ui->comboBWeaponNPC,
        ui->radioButtonComplexityStandardNPC,
        ui->radioButtonComplexitGoodNPC,
        ui->radioButtonComplexityBadNPC,
        ui->spinBoxStrenghtBattleNPC,
        ui->spinBoxAgilityBattleNPC,
        ui->spinBoxIntelligenceBattleNPC,
        ui->spinBoxWeaponBattleNPC,
        ui->spinBoxMedicineBattleNPC,
        ui->spinBoxMechanicBattleNPC,
        ui->spinBoxElectronicsBattleNPC,
        ui->pushButtonnResultHitRollNPC,
        ui->pushButtonCalculateHitNPC
        );

    // Сразу отключаем блоки боя
    ui->groupBoxBattlePlayer->setEnabled(false);
    ui->groupBoxBattleNPS->setEnabled(false);
    ui->groupBoxInitiativeBattle->setEnabled(false);

    // === ТРЕКЕР ИНИЦИАТИВЫ ===
    initiativeTracker = new InitiativeTracker(this);
    initiativeTracker->setupUI(
        ui->lineEditNameInitiativeBattle,
        ui->lineEditRollInitiativeBattle,
        ui->textEditTerminallInitiativeBattle,
        ui->pushButtonAddInitiativeBattle,
        ui->pushButtonNextInitiativeBattle,
        ui->pushButtonPreviousInitiativeBattle
        );

    // === КАЛЬКУЛЯТОР УСПЕХА ===
    successCalculator = new SuccessCalculator(terminal, this);
    successCalculator->setupUI(
        ui->comboBoxCharacterSelectAction,
        ui->labelClassAction,
        ui->spinBoxStrenghtAction,
        ui->spinBoxAgilityAction,
        ui->spinBoxIntelligenceAction,
        ui->spinBoxWeaponAction,
        ui->spinBoxMedicineAction,
        ui->spinBoxMechanicAction,
        ui->spinBoxElectronicsAction,
        ui->comboBoxComplexity,
        ui->comboBoxCriteria1,
        ui->comboBoxCriteria2,
        ui->comboBoxCriteria3,
        ui->comboBoxCriteria4,
        ui->comboBoxSkill1,
        ui->comboBoxSkill2,
        ui->spinBox,
        ui->pushButtonCalculate
        );

    // === ЗАГРУЗКА ПЕРСОНАЖЕЙ В comboBox ===
    QDir dir("data/characters");
    QStringList files = dir.entryList(QStringList() << "*.json", QDir::Files);

    if (files.isEmpty()) {
        terminal->print("⚠ В папке data/characters нет файлов персонажей.");
    } else {
        for (const QString& fileName : files) {
            QString name = fileName;
            name.chop(5); // удаляем ".json"
            ui->comboBoxCharacterSelectBattlePlayer->addItem(name);
        }
    }

    qDebug() << "setupControllers завершён";
}

// Подключение сигналов от виджетов интерфейса к слотам окна
void MasterControlWindow::setupConnections()
{
    qDebug() << "setupConnections стартует";

    // Переключение режима терминала
    connect(ui->radioButtonLogMode, &QRadioButton::toggled, this, [this](bool checked){
        if (checked && terminal)
            terminal->setMode(TerminalPrinter::Mode::Log);
    });
    connect(ui->radioButtonJournalMode, &QRadioButton::toggled, this, [this](bool checked){
        if (checked && terminal)
            terminal->setMode(TerminalPrinter::Mode::Journal);
    });
    connect(ui->radioButtonNarrativeMode, &QRadioButton::toggled, this, [this](bool checked){
        if (checked && terminal)
            terminal->setMode(TerminalPrinter::Mode::Narrative);
    });

    // Кнопки самосбора
    connect(ui->pushButtonSamosborStart, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonSamosborStart_clicked);
    connect(ui->pushButtonSamosborPause, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonSamosborPause_clicked);
    connect(ui->pushButtonSamosborResume, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonSamosborResume_clicked);
    connect(ui->pushButtonSamosborManualTrigger, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonSamosborManualTrigger_clicked);
    connect(ui->pushButtonSamosborManualSlowdown, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonSamosborManualSlowdown_clicked);

    // Кнопки терминала и боевых событий
    connect(ui->pushButtonTerminalON_OFF, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonTerminalON_OFF_clicked);
    connect(ui->pushButtonRandomEvent, &QPushButton::clicked, this, &MasterControlWindow::on_pushButtonRandomEvent_clicked);
    connect(ui->pushButtonBattleStart, &QPushButton::clicked, this, [this]() {
        battleController->startBattle();  // Вызываем метод контроллера
        ui->battleNoScreen->hide();               // Скрываем виджет
    });
    connect(ui->pushButtonBattleEnd, &QPushButton::clicked, this, [this]() {
        battleController->endBattle();  // Вызываем метод контроллера
        ui->battleNoScreen->show();               // Скрываем виджет
    });

    qDebug() << "setupConnections завершён";
}

// ==== СЛОТЫ УПРАВЛЕНИЯ ====

void MasterControlWindow::on_radioButtonLogMode_toggled(bool checked) {
    if (checked && terminal)
        terminal->setMode(TerminalPrinter::Mode::Log);
}

void MasterControlWindow::on_radioButtonJournalMode_toggled(bool checked) {
    if (checked && terminal)
        terminal->setMode(TerminalPrinter::Mode::Journal);
}

void MasterControlWindow::on_radioButtonNarrativeMode_toggled(bool checked) {
    if (checked && terminal)
        terminal->setMode(TerminalPrinter::Mode::Narrative);
}

// Включение/отключение визуального терминала
void MasterControlWindow::on_pushButtonTerminalON_OFF_clicked()
{
    terminalVisible = !terminalVisible;

    if (terminalVisible) {
        // Включаем терминал: восстанавливаем записи
        ui->textEditTerminal->setVisible(true);
        ui->textEditTerminal->setPlainText(terminalBackup);
        ui->pushButtonTerminalON_OFF->setText("Выкл");

        if (terminal)
            terminal->print("[Терминал включен]");
    } else {
        // Выключаем терминал: сохраняем текст и скрываем
        terminalBackup = ui->textEditTerminal->toPlainText();
        ui->textEditTerminal->clear();
        ui->textEditTerminal->setVisible(false);
        ui->pushButtonTerminalON_OFF->setText("Вкл");

        if (terminal)
            terminal->print("[Терминал выключен]");
    }
}

// Управление самосбором
void MasterControlWindow::on_pushButtonSamosborStart_clicked() {
    if (samosbor) samosbor->start();
}

void MasterControlWindow::on_pushButtonSamosborPause_clicked() {
    if (samosbor) samosbor->pause();
}

void MasterControlWindow::on_pushButtonSamosborResume_clicked() {
    if (samosbor) samosbor->resume();
}

void MasterControlWindow::on_pushButtonSamosborManualTrigger_clicked() {
    if (samosbor) samosbor->manualTrigger();
}

void MasterControlWindow::on_pushButtonSamosborManualSlowdown_clicked() {
    if (samosbor) samosbor->manualSlowdown();
}

// Генерация случайного события
void MasterControlWindow::on_pushButtonRandomEvent_clicked() {
    if (eventGenerator)
        eventGenerator->generate();
}

#include "selectcharacterwindow.h"
#include "ui_selectcharacterwindow.h"
#include "playermodewindow.h"
#include "talenttreewidget.h" // ✅ добавлено
#include "style.h"

#include <QMessageBox>
#include <QToolButton>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QRegularExpression>
#include <QScreen>
#include <QFontDatabase>

// Конструктор окна выбора персонажа
SelectCharacterWindow::SelectCharacterWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::SelectCharacterWindow)
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
    //Не, реально, я просто копирую. Можно было сделать один механизм где то в mainwindow но здесь треш ад и садамия, потому так

    QDir().mkpath("data/characters"); // создаём папку, если её нет
    loadCharacters(); // загружаем список всех персонажей из JSON-файлов

    int fontId = QFontDatabase::addApplicationFont(":/fonts/fonts/clacon2.ttf");
    QString fontFam = QFontDatabase::applicationFontFamilies(fontId).at(0);

    QFont consoleFont14(fontFam, 14);
    QFont consoleFont12(fontFam, 12);
    QFont consoleFont10(fontFam, 10);

    int fontId2 = QFontDatabase::addApplicationFont(":/fonts/fonts/B52.ttf");
    QString fontFamWrite = QFontDatabase::applicationFontFamilies(fontId2).at(0);

    QFont writeFont14(fontFamWrite, 14);
    QFont writeFont12(fontFamWrite, 12);
    QFont writeFont10(fontFamWrite, 10);

    QList<QWidget*> allWidgets = this->findChildren<QWidget*>();
    for (QWidget* widget : allWidgets) {
        if (qobject_cast<QLabel*>(widget) || qobject_cast<QLineEdit*>(widget) || qobject_cast<QComboBox*> (widget) || qobject_cast<QSpinBox*>(widget)) {
            widget->setFont(writeFont14);
        } else if (qobject_cast<QPushButton*>(widget)) {
            widget->setFont(writeFont10);
        }
    }

    this->setFont(writeFont12);
    ui->pushButton->setFont(writeFont12);
    ui->labelMechanicSkillName->setFont(writeFont14);
    ui->labelElectronicsSkillName->setFont(writeFont14);
    ui->labelMedicineSkillName->setFont(writeFont14);

    ui->tabWidget->setFont(consoleFont14);

    ui->tabWidget->setStyleSheet(SCWstyle::tabWidget);

    ui->textEdit->setText(Texts::Text4TE);
    ui->textEdit_4->setText(Texts::Text4TE);
    ui->textEdit_5->setText(Texts::Text4TE_2);

    for (auto te : {ui->textEdit, ui->textEdit_2, ui->textEdit_3, ui->textEdit_4, ui->textEdit_5, ui->textEdit_6}) te->setFont(consoleFont14);

    // Подключение сигналов
    connect(ui->comboBoxCharacters, SIGNAL(currentIndexChanged(int)), this, SLOT(onCharacterSelected(int)));
    connect(ui->pushButtonSave, &QPushButton::clicked, this, &SelectCharacterWindow::onSaveCharacter);
    connect(ui->pushButton, &QPushButton::clicked, this, &SelectCharacterWindow::onDeleteCharacter);
    connect(ui->pushButtonBack, &QPushButton::clicked, this, &SelectCharacterWindow::onBackClicked);
    connect(ui->lineEditXp, &QLineEdit::editingFinished, this, &SelectCharacterWindow::onXpChanged);

    // Кнопка открытия окна талантов
    connect(ui->pushButtonTalent, &QPushButton::clicked, this, &SelectCharacterWindow::onTalentClicked);

    initializeTalentTree(); // заглушка — инициализация дерева талантов
}

// Деструктор
SelectCharacterWindow::~SelectCharacterWindow()
{
    delete ui;
}

// Загружает все .json-файлы персонажей из папки и добавляет их в comboBox
void SelectCharacterWindow::loadCharacters()
{
    characterMap.clear();
    ui->comboBoxCharacters->clear();

    QDir dir("data/characters");
    QStringList files = dir.entryList(QStringList() << "*.json", QDir::Files);

    for (const QString &filename : files) {
        QFile file(dir.filePath(filename));
        if (!file.open(QIODevice::ReadOnly))
            continue;

        QByteArray jsonData = file.readAll();
        file.close();

        QJsonDocument doc = QJsonDocument::fromJson(jsonData);
        if (!doc.isObject())
            continue;

        QString name = filename.section('.', 0, 0); // имя без .json
        characterMap[name] = doc.object();
        ui->comboBoxCharacters->addItem(name);
    }

    // Обновляем отображение первого персонажа
    if (!characterMap.isEmpty())
        updateCharacterInfo(ui->comboBoxCharacters->currentText());
}

// При выборе персонажа из списка — обновить данные
void SelectCharacterWindow::onCharacterSelected(int index)
{
    if (index < 0) return;
    QString selectedName = ui->comboBoxCharacters->itemText(index);
    updateCharacterInfo(selectedName);
}

// Обновляет UI по выбранному персонажу
void SelectCharacterWindow::updateCharacterInfo(const QString &name)
{
    if (!characterMap.contains(name)) return;

    QJsonObject character = characterMap[name];
    ui->labClass->setText(character["class"].toString());
    ui->labelLvL->setText(QString::number(character["level"].toInt()));
    ui->labelXp->setText(QString::number(character["xp"].toInt()));

    ui->spinBoxStrenght->setValue(character["strength"].toInt());
    ui->spinBoxAgility->setValue(character["agility"].toInt());
    ui->spinBoxIntelligence->setValue(character["intelligence"].toInt());
    ui->spinBoxWeaponSkill->setValue(character["weapon"].toInt());
    ui->spinBoxMedicineSkill->setValue(character["medicine"].toInt());
    ui->spinBoxMechanicSkill->setValue(character["mechanic"].toInt());
    ui->spinBoxElectronicsSkill->setValue(character["electronics"].toInt());

    QJsonArray traits = character["traits"].toArray();
    ui->labelTraits1->setText(traits.size() > 0 ? traits.at(0).toString() : "-");
    ui->labelTraits2->setText(traits.size() > 1 ? traits.at(1).toString() : "-");
    ui->labelTraits3->setText(traits.size() > 2 ? traits.at(2).toString() : "-");

    updatePointsLeft();
}

// Сохранение изменений в текущем персонаже
void SelectCharacterWindow::onSaveCharacter()
{
    QString name = ui->comboBoxCharacters->currentText();
    if (name.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Имя персонажа не выбрано.");
        return;
    }

    // Формируем JSON-структуру
    QJsonObject character;
    character["class"] = ui->labClass->text();
    character["level"] = ui->labelLvL->text().toInt();
    character["xp"] = ui->labelXp->text().toInt();
    character["strength"] = ui->spinBoxStrenght->value();
    character["agility"] = ui->spinBoxAgility->value();
    character["intelligence"] = ui->spinBoxIntelligence->value();
    character["weapon"] = ui->spinBoxWeaponSkill->value();
    character["medicine"] = ui->spinBoxMedicineSkill->value();
    character["mechanic"] = ui->spinBoxMechanicSkill->value();
    character["electronics"] = ui->spinBoxElectronicsSkill->value();

    // Черты
    QJsonArray traitsArray;
    traitsArray.append(ui->labelTraits1->text());
    traitsArray.append(ui->labelTraits2->text());
    traitsArray.append(ui->labelTraits3->text());
    character["traits"] = traitsArray;

    QString filePath = "data/characters/" + name + ".json";
    QFile file(filePath);

    if (file.exists()) {
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Перезапись",
                                                                  "Файл персонажа уже существует. Перезаписать?",
                                                                  QMessageBox::Yes | QMessageBox::No);
        if (reply != QMessageBox::Yes)
            return;
    }

    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось сохранить файл.");
        return;
    }

    QJsonDocument doc(character);
    file.write(doc.toJson());
    file.close();

    characterMap[name] = character;

    QMessageBox::information(this, "Сохранено", "Персонаж успешно сохранён.");
}

// Удаление выбранного персонажа
void SelectCharacterWindow::onDeleteCharacter()
{
    QString name = ui->comboBoxCharacters->currentText();
    if (name.isEmpty()) return;

    QString filePath = "data/characters/" + name + ".json";
    QFile::remove(filePath);
    characterMap.remove(name);
    ui->comboBoxCharacters->removeItem(ui->comboBoxCharacters->currentIndex());

    if (!characterMap.isEmpty())
        updateCharacterInfo(ui->comboBoxCharacters->currentText());
}

// Переход назад в окно игрока
void SelectCharacterWindow::onBackClicked()
{
    this->close();
    PlayerModeWindow *playerWindow = new PlayerModeWindow();
    playerWindow->show();
}

// === Заглушки ===

void SelectCharacterWindow::onXpChanged()
{
    // TODO: Реализовать логику повышения уровня и перерасчёта
}

void SelectCharacterWindow::onTalentClicked()
{
    if (!talentWidgetWindow) {
        talentWidgetWindow = new TalentTreeWidget();
        talentWidgetWindow->setAttribute(Qt::WA_DeleteOnClose); // Автоматическое удаление при закрытии
    }

    QString name = ui->comboBoxCharacters->currentText();
    talentWidgetWindow->setWindowTitle("Таланты: " + name);

    talentWidgetWindow->show();
    talentWidgetWindow->raise();
    talentWidgetWindow->activateWindow();
}

void SelectCharacterWindow::initializeTalentTree()
{
    // TODO: Привязать кнопки талантов, расставить состояния (доступен / недоступен)
}

void SelectCharacterWindow::updatePointsLeft()
{
    // TODO: Реализовать пересчёт доступных очков характеристик/навыков
}

bool SelectCharacterWindow::eventFilter(QObject *obj, QEvent *event)
{
    return false;
}

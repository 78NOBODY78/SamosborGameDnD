#include <QMessageBox>
#include <QRandomGenerator>
#include <iterator>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QDir>
#include <QRegularExpression>
#include <QScreen>
#include <QFontDatabase>

#include "createcharacterwindow.h"
#include "ui_createcharacterwindow.h"
#include "character_traits.h"
#include "character_skills.h"
#include "character_classes.h"

// Конструктор окна создания персонажа
CreateCharacterWindow::CreateCharacterWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::CreateCharacterWindow)
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


    // Подключение кнопок управления
    connect(ui->pushButtonCreate, &QPushButton::clicked, this, &CreateCharacterWindow::onCreateCharacter);
    connect(ui->pushButtoSave, &QPushButton::clicked, this, &CreateCharacterWindow::onSaveCharacter);
    connect(ui->pushButtonBack, &QPushButton::clicked, this, &CreateCharacterWindow::onBackClicked);
    connect(ui->pushButtonHelpClass, &QPushButton::clicked, this, &CreateCharacterWindow::onHelpClassClicked);

    // Подключение кнопок справки по чертам
    connect(ui->pushButtonTraitsHelp1, &QPushButton::clicked, this, &CreateCharacterWindow::onTraitsHelp1Clicked);
    connect(ui->pushButtonTraitsHelp2, &QPushButton::clicked, this, &CreateCharacterWindow::onTraitsHelp2Clicked);
    connect(ui->pushButtonTraitsHelp3, &QPushButton::clicked, this, &CreateCharacterWindow::onTraitsHelp3Clicked);

    // Обновление доступных очков при изменении характеристик
    connect(ui->spinBoxStrenght, SIGNAL(valueChanged(int)), this, SLOT(onPointsChanged()));
    connect(ui->spinBoxAgility, SIGNAL(valueChanged(int)), this, SLOT(onPointsChanged()));
    connect(ui->spinBoxIntelligence, SIGNAL(valueChanged(int)), this, SLOT(onPointsChanged()));

    // Разрешаем значения до -1 (например, для штрафов)
    ui->spinBoxStrenght->setMinimum(-1);
    ui->spinBoxAgility->setMinimum(-1);
    ui->spinBoxIntelligence->setMinimum(-1);

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
}

// Деструктор
CreateCharacterWindow::~CreateCharacterWindow()
{
    delete ui;
}

// Генерация значений навыков на основе выбранного класса
void CreateCharacterWindow::generateSkills()
{
    QString selectedClass = ui->comboBoxClass->currentText();

    ui->labelWeaponSkill->setText(QString::number(CharacterSkills::generateSkill(selectedClass, "Оружие")));
    ui->labelMedicineSkill->setText(QString::number(CharacterSkills::generateSkill(selectedClass, "Медицина")));
    ui->labelMechanicSkill->setText(QString::number(CharacterSkills::generateSkill(selectedClass, "Механика")));
    ui->labelElectronicsSkill->setText(QString::number(CharacterSkills::generateSkill(selectedClass, "Электроника")));
}

// Генерация трёх случайных уникальных черт из пула
void CreateCharacterWindow::generateTraits()
{
    auto traits = CharacterTraits::getTraits();
    selectedTraits.clear();

    if (traits.isEmpty()) {
        ui->labelTraits1->setText("-");
        ui->labelTraits2->setText("-");
        ui->labelTraits3->setText("-");
        return;
    }

    // Выбираем 3 уникальные черты случайным образом
    while (selectedTraits.size() < 3) {
        int randomIndex = QRandomGenerator::global()->bounded(traits.size());
        auto it = traits.begin();
        std::advance(it, randomIndex);

        if (!selectedTraits.contains(it.key())) {
            selectedTraits.append(it.key());
        }
    }

    ui->labelTraits1->setText(selectedTraits[0]);
    ui->labelTraits2->setText(selectedTraits[1]);
    ui->labelTraits3->setText(selectedTraits[2]);
}

// Пересчёт и отображение оставшихся очков характеристик
void CreateCharacterWindow::updatePointsLeft()
{
    int total = ui->spinBoxStrenght->value() +
                ui->spinBoxAgility->value() +
                ui->spinBoxIntelligence->value();

    pointsLeft = 3 - total;

    // Показываем либо остаток, либо заимствование
    ui->labelPointsLeft->setText(pointsLeft < 0
                                     ? "Заимствовано: " + QString::number(-pointsLeft)
                                     : "Осталось очков: " + QString::number(pointsLeft));

    // Ограничиваем максимум, чтобы пользователь не превысил допустимое число
    ui->spinBoxStrenght->setMaximum(pointsLeft + ui->spinBoxStrenght->value());
    ui->spinBoxAgility->setMaximum(pointsLeft + ui->spinBoxAgility->value());
    ui->spinBoxIntelligence->setMaximum(pointsLeft + ui->spinBoxIntelligence->value());
}

// Нажатие кнопки "Создать": генерируем черты и навыки
void CreateCharacterWindow::onCreateCharacter()
{
    generateSkills();
    generateTraits();
}

// Сохранение персонажа в JSON-файл
void CreateCharacterWindow::onSaveCharacter()
{
    QString characterName = ui->lineEditName->text().trimmed();

    // Проверка на пустое имя
    if (characterName.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Имя персонажа не может быть пустым.");
        return;
    }

    // Удаляем недопустимые символы из имени
    QString safeName = characterName;
    safeName.remove(QRegularExpression(R"([^a-zA-Z0-9А-Яа-я_ -])"));

    QString dirPath = "data/characters/";
    QDir().mkpath(dirPath); // Создаём папку, если её нет

    QString fileName = dirPath + safeName + ".json";

    // Проверка на существование файла
    if (QFile::exists(fileName)) {
        QMessageBox::warning(this, "Ошибка",
                             QString("Персонаж с именем \"%1\" уже существует. Выберите другое имя.").arg(characterName));
        return;
    }

    // Формируем JSON-объект с данными персонажа
    QJsonObject characterData;
    characterData["class"] = ui->comboBoxClass->currentText();
    characterData["level"] = 0;
    characterData["experience"] = 0;
    characterData["strength"] = ui->spinBoxStrenght->value();
    characterData["agility"] = ui->spinBoxAgility->value();
    characterData["intellect"] = ui->spinBoxIntelligence->value();
    characterData["weapon"] = ui->labelWeaponSkill->text().toInt();
    characterData["medicine"] = ui->labelMedicineSkill->text().toInt();
    characterData["mechanic"] = ui->labelMechanicSkill->text().toInt();
    characterData["electronics"] = ui->labelElectronicsSkill->text().toInt();

    // Сохраняем черты в виде массива
    QJsonArray traitsArray;
    for (const QString &trait : selectedTraits) {
        traitsArray.append(trait);
    }
    characterData["traits"] = traitsArray;

    // Запись в файл
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл для записи.");
        return;
    }

    QJsonDocument jsonDoc(characterData);
    file.write(jsonDoc.toJson(QJsonDocument::Indented));
    file.close();

    QMessageBox::information(this, "Сохранение", QString("Персонаж сохранён в файл:\n%1").arg(fileName));
}

// Кнопка "Назад" — закрытие окна и удаление экземпляра
void CreateCharacterWindow::onBackClicked()
{
    emit this->destroyed();
    this->close();
}

// Справка по первой черте
void CreateCharacterWindow::onTraitsHelp1Clicked()
{
    QMessageBox::information(this, "Описание",
                             CharacterTraits::getTraits().value(selectedTraits.value(0, ""), "Нет описания"));
}

// Справка по второй черте
void CreateCharacterWindow::onTraitsHelp2Clicked()
{
    QMessageBox::information(this, "Описание",
                             CharacterTraits::getTraits().value(selectedTraits.value(1, ""), "Нет описания"));
}

// Справка по третьей черте
void CreateCharacterWindow::onTraitsHelp3Clicked()
{
    QMessageBox::information(this, "Описание",
                             CharacterTraits::getTraits().value(selectedTraits.value(2, ""), "Нет описания"));
}

// Справка по выбранному классу
void CreateCharacterWindow::onHelpClassClicked()
{
    QMap<QString, QString> classDescriptions = {
        {"Офицер Службы Безопасности", "Ты привык держать людей в страхе. Охранник или бугай — это не важно. Когда ты видишь хаос, твоя рука тянется к оружию, и сила кажется единственным ответом. Но с каждым разом ты ощущаешь, как твоя власть над чужими жизнями становится иллюзией. В темных коридорах Гигахрущёвки твоя уверенность растворяется, когда сталкиваешься с тем, что не можешь контролировать. Самосбору плевать на твои полномочия. Здесь ты не вершишь судьбы — ты лишь очередная пешка в игре, где правила меняются слишком быстро, чтобы успеть за ними."},
        {"Медик", "Ты когда-то лечил людей. Возможно, ты и сейчас пытаешься это делать, склеивая их из лоскутков человеческих жизней. Однако в этом мире лечить — это не значит спасать. Здесь раны никогда не заживают до конца, а каждый пациент — лишь очередной шаг к бездне. Ты можешь зашить их тела, но спасешь ли их разум?."},
        {"Инженер", "Ты тот, кто заставляет эту трупную машину дышать. Ты возишься с проводами, трубами, механизмами, которых больше не должно существовать. Каждый раз, когда ты что-то чинишь, ты задаешься вопросом: а стоило ли? Гигахрущёвка всё равно разваливается. Все твои усилия — лишь временная передышка перед следующим крахом."},
        {"Механик", "Шестерни, двигатели, генераторы — это твои дети. Ты знаешь их на ощупь, на слух, на вкус. Каждый гул двигателя — это жизнь, которую ты продлил. Но что-то внутри тебя шепчет: все эти машины когда-нибудь остановятся, и вместе с ними остановишься и ты. Ты умеешь дышать этим металлическим чудовищем, но дышит ли оно тобой?."},
        {"Помощник", "Ты никем не стал, потому что этот мир не оставил тебе выбора. Ты — тот, кто заполняет пустоты, кого используют там, где другие не справляются. Твоя жизнь — это набор задач, которые тебе поручают, потому что никто больше не хочет их выполнять. Ты способен на многое, но в мире, где нет места для мастерства, твои навыки обесценены. Твоя роль — быть частью системы, которая тебя даже не замечает. Ты винтик в машине, которая ломается каждый день, и когда она окончательно остановится, никто даже не вспомнит, что ты был."}
    };

    // Показываем описание выбранного класса
    QMessageBox::information(this, "Описание класса",
                             classDescriptions.value(ui->comboBoxClass->currentText(), "Описание отсутствует"));
}

// Обновление навыков при смене класса (если будет подключено)
void CreateCharacterWindow::onClassChanged()
{
    generateSkills();
}

// Обновление оставшихся очков при изменении характеристик
void CreateCharacterWindow::onPointsChanged()
{
    updatePointsLeft();
}

#include "battlecontroller.h"
#include "terminalprinter.h"

#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>
#include <QRadioButton>
#include <QPushButton>
#include <QGroupBox>
#include <QTextEdit>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QRandomGenerator>
#include <QLabel>

// Конструктор контроллера боя. Сохраняет указатель на терминал для вывода сообщений
BattleController::BattleController(TerminalPrinter* printer, QObject* parent)
    : QObject(parent), terminal(printer)
{}

// Устанавливает указатели на группбоксы для игрока, NPC и инициативы, отключает их по умолчанию
void BattleController::setGroupBoxes(QGroupBox* playerBox, QGroupBox* npcBox, QGroupBox* initiativeBox)
{
    groupBoxPlayer = playerBox;
    groupBoxNPC = npcBox;
    groupBoxInitiative = initiativeBox;

    if (groupBoxPlayer) groupBoxPlayer->setEnabled(false);
    if (groupBoxNPC) groupBoxNPC->setEnabled(false);
    if (groupBoxInitiative) groupBoxInitiative->setEnabled(false);
}

// Настройка элементов управления для игрока и подключение сигналов
void BattleController::setupPlayerControls(QComboBox* characterSelect,
                                           QLineEdit* hitInput,
                                           QComboBox* weaponType,
                                           QRadioButton* standard, QRadioButton* advantage, QRadioButton* disadvantage,
                                           QSpinBox* str, QSpinBox* agi, QSpinBox* intl,
                                           QSpinBox* weapon, QSpinBox* medicine,
                                           QSpinBox* mechanic, QSpinBox* electronics,
                                           QPushButton* calcButton,
                                           QLabel* classLabel)
{
    // Сохраняем все виджеты
    characterSelectPlayer = characterSelect;
    inputPlayer = hitInput;
    weaponTypePlayer = weaponType;
    rbStandardPlayer = standard;
    rbAdvantagePlayer = advantage;
    rbDisadvantagePlayer = disadvantage;
    strP = str;
    agiP = agi;
    intP = intl;
    wpnP = weapon;
    medP = medicine;
    mechP = mechanic;
    elecP = electronics;

    // Сохраняем label класса
    labelClassPlayer = classLabel;

    // Подключаем сигналы
    connect(calcButton, &QPushButton::clicked, this, &BattleController::handlePlayerCalculate);
    connect(characterSelectPlayer, &QComboBox::currentTextChanged,
            this, &BattleController::onPlayerCharacterChanged);
}


// Настройка элементов управления для NPC и подключение сигналов
void BattleController::setupNPCControls(QComboBox* weaponType,
                                        QRadioButton* standard, QRadioButton* advantage, QRadioButton* disadvantage,
                                        QSpinBox* str, QSpinBox* agi, QSpinBox* intl,
                                        QSpinBox* weapon, QSpinBox* medicine,
                                        QSpinBox* mechanic, QSpinBox* electronics,
                                        QPushButton* rollButton, QPushButton* calcButton)
{
    // Сохраняем все виджеты
    weaponTypeNPC = weaponType;
    rbStandardNPC = standard;
    rbAdvantageNPC = advantage;
    rbDisadvantageNPC = disadvantage;
    strN = str;
    agiN = agi;
    intN = intl;
    wpnN = weapon;
    medN = medicine;
    mechN = mechanic;
    elecN = electronics;

    // Подключаем кнопки NPC
    connect(rollButton, &QPushButton::clicked, this, &BattleController::handleNPCRoll);
    connect(calcButton, &QPushButton::clicked, this, &BattleController::handleNPCCalculate);
}

void BattleController::onPlayerCharacterChanged(const QString& characterName)
{
    QString path = "data/characters/" + characterName + ".json";
    QFile file(path);

    if (!file.open(QIODevice::ReadOnly)) {
        terminal->print("⚠ Не удалось открыть файл персонажа: " + path);
        return;
    }

    QJsonParseError parseError;
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll(), &parseError);
    file.close();

    if (parseError.error != QJsonParseError::NoError || !doc.isObject()) {
        terminal->print("⚠ Ошибка чтения JSON персонажа: " + parseError.errorString());
        return;
    }

    QJsonObject obj = doc.object();

    // Установка характеристик игрока из JSON
    if (strP) strP->setValue(obj["strength"].toInt());
    if (agiP) agiP->setValue(obj["agility"].toInt());
    if (intP) intP->setValue(obj["intelligence"].toInt());
    if (wpnP) wpnP->setValue(obj["weapon"].toInt());
    if (medP) medP->setValue(obj["medicine"].toInt());
    if (mechP) mechP->setValue(obj["mechanic"].toInt());
    if (elecP) elecP->setValue(obj["electronics"].toInt());

    // Установка класса персонажа в label
    QString charClass = obj["class"].toString();  // убедись, что ключ — "class", не "класс"
    if (labelClassPlayer) {
        labelClassPlayer->setText(charClass);
    }

    terminal->print("✅ Персонаж " + characterName + " загружен в боевой модуль.");
}

// Обработка ручного ввода броска игрока и расчёт результата с модификаторами
void BattleController::handlePlayerCalculate()
{
    if (!inputPlayer) return;

    QStringList values = inputPlayer->text().trimmed().split(",");
    int roll = 0;

    // Определяем результат броска в зависимости от режима (обычный, с преимуществом, с помехой)
    if (rbStandardPlayer->isChecked() && values.size() == 1)
        roll = values[0].toInt();
    else if (rbAdvantagePlayer->isChecked() && values.size() == 2)
        roll = std::max(values[0].toInt(), values[1].toInt());
    else if (rbDisadvantagePlayer->isChecked() && values.size() == 2)
        roll = std::min(values[0].toInt(), values[1].toInt());
    else {
        terminal->print("⚠ Неверный ввод броска игрока.");
        return;
    }

    // Определяем тип атаки (дальний/ближний)
    bool ranged = weaponTypePlayer->currentText().contains("дальн", Qt::CaseInsensitive);

    // Считаем модификаторы и финальный результат
    int mod = calculateModifiers(ranged,
                                 strP->value(), agiP->value(), intP->value(),
                                 wpnP->value(), medP->value());

    int total = roll + mod;
    terminal->print(QString("🎯 Игрок бросает d20 (%1) + модификаторы (%2) = %3").arg(roll).arg(mod).arg(total));
}

// Генерация броска d20 для NPC
void BattleController::handleNPCRoll()
{
    npcRoll = QRandomGenerator::global()->bounded(1, 21);  // d20: от 1 до 20 включительно
    terminal->print(QString("🎲 NPC бросает: %1").arg(npcRoll));
}

// Расчёт результата NPC с учётом модификаторов
void BattleController::handleNPCCalculate()
{
    bool ranged = weaponTypeNPC->currentText().contains("дальн", Qt::CaseInsensitive);

    int mod = calculateModifiers(ranged,
                                 strN->value(), agiN->value(), intN->value(),
                                 wpnN->value(), medN->value());

    int total = npcRoll + mod;
    terminal->print(QString("🎯 NPC: %1 + модификаторы (%2) = %3").arg(npcRoll).arg(mod).arg(total));
}

// Функция подсчёта модификаторов в зависимости от типа атаки
int BattleController::calculateModifiers(bool isRanged,
                                         int str, int agi, int intl,
                                         int wpn, int med)
{
    // Выбор характеристик в зависимости от типа атаки
    double h1 = isRanged ? static_cast<double>(intl) : static_cast<double>(str);
    double h2 = static_cast<double>(agi);

    // Нормализация навыков (приведение к диапазону 0–10)
    double wpnNorm = static_cast<double>(wpn) / 10.0;
    double medNorm = static_cast<double>(med) / 10.0;

    // Коэффициенты
    const double kH1 = 0.5;   // интеллект или сила
    const double kH2 = 1.0;   // ловкость
    const double kW  = 1.5;   // оружие (нормализованное)
    const double kM  = 0.2;   // медицина (нормализованная)

    // Подсчёт модификатора
    double mod = h1 * kH1 + h2 * kH2 + wpnNorm * kW + medNorm * kM;

    // Возврат округлённого значения
    return static_cast<int>(qRound(mod));
}


// Активация режима боя: включение блоков управления
void BattleController::startBattle()
{
    terminal->print("⚔️ Бой начался!");

    // Подгружаем выбранного персонажа в боевые поля
    if (characterSelectPlayer && !characterSelectPlayer->currentText().isEmpty()) {
        onPlayerCharacterChanged(characterSelectPlayer->currentText());
    }

    // Активация всех виджетов
    if (groupBoxPlayer) groupBoxPlayer->setEnabled(true);
    if (groupBoxNPC) groupBoxNPC->setEnabled(true);
    if (groupBoxInitiative) groupBoxInitiative->setEnabled(true);

    if (characterSelectPlayer) characterSelectPlayer->setEnabled(true);
    if (inputPlayer) inputPlayer->setEnabled(true);
    if (weaponTypePlayer) weaponTypePlayer->setEnabled(true);
    if (rbStandardPlayer) rbStandardPlayer->setEnabled(true);
    if (rbAdvantagePlayer) rbAdvantagePlayer->setEnabled(true);
    if (rbDisadvantagePlayer) rbDisadvantagePlayer->setEnabled(true);
    if (strP) strP->setEnabled(true);
    if (agiP) agiP->setEnabled(true);
    if (intP) intP->setEnabled(true);
    if (wpnP) wpnP->setEnabled(true);
    if (medP) medP->setEnabled(true);
    if (mechP) mechP->setEnabled(true);
    if (elecP) elecP->setEnabled(true);

    if (weaponTypeNPC) weaponTypeNPC->setEnabled(true);
    if (rbStandardNPC) rbStandardNPC->setEnabled(true);
    if (rbAdvantageNPC) rbAdvantageNPC->setEnabled(true);
    if (rbDisadvantageNPC) rbDisadvantageNPC->setEnabled(true);
    if (strN) strN->setEnabled(true);
    if (agiN) agiN->setEnabled(true);
    if (intN) intN->setEnabled(true);
    if (wpnN) wpnN->setEnabled(true);
    if (medN) medN->setEnabled(true);
    if (mechN) mechN->setEnabled(true);
    if (elecN) elecN->setEnabled(true);
}

// Завершение боя: отключение блоков и очистка всех полей
void BattleController::endBattle()
{
    terminal->print("🏁 Бой завершён.");

    // Лямбда для очистки полей и отключения блоков
    auto clearWidgets = [](QGroupBox* box) {
        if (!box) return;
        box->setEnabled(false);

        // Сброс всех SpinBox
        QList<QSpinBox*> spins = box->findChildren<QSpinBox*>(QString(), Qt::FindChildrenRecursively);
        for (QSpinBox* s : spins) s->setValue(0);

        // Очистка всех LineEdit
        QList<QLineEdit*> lines = box->findChildren<QLineEdit*>(QString(), Qt::FindChildrenRecursively);
        for (QLineEdit* l : lines) l->clear();

        // Очистка всех TextEdit
        QList<QTextEdit*> texts = box->findChildren<QTextEdit*>(QString(), Qt::FindChildrenRecursively);
        for (QTextEdit* t : texts) t->clear();

        // Сброс ComboBox
        QList<QComboBox*> combos = box->findChildren<QComboBox*>(QString(), Qt::FindChildrenRecursively);
        for (QComboBox* c : combos) c->setCurrentIndex(0);

        // Сброс RadioButton
        QList<QRadioButton*> radios = box->findChildren<QRadioButton*>(QString(), Qt::FindChildrenRecursively);
        for (QRadioButton* r : radios) r->setChecked(false);
    };

    // Применяем очистку ко всем блокам
    clearWidgets(groupBoxPlayer);
    clearWidgets(groupBoxNPC);
    clearWidgets(groupBoxInitiative);
}

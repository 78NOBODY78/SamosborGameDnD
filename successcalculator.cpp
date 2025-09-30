#include "successcalculator.h"
#include "terminalprinter.h"

#include <QComboBox>
#include <QSpinBox>
#include <QLabel>
#include <QPushButton>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QtMath>

// Конструктор: сохраняет указатель на терминал для логирования
SuccessCalculator::SuccessCalculator(TerminalPrinter* printer, QObject* parent)
    : QObject(parent), terminal(printer) {}

// Настройка всех элементов UI
void SuccessCalculator::setupUI(QComboBox* characterSelect,
                                QLabel* classLabel,
                                QSpinBox* str, QSpinBox* agi, QSpinBox* intl,
                                QSpinBox* wpn, QSpinBox* med, QSpinBox* mech, QSpinBox* elec,
                                QComboBox* difficulty,
                                QComboBox* crit1, QComboBox* crit2, QComboBox* crit3, QComboBox* crit4,
                                QComboBox* skill1, QComboBox* skill2,
                                QSpinBox* masterMod,
                                QPushButton* calcButton)
{
    // Сохраняем указатели на виджеты
    this->characterSelect = characterSelect;
    this->classLabel = classLabel;
    this->str = str;
    this->agi = agi;
    this->intl = intl;
    this->wpn = wpn;
    this->med = med;
    this->mech = mech;
    this->elec = elec;
    this->difficulty = difficulty;
    this->crit1 = crit1;
    this->crit2 = crit2;
    this->crit3 = crit3;
    this->crit4 = crit4;
    this->skill1 = skill1;
    this->skill2 = skill2;
    this->masterMod = masterMod;
    this->calcButton = calcButton;

    // Подключение кнопки расчёта и выбора персонажа
    connect(calcButton, &QPushButton::clicked, this, &SuccessCalculator::calculateSuccess);
    connect(characterSelect, &QComboBox::currentTextChanged, this, &SuccessCalculator::onCharacterChanged);

    // Заполняем список персонажей из папки
    QDir charDir("data/characters/");
    if (charDir.exists()) {
        QStringList files = charDir.entryList(QStringList() << "*.json", QDir::Files);
        for (const QString& file : files) {
            QString charName = file;
            charName.chop(5); // убираем ".json"
            characterSelect->addItem(charName);
        }
    }
}

// Загружаем характеристики выбранного персонажа
void SuccessCalculator::onCharacterChanged(const QString& name)
{
    if (name.trimmed().isEmpty())
        return;

    QString path = "data/characters/" + name + ".json";
    QFile file(path);
    if (!file.exists()) {
        terminal->print("⚠️ Персонаж \"" + name + "\" не найден.");
        return;
    }

    if (!file.open(QIODevice::ReadOnly)) {
        terminal->print("❌ Не удалось открыть файл персонажа: " + file.errorString());
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isObject()) {
        terminal->print("❌ Неверный формат JSON у персонажа " + name);
        return;
    }

    QJsonObject obj = doc.object();

    // Устанавливаем значения в соответствующие поля
    str->setValue(obj["strength"].toInt());
    agi->setValue(obj["agility"].toInt());
    intl->setValue(obj["intellect"].toInt());
    wpn->setValue(obj["weapon"].toInt());
    med->setValue(obj["medicine"].toInt());
    mech->setValue(obj["mechanic"].toInt());
    elec->setValue(obj["electronics"].toInt());

    classLabel->setText(obj["class"].toString());
    terminal->print("✅ Загружен персонаж: " + name);
}

// Расчёт минимального броска для успеха и его подробный вывод
void SuccessCalculator::calculateSuccess()
{
    // Получаем значения из интерфейса
    QString critType = crit1->currentText();   // тип действия
    QString statSource = crit2->currentText(); // характеристика
    QString skillA = skill1->currentText();    // основной навык
    QString skillB = skill2->currentText();    // дополнительный навык
    QString diff = difficulty->currentText();  // сложность
    int mod = masterMod->value();              // модификатор мастера

    // Извлекаем числовые значения
    int B = getBaseDifficulty(diff);
    int H = getStatByName(statSource);
    int No = getSkillByName(skillA);
    int Nd = getSkillByName(skillB);
    int C = getCriteriaModifier(critType);

    // Коэффициенты
    double KH = 2.0;
    double KNo = 1.0;
    double KNd = 0.5;
    double KC = 1.0;

    // Нормализованные значения навыков
    double NoNorm = No / 10.0;
    double NdNorm = Nd / 10.0;

    // Расчёт по новой формуле
    double bonus = H * KH + NoNorm * KNo + NdNorm * KNd + C * KC;
    double raw = B - bonus + mod;
    int T = qBound(1, static_cast<int>(qRound(raw)), 20); // ограничение 1–20

    // Вывод
    QString log = formatBreakdown(B, H, No, Nd, C, mod, T);
    terminal->print(log);
}

// Возвращает базовое значение сложности по её названию
int SuccessCalculator::getBaseDifficulty(const QString& level)
{
    if (level == "Очень лёгкое") return 5;
    if (level == "Лёгкое") return 10;
    if (level == "Среднее") return 15;
    if (level == "Сложное") return 20;
    if (level == "Очень сложное") return 25;
    if (level == "Экстремальное") return 30;
    return 15;
}

// Возвращает значение характеристики по её типу
int SuccessCalculator::getStatByName(const QString& name)
{
    if (name == "Физическое") return str->value();
    if (name == "Умственное") return intl->value();
    if (name == "Гибридное") return agi->value();
    return 0;
}

// Возвращает значение навыка по названию
int SuccessCalculator::getSkillByName(const QString& name)
{
    if (name == "Оружие") return wpn->value();
    if (name == "Медицина") return med->value();
    if (name == "Механика") return mech->value();
    if (name == "Электроника") return elec->value();
    return 0;
}

// Возвращает числовой модификатор критерия действия
int SuccessCalculator::getCriteriaModifier(const QString& crit)
{
    if (crit == "Конструктивное") return 2;
    if (crit == "Деструктивное ") return 3;
    if (crit == "Аналитическое ") return 2;
    return 0;
}

// Форматирует и возвращает подробный отчёт расчёта
QString SuccessCalculator::formatBreakdown(int B, int Hval, int No, int Nd, int Cmod, int M, int T)
{
    double res = B - (Hval*2 + No*1.5 + Nd*1.5 + Cmod*2) + M;
    return QString(
               "🧮 Расчёт успеха:\n"
               "• Базовая сложность (B): %1\n"
               "• Характеристика (H=%2) × 2 = %3\n"
               "• Навык 1 (No=%4) × 1.5 = %5\n"
               "• Навык 2 (Nd=%6) × 1.5 = %7\n"
               "• Тип действия (C=%8) × 2 = %9\n"
               "• Модификатор мастера (M): %10\n"
               "→ Итого: %11 → Требуемый бросок: 🎯 %12")
        .arg(B)
        .arg(Hval).arg(Hval*2)
        .arg(No).arg(No*1.5)
        .arg(Nd).arg(Nd*1.5)
        .arg(Cmod).arg(Cmod*2)
        .arg(M)
        .arg(QString::number(res, 'f', 2))
        .arg(T);
}

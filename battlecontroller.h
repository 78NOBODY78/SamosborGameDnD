#ifndef BATTLECONTROLLER_H
#define BATTLECONTROLLER_H

#include <QObject>

// Предварительные объявления используемых классов Qt
class QLineEdit;
class QComboBox;
class QSpinBox;
class QRadioButton;
class QPushButton;
class QGroupBox;
class QTextEdit;
class QLabel;  // ✅ Исправлено: было QLable

class TerminalPrinter; // Для вывода информации в терминал

// === Контроллер боя ===
// Отвечает за:
// - Настройку интерфейса игрока и NPC
// - Расчёты боевых бросков
// - Вывод результатов в терминал
class BattleController : public QObject
{
    Q_OBJECT

public:
    explicit BattleController(TerminalPrinter* printer, QObject* parent = nullptr);

    // Устанавливает указатели на groupBox'ы, чтобы можно было их скрывать/показывать
    void setGroupBoxes(QGroupBox* playerBox, QGroupBox* npcBox, QGroupBox* initiativeBox);

    // Настройка UI-контролов игрока
    void setupPlayerControls(QComboBox* characterSelect, // выбор персонажа
                             QLineEdit* hitInput,        // поле для ручного броска
                             QComboBox* weaponType,      // тип оружия
                             QRadioButton* standard, QRadioButton* advantage, QRadioButton* disadvantage, // режим броска
                             QSpinBox* str, QSpinBox* agi, QSpinBox* intl,                                  // характеристики
                             QSpinBox* weapon, QSpinBox* medicine,                                          // навыки
                             QSpinBox* mechanic, QSpinBox* electronics,                                     // навыки
                             QPushButton* calcButton,                                                       // кнопка "рассчитать"
                             QLabel* classLabel);                                                           // ✅ добавлено: label для отображения класса

    // Настройка UI-контролов NPC
    void setupNPCControls(QComboBox* weaponType,
                          QRadioButton* standard, QRadioButton* advantage, QRadioButton* disadvantage,
                          QSpinBox* str, QSpinBox* agi, QSpinBox* intl,
                          QSpinBox* weapon, QSpinBox* medicine,
                          QSpinBox* mechanic, QSpinBox* electronics,
                          QPushButton* rollButton, QPushButton* calcButton);

public slots:
    void onPlayerCharacterChanged(const QString& characterName);
    void handlePlayerCalculate();
    void handleNPCRoll();
    void handleNPCCalculate();
    void startBattle();
    void endBattle();

private:
    int calculateModifiers(bool isRanged, int str, int agi, int intl, int wpn, int med);

    TerminalPrinter* terminal = nullptr;

    // === GroupBox'ы ===
    QGroupBox* groupBoxPlayer = nullptr;
    QGroupBox* groupBoxNPC = nullptr;
    QGroupBox* groupBoxInitiative = nullptr;

    // === Элементы управления игрока ===
    QComboBox* characterSelectPlayer = nullptr;
    QLineEdit* inputPlayer = nullptr;
    QComboBox* weaponTypePlayer = nullptr;
    QRadioButton *rbStandardPlayer = nullptr, *rbAdvantagePlayer = nullptr, *rbDisadvantagePlayer = nullptr;
    QSpinBox *strP = nullptr, *agiP = nullptr, *intP = nullptr;
    QSpinBox *wpnP = nullptr, *medP = nullptr, *mechP = nullptr, *elecP = nullptr;
    QLabel* labelClassPlayer = nullptr;  // ✅ добавлено поле для label класса персонажа

    // === Элементы управления NPC ===
    QComboBox* weaponTypeNPC = nullptr;
    QRadioButton *rbStandardNPC = nullptr, *rbAdvantageNPC = nullptr, *rbDisadvantageNPC = nullptr;
    QSpinBox *strN = nullptr, *agiN = nullptr, *intN = nullptr;
    QSpinBox *wpnN = nullptr, *medN = nullptr, *mechN = nullptr, *elecN = nullptr;

    int npcRoll = 0; // результат броска NPC
};

#endif // BATTLECONTROLLER_H

#ifndef SUCCESSCALCULATOR_H
#define SUCCESSCALCULATOR_H

#include <QObject>

class QComboBox;
class QSpinBox;
class QLabel;
class QPushButton;
class TerminalPrinter;

class SuccessCalculator : public QObject
{
    Q_OBJECT

public:
    explicit SuccessCalculator(TerminalPrinter* printer, QObject* parent = nullptr);

    void setupUI(QComboBox* characterSelect,
                 QLabel* classLabel,
                 QSpinBox* str, QSpinBox* agi, QSpinBox* intl,
                 QSpinBox* wpn, QSpinBox* med, QSpinBox* mech, QSpinBox* elec,
                 QComboBox* difficulty,
                 QComboBox* crit1, QComboBox* crit2, QComboBox* crit3, QComboBox* crit4,
                 QComboBox* skill1, QComboBox* skill2,
                 QSpinBox* masterMod,
                 QPushButton* calcButton);

private slots:
    void onCharacterChanged(const QString& name);   // 🔄 Новый слот
    void calculateSuccess();                        // 🎯 Основной расчёт

private:
    TerminalPrinter* terminal;

    // UI элементы
    QComboBox* characterSelect;
    QLabel* classLabel;
    QSpinBox *str, *agi, *intl;
    QSpinBox *wpn, *med, *mech, *elec;
    QComboBox *difficulty;
    QComboBox *crit1, *crit2, *crit3, *crit4;
    QComboBox *skill1, *skill2;
    QSpinBox* masterMod;
    QPushButton* calcButton;

    // Вспомогательные методы
    int getStatByName(const QString& name);
    int getSkillByName(const QString& name);
    int getBaseDifficulty(const QString& level);
    int getCriteriaModifier(const QString& crit);
    QString formatBreakdown(int B, int Hval, int No, int Nd, int Cmod, int M, int T);
};

#endif // SUCCESSCALCULATOR_H

#ifndef TALENTTREEWIDGET_H
#define TALENTTREEWIDGET_H

#include <QWidget>
#include <QMap>
#include <QSet>
#include <QStringList>
#include "talentlogic.h"

namespace Ui { class TalentTreeWidget; }
class QPushButton;
class QGroupBox;

class TalentTreeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TalentTreeWidget(QWidget *parent = nullptr);
    ~TalentTreeWidget();

private slots:
    void onCharacterChanged(int index);
    void onTierTalentClicked();
    void onTierHelpClicked();
    void onSpecTalentClicked();
    void onSpecHelpClicked();
    void onSaveClicked();
    void onResetClicked();
    void onBackClicked();

private:
    Ui::TalentTreeWidget *ui = nullptr;
    TalentLogic* logic = nullptr;

    QString currentCharName;
    QString currentCharClass;
    int     currentCharLevel = 1;
    bool    dirty = false;

    QSet<QString> selectedIds;  // id выбранных талантов/вариантов
    QString lockedSpecKey;      // ключ выбранной ветки (пока не завершена)

    struct ButtonMap {
        QPushButton* btn = nullptr;
        QPushButton* help = nullptr;
        QString      talentId;
    };
    QVector<ButtonMap> tier1Buttons;
    QVector<ButtonMap> tier2Buttons;

    struct SpecGroup {
        QString   specKey;
        QGroupBox* box = nullptr;
        QVector<ButtonMap> levelBtns; // 3 уровня
    };
    QVector<SpecGroup> specGroups;

    // --- построение/обновление ---
    void setupConnections();
    void populateCharacterList();
    bool loadCharacter(const QString& name);
    bool loadTalentsForClass(const QString& className);

    void refreshHeader();
    void refreshAll();
    void refreshTiers();
    void refreshSpecializations();
    void fillTierButtons(const QVector<TalentLogic::Talent>& talents,
                         QVector<ButtonMap>& buttons);
    void setDirty(bool d);

    // --- визуальные состояния ---
    void updateTierButtonsEnabled();
    void updateSpecGroupsEnabled();
    void updateTierButtonsVisual();
    void updateSpecButtonsVisual();

    // --- правила/доступ ---
    int  takenInTier(int tier) const;
    bool canTakeTierTalent(int tierIndex) const;

    // --- действия ---
    void toggleTierTalent(const QString& id, const QString& nameForUI);
    bool takeSpecLevelOrChoice(int groupIdx, int levelIdx);

    // --- помощь и сервис ---
    void showTalentInfoDialog(const QString& id);
    QString talentNameById(const QString& id) const;
    QString talentDescById(const QString& id) const;

    QString chosenChoiceName(const TalentLogic::SpecLevel& L) const;
    QString chosenChoiceId  (const TalentLogic::SpecLevel& L) const;
    bool    isSpecCompleted (const QString& specKey) const;
    void    maybeUnlockSpecs(); // <-- разблокировка других веток, если текущая завершена

    // --- сохранение/выход ---
    QString characterFilePath(const QString& name) const;
    bool saveSelectedIdsToCharacter();
    bool askDiscardIfDirty();
};

#endif // TALENTTREEWIDGET_H

#ifndef SELECTCHARACTERWINDOW_H
#define SELECTCHARACTERWINDOW_H

#include <QWidget>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <QComboBox>
#include <QLabel>
#include <QSpinBox>
#include <QPushButton>
#include <QLineEdit>
#include <QMap>
#include <QSet>
#include <QToolButton>
#include <QEvent>

#include "talenttreewidget.h" // ✅ добавлено

namespace Ui {
class SelectCharacterWindow;
}

class SelectCharacterWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SelectCharacterWindow(QWidget *parent = nullptr);
    ~SelectCharacterWindow();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Ui::SelectCharacterWindow *ui;

    QMap<QString, QJsonObject> characterMap;
    int experienceThreshold = 150;
    int baseStatPointsPerLevel = 1;
    int baseSkillPointsPerLevel = 2;
    int baseXpPerLevel = 100;

    int statPointsLeft = 0;
    int skillPointsLeft = 0;

    QMap<int, QList<QToolButton*>> talentMap;
    QSet<int> unlockedLevels;
    QMap<int, QString> selectedTalents;

    TalentTreeWidget* talentWidgetWindow = nullptr; // ✅ добавлено

    void loadCharacters();
    void updateCharacterInfo(const QString &name);
    void updateExperience(int xpChange);
    void updateLevel();
    void updatePointsLeft();
    void updateSpinBoxes();
    void initializeTalentTree();
    void unlockLevel(int level);

private slots:
    void onCharacterSelected(int index);
    void onSaveCharacter();
    void onDeleteCharacter();
    void onBackClicked();
    void onXpChanged();
    void onTalentClicked(); // ✅ будет вызывать окно талантов
};

#endif // SELECTCHARACTERWINDOW_H

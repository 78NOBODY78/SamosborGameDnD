/********************************************************************************
** Form generated from reading UI file 'mastercontrolwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERCONTROLWINDOW_H
#define UI_MASTERCONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterControlWindow
{
public:
    QGroupBox *groupBoxSamosbor;
    QLabel *labelTimerSamosbor;
    QLabel *labelRangeInfoSamosbor;
    QLabel *labelSamosborState;
    QPushButton *pushButtonSamosborStart;
    QPushButton *pushButtonSamosborPause;
    QPushButton *pushButtonSamosborResume;
    QPushButton *pushButtonSamosborManualTrigger;
    QPushButton *pushButtonSamosborManualSlowdown;
    QGroupBox *groupBoxSuccessCalculator;
    QComboBox *comboBoxCharacterSelectAction;
    QLabel *labelClassAction;
    QLabel *labelStrenghtAction;
    QLabel *labelAgilityAction;
    QSpinBox *spinBoxAgilityAction;
    QSpinBox *spinBoxIntelligenceAction;
    QLabel *labelIntelligenceAction;
    QLabel *labelWeaponAction;
    QLabel *labelMedicineAction;
    QLabel *labelMechanicAction;
    QLabel *labelElectronicsAction;
    QSpinBox *spinBoxWeaponAction;
    QSpinBox *spinBoxMedicineAction;
    QSpinBox *spinBoxMechanicAction;
    QSpinBox *spinBoxElectronicsAction;
    QComboBox *comboBoxComplexity;
    QSpinBox *spinBox;
    QLabel *labMasterModify;
    QComboBox *comboBoxCriteria1;
    QComboBox *comboBoxCriteria2;
    QComboBox *comboBoxCriteria3;
    QComboBox *comboBoxSkill2;
    QComboBox *comboBoxSkill1;
    QPushButton *pushButtonCalculate;
    QSpinBox *spinBoxStrenghtAction;
    QComboBox *comboBoxCriteria4;
    QGroupBox *groupBoxKantsCounter;
    QGroupBox *groupBoxConnections;
    QPushButton *pushButtonCreateASession;
    QPushButton *pushButtonSaveASession;
    QPushButton *pushButtonEndTheSession;
    QPushButton *pushButtonJoinASession;
    QGroupBox *groupBoxCharacterToolkit;
    QGroupBox *groupBoxEvents;
    QPushButton *pushButtonRandomEvent;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit4Fun;
    QGroupBox *groupBoxBattle;
    QGroupBox *groupBoxBattlePlayer;
    QComboBox *comboBoxCharacterSelectBattlePlayer;
    QLabel *labelClassBattlePlayer;
    QLabel *labelStrenghtBattlePlayer;
    QLabel *labelAgilityBattlePlayer;
    QSpinBox *spinBoxAgilityBattlePlayer;
    QSpinBox *spinBoxIntelligenceBattlePlayer;
    QLabel *labelIntelligenceBattlePlayer;
    QLabel *labelWeaponBattlePlayer;
    QLabel *labelMedicineBattlePlayer;
    QLabel *labelMechanicBattlePlayer;
    QLabel *labelElectronicsBattlePlayer;
    QSpinBox *spinBoxWeaponBattlePlayer;
    QSpinBox *spinBoxMedicineBattlePlayer;
    QSpinBox *spinBoxMechanicBattlePlayer;
    QSpinBox *spinBoxElectronicsBattlePlayer;
    QSpinBox *spinBoxStrenghtBattlePlayer;
    QComboBox *comboBWeaponPlayer;
    QRadioButton *radioButtonComplexityStandardPlayer;
    QRadioButton *radioButtonComplexitGoodPlayer;
    QRadioButton *radioButtonComplexityBadPlayer;
    QPushButton *pushButtonCalculateHitPlayer;
    QLineEdit *lineEditInResultHitRollPlayer;
    QPushButton *pushButtonnResultHitHitRollPlayer;
    QGroupBox *groupBoxBattleNPS;
    QComboBox *comboBoxCharacterSelectBattleNPC;
    QLabel *labelBoxBattleNPS;
    QLabel *labelStrenghtBattleNPC;
    QLabel *labelAgilityBattleNPC;
    QSpinBox *spinBoxAgilityBattleNPC;
    QSpinBox *spinBoxIntelligenceBattleNPC;
    QLabel *labelIntelligenceBattleNPC;
    QLabel *labelWeaponBattleNPC;
    QLabel *labelMedicineBattleNPC;
    QLabel *labelMechanicBattleNPC;
    QLabel *labelElectronicsBattleNPC;
    QSpinBox *spinBoxWeaponBattleNPC;
    QSpinBox *spinBoxMedicineBattleNPC;
    QSpinBox *spinBoxMechanicBattleNPC;
    QSpinBox *spinBoxElectronicsBattleNPC;
    QSpinBox *spinBoxStrenghtBattleNPC;
    QComboBox *comboBWeaponNPC;
    QRadioButton *radioButtonComplexityStandardNPC;
    QRadioButton *radioButtonComplexitGoodNPC;
    QRadioButton *radioButtonComplexityBadNPC;
    QPushButton *pushButtonCalculateHitNPC;
    QPushButton *pushButtonnResultHitRollNPC;
    QGroupBox *groupBoxInitiativeBattle;
    QTextEdit *textEditTerminallInitiativeBattle;
    QLineEdit *lineEditNameInitiativeBattle;
    QLabel *labeNamelInitiativeBattle;
    QLineEdit *lineEditRollInitiativeBattle;
    QLabel *labelInitiativeBattle;
    QPushButton *pushButtonAddInitiativeBattle;
    QPushButton *pushButtonNextInitiativeBattle;
    QPushButton *pushButtonPreviousInitiativeBattle;
    QPushButton *pushButtonBattleStart;
    QPushButton *pushButtonBattleEnd;
    QWidget *battleNoScreen;
    QGroupBox *groupBoxTerminal;
    QTextEdit *textEditTerminal;
    QPushButton *pushButtonTerminalON_OFF;
    QRadioButton *radioButtonLogMode;
    QRadioButton *radioButtonJournalMode;
    QRadioButton *radioButtonNarrativeMode;
    QPushButton *pushButtonBack;
    QTabWidget *tabWidget;
    QWidget *Bestiary;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QWidget *Location;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_3;
    QWidget *NPC;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QPushButton *pushButton_4;

    void setupUi(QWidget *MasterControlWindow)
    {
        if (MasterControlWindow->objectName().isEmpty())
            MasterControlWindow->setObjectName("MasterControlWindow");
        MasterControlWindow->resize(1830, 780);
        MasterControlWindow->setMinimumSize(QSize(1830, 780));
        MasterControlWindow->setMaximumSize(QSize(1830, 780));
        MasterControlWindow->setStyleSheet(QString::fromUtf8(""));
        groupBoxSamosbor = new QGroupBox(MasterControlWindow);
        groupBoxSamosbor->setObjectName("groupBoxSamosbor");
        groupBoxSamosbor->setGeometry(QRect(10, 10, 151, 271));
        labelTimerSamosbor = new QLabel(groupBoxSamosbor);
        labelTimerSamosbor->setObjectName("labelTimerSamosbor");
        labelTimerSamosbor->setGeometry(QRect(10, 30, 121, 21));
        labelRangeInfoSamosbor = new QLabel(groupBoxSamosbor);
        labelRangeInfoSamosbor->setObjectName("labelRangeInfoSamosbor");
        labelRangeInfoSamosbor->setGeometry(QRect(10, 60, 121, 21));
        labelSamosborState = new QLabel(groupBoxSamosbor);
        labelSamosborState->setObjectName("labelSamosborState");
        labelSamosborState->setGeometry(QRect(10, 90, 121, 21));
        pushButtonSamosborStart = new QPushButton(groupBoxSamosbor);
        pushButtonSamosborStart->setObjectName("pushButtonSamosborStart");
        pushButtonSamosborStart->setGeometry(QRect(10, 120, 131, 24));
        pushButtonSamosborPause = new QPushButton(groupBoxSamosbor);
        pushButtonSamosborPause->setObjectName("pushButtonSamosborPause");
        pushButtonSamosborPause->setGeometry(QRect(10, 150, 131, 24));
        pushButtonSamosborResume = new QPushButton(groupBoxSamosbor);
        pushButtonSamosborResume->setObjectName("pushButtonSamosborResume");
        pushButtonSamosborResume->setGeometry(QRect(10, 180, 131, 24));
        pushButtonSamosborManualTrigger = new QPushButton(groupBoxSamosbor);
        pushButtonSamosborManualTrigger->setObjectName("pushButtonSamosborManualTrigger");
        pushButtonSamosborManualTrigger->setGeometry(QRect(10, 210, 131, 24));
        pushButtonSamosborManualSlowdown = new QPushButton(groupBoxSamosbor);
        pushButtonSamosborManualSlowdown->setObjectName("pushButtonSamosborManualSlowdown");
        pushButtonSamosborManualSlowdown->setGeometry(QRect(10, 240, 131, 24));
        groupBoxSuccessCalculator = new QGroupBox(MasterControlWindow);
        groupBoxSuccessCalculator->setObjectName("groupBoxSuccessCalculator");
        groupBoxSuccessCalculator->setGeometry(QRect(1010, 10, 391, 401));
        comboBoxCharacterSelectAction = new QComboBox(groupBoxSuccessCalculator);
        comboBoxCharacterSelectAction->setObjectName("comboBoxCharacterSelectAction");
        comboBoxCharacterSelectAction->setGeometry(QRect(20, 30, 201, 24));
        labelClassAction = new QLabel(groupBoxSuccessCalculator);
        labelClassAction->setObjectName("labelClassAction");
        labelClassAction->setGeometry(QRect(230, 30, 151, 21));
        labelStrenghtAction = new QLabel(groupBoxSuccessCalculator);
        labelStrenghtAction->setObjectName("labelStrenghtAction");
        labelStrenghtAction->setGeometry(QRect(30, 70, 61, 30));
        labelStrenghtAction->setMinimumSize(QSize(0, 30));
        labelAgilityAction = new QLabel(groupBoxSuccessCalculator);
        labelAgilityAction->setObjectName("labelAgilityAction");
        labelAgilityAction->setGeometry(QRect(30, 110, 61, 30));
        labelAgilityAction->setMinimumSize(QSize(0, 30));
        spinBoxAgilityAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxAgilityAction->setObjectName("spinBoxAgilityAction");
        spinBoxAgilityAction->setGeometry(QRect(130, 110, 42, 30));
        spinBoxAgilityAction->setMinimumSize(QSize(0, 30));
        spinBoxAgilityAction->setReadOnly(true);
        spinBoxAgilityAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxIntelligenceAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxIntelligenceAction->setObjectName("spinBoxIntelligenceAction");
        spinBoxIntelligenceAction->setGeometry(QRect(130, 150, 42, 30));
        spinBoxIntelligenceAction->setMinimumSize(QSize(0, 30));
        spinBoxIntelligenceAction->setReadOnly(true);
        spinBoxIntelligenceAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        labelIntelligenceAction = new QLabel(groupBoxSuccessCalculator);
        labelIntelligenceAction->setObjectName("labelIntelligenceAction");
        labelIntelligenceAction->setGeometry(QRect(30, 150, 61, 30));
        labelIntelligenceAction->setMinimumSize(QSize(0, 30));
        labelWeaponAction = new QLabel(groupBoxSuccessCalculator);
        labelWeaponAction->setObjectName("labelWeaponAction");
        labelWeaponAction->setGeometry(QRect(220, 70, 81, 30));
        labelWeaponAction->setMinimumSize(QSize(0, 30));
        labelMedicineAction = new QLabel(groupBoxSuccessCalculator);
        labelMedicineAction->setObjectName("labelMedicineAction");
        labelMedicineAction->setGeometry(QRect(220, 110, 81, 30));
        labelMedicineAction->setMinimumSize(QSize(0, 30));
        labelMechanicAction = new QLabel(groupBoxSuccessCalculator);
        labelMechanicAction->setObjectName("labelMechanicAction");
        labelMechanicAction->setGeometry(QRect(220, 150, 81, 30));
        labelMechanicAction->setMinimumSize(QSize(0, 30));
        labelElectronicsAction = new QLabel(groupBoxSuccessCalculator);
        labelElectronicsAction->setObjectName("labelElectronicsAction");
        labelElectronicsAction->setGeometry(QRect(220, 190, 91, 30));
        labelElectronicsAction->setMinimumSize(QSize(0, 30));
        spinBoxWeaponAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxWeaponAction->setObjectName("spinBoxWeaponAction");
        spinBoxWeaponAction->setGeometry(QRect(330, 70, 42, 30));
        spinBoxWeaponAction->setMinimumSize(QSize(0, 30));
        spinBoxWeaponAction->setReadOnly(true);
        spinBoxWeaponAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxMedicineAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxMedicineAction->setObjectName("spinBoxMedicineAction");
        spinBoxMedicineAction->setGeometry(QRect(330, 110, 42, 30));
        spinBoxMedicineAction->setMinimumSize(QSize(0, 30));
        spinBoxMedicineAction->setReadOnly(true);
        spinBoxMedicineAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxMechanicAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxMechanicAction->setObjectName("spinBoxMechanicAction");
        spinBoxMechanicAction->setGeometry(QRect(330, 150, 42, 30));
        spinBoxMechanicAction->setMinimumSize(QSize(0, 30));
        spinBoxMechanicAction->setReadOnly(true);
        spinBoxMechanicAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxElectronicsAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxElectronicsAction->setObjectName("spinBoxElectronicsAction");
        spinBoxElectronicsAction->setGeometry(QRect(330, 190, 42, 30));
        spinBoxElectronicsAction->setMinimumSize(QSize(0, 30));
        spinBoxElectronicsAction->setReadOnly(true);
        spinBoxElectronicsAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        comboBoxComplexity = new QComboBox(groupBoxSuccessCalculator);
        comboBoxComplexity->addItem(QString());
        comboBoxComplexity->addItem(QString());
        comboBoxComplexity->addItem(QString());
        comboBoxComplexity->addItem(QString());
        comboBoxComplexity->addItem(QString());
        comboBoxComplexity->addItem(QString());
        comboBoxComplexity->setObjectName("comboBoxComplexity");
        comboBoxComplexity->setGeometry(QRect(20, 190, 161, 30));
        comboBoxComplexity->setMinimumSize(QSize(0, 30));
        spinBox = new QSpinBox(groupBoxSuccessCalculator);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(210, 350, 51, 30));
        spinBox->setMinimumSize(QSize(0, 30));
        spinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        labMasterModify = new QLabel(groupBoxSuccessCalculator);
        labMasterModify->setObjectName("labMasterModify");
        labMasterModify->setGeometry(QRect(220, 320, 151, 30));
        labMasterModify->setMinimumSize(QSize(0, 30));
        comboBoxCriteria1 = new QComboBox(groupBoxSuccessCalculator);
        comboBoxCriteria1->addItem(QString());
        comboBoxCriteria1->addItem(QString());
        comboBoxCriteria1->addItem(QString());
        comboBoxCriteria1->setObjectName("comboBoxCriteria1");
        comboBoxCriteria1->setGeometry(QRect(20, 230, 161, 30));
        comboBoxCriteria1->setMinimumSize(QSize(0, 30));
        comboBoxCriteria2 = new QComboBox(groupBoxSuccessCalculator);
        comboBoxCriteria2->addItem(QString());
        comboBoxCriteria2->addItem(QString());
        comboBoxCriteria2->addItem(QString());
        comboBoxCriteria2->setObjectName("comboBoxCriteria2");
        comboBoxCriteria2->setGeometry(QRect(20, 270, 161, 30));
        comboBoxCriteria2->setMinimumSize(QSize(0, 30));
        comboBoxCriteria3 = new QComboBox(groupBoxSuccessCalculator);
        comboBoxCriteria3->addItem(QString());
        comboBoxCriteria3->addItem(QString());
        comboBoxCriteria3->addItem(QString());
        comboBoxCriteria3->addItem(QString());
        comboBoxCriteria3->setObjectName("comboBoxCriteria3");
        comboBoxCriteria3->setGeometry(QRect(20, 310, 161, 30));
        comboBoxCriteria3->setMinimumSize(QSize(0, 30));
        comboBoxSkill2 = new QComboBox(groupBoxSuccessCalculator);
        comboBoxSkill2->addItem(QString());
        comboBoxSkill2->addItem(QString());
        comboBoxSkill2->addItem(QString());
        comboBoxSkill2->addItem(QString());
        comboBoxSkill2->setObjectName("comboBoxSkill2");
        comboBoxSkill2->setGeometry(QRect(210, 270, 161, 30));
        comboBoxSkill2->setMinimumSize(QSize(0, 30));
        comboBoxSkill1 = new QComboBox(groupBoxSuccessCalculator);
        comboBoxSkill1->addItem(QString());
        comboBoxSkill1->addItem(QString());
        comboBoxSkill1->addItem(QString());
        comboBoxSkill1->addItem(QString());
        comboBoxSkill1->setObjectName("comboBoxSkill1");
        comboBoxSkill1->setGeometry(QRect(210, 230, 161, 30));
        comboBoxSkill1->setMinimumSize(QSize(0, 30));
        pushButtonCalculate = new QPushButton(groupBoxSuccessCalculator);
        pushButtonCalculate->setObjectName("pushButtonCalculate");
        pushButtonCalculate->setGeometry(QRect(270, 350, 101, 30));
        pushButtonCalculate->setMinimumSize(QSize(0, 30));
        spinBoxStrenghtAction = new QSpinBox(groupBoxSuccessCalculator);
        spinBoxStrenghtAction->setObjectName("spinBoxStrenghtAction");
        spinBoxStrenghtAction->setGeometry(QRect(130, 70, 42, 30));
        spinBoxStrenghtAction->setMinimumSize(QSize(0, 30));
        spinBoxStrenghtAction->setReadOnly(true);
        spinBoxStrenghtAction->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        comboBoxCriteria4 = new QComboBox(groupBoxSuccessCalculator);
        comboBoxCriteria4->addItem(QString());
        comboBoxCriteria4->addItem(QString());
        comboBoxCriteria4->addItem(QString());
        comboBoxCriteria4->addItem(QString());
        comboBoxCriteria4->addItem(QString());
        comboBoxCriteria4->setObjectName("comboBoxCriteria4");
        comboBoxCriteria4->setGeometry(QRect(20, 350, 161, 30));
        comboBoxCriteria4->setMinimumSize(QSize(0, 30));
        groupBoxKantsCounter = new QGroupBox(MasterControlWindow);
        groupBoxKantsCounter->setObjectName("groupBoxKantsCounter");
        groupBoxKantsCounter->setGeometry(QRect(170, 10, 151, 271));
        groupBoxConnections = new QGroupBox(MasterControlWindow);
        groupBoxConnections->setObjectName("groupBoxConnections");
        groupBoxConnections->setGeometry(QRect(170, 620, 151, 151));
        pushButtonCreateASession = new QPushButton(groupBoxConnections);
        pushButtonCreateASession->setObjectName("pushButtonCreateASession");
        pushButtonCreateASession->setGeometry(QRect(10, 30, 131, 24));
        pushButtonSaveASession = new QPushButton(groupBoxConnections);
        pushButtonSaveASession->setObjectName("pushButtonSaveASession");
        pushButtonSaveASession->setGeometry(QRect(10, 90, 131, 24));
        pushButtonEndTheSession = new QPushButton(groupBoxConnections);
        pushButtonEndTheSession->setObjectName("pushButtonEndTheSession");
        pushButtonEndTheSession->setGeometry(QRect(10, 120, 131, 24));
        pushButtonJoinASession = new QPushButton(groupBoxConnections);
        pushButtonJoinASession->setObjectName("pushButtonJoinASession");
        pushButtonJoinASession->setGeometry(QRect(10, 60, 131, 24));
        groupBoxCharacterToolkit = new QGroupBox(MasterControlWindow);
        groupBoxCharacterToolkit->setObjectName("groupBoxCharacterToolkit");
        groupBoxCharacterToolkit->setGeometry(QRect(10, 620, 151, 151));
        groupBoxEvents = new QGroupBox(MasterControlWindow);
        groupBoxEvents->setObjectName("groupBoxEvents");
        groupBoxEvents->setGeometry(QRect(10, 290, 151, 311));
        pushButtonRandomEvent = new QPushButton(groupBoxEvents);
        pushButtonRandomEvent->setObjectName("pushButtonRandomEvent");
        pushButtonRandomEvent->setGeometry(QRect(10, 30, 131, 24));
        groupBox_2 = new QGroupBox(MasterControlWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(170, 290, 151, 311));
        textEdit4Fun = new QTextEdit(groupBox_2);
        textEdit4Fun->setObjectName("textEdit4Fun");
        textEdit4Fun->setGeometry(QRect(10, 30, 131, 271));
        groupBoxBattle = new QGroupBox(MasterControlWindow);
        groupBoxBattle->setObjectName("groupBoxBattle");
        groupBoxBattle->setGeometry(QRect(330, 420, 1071, 281));
        groupBoxBattlePlayer = new QGroupBox(groupBoxBattle);
        groupBoxBattlePlayer->setObjectName("groupBoxBattlePlayer");
        groupBoxBattlePlayer->setGeometry(QRect(10, 10, 341, 261));
        groupBoxBattlePlayer->setStyleSheet(QString::fromUtf8(""));
        comboBoxCharacterSelectBattlePlayer = new QComboBox(groupBoxBattlePlayer);
        comboBoxCharacterSelectBattlePlayer->setObjectName("comboBoxCharacterSelectBattlePlayer");
        comboBoxCharacterSelectBattlePlayer->setGeometry(QRect(10, 30, 131, 24));
        labelClassBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelClassBattlePlayer->setObjectName("labelClassBattlePlayer");
        labelClassBattlePlayer->setGeometry(QRect(170, 30, 151, 21));
        labelStrenghtBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelStrenghtBattlePlayer->setObjectName("labelStrenghtBattlePlayer");
        labelStrenghtBattlePlayer->setGeometry(QRect(10, 70, 61, 21));
        labelAgilityBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelAgilityBattlePlayer->setObjectName("labelAgilityBattlePlayer");
        labelAgilityBattlePlayer->setGeometry(QRect(10, 100, 61, 21));
        spinBoxAgilityBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxAgilityBattlePlayer->setObjectName("spinBoxAgilityBattlePlayer");
        spinBoxAgilityBattlePlayer->setGeometry(QRect(100, 100, 40, 25));
        spinBoxAgilityBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxAgilityBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxAgilityBattlePlayer->setReadOnly(true);
        spinBoxAgilityBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxIntelligenceBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxIntelligenceBattlePlayer->setObjectName("spinBoxIntelligenceBattlePlayer");
        spinBoxIntelligenceBattlePlayer->setGeometry(QRect(100, 130, 40, 25));
        spinBoxIntelligenceBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxIntelligenceBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxIntelligenceBattlePlayer->setReadOnly(true);
        spinBoxIntelligenceBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        labelIntelligenceBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelIntelligenceBattlePlayer->setObjectName("labelIntelligenceBattlePlayer");
        labelIntelligenceBattlePlayer->setGeometry(QRect(10, 130, 61, 21));
        labelWeaponBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelWeaponBattlePlayer->setObjectName("labelWeaponBattlePlayer");
        labelWeaponBattlePlayer->setGeometry(QRect(170, 70, 81, 21));
        labelMedicineBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelMedicineBattlePlayer->setObjectName("labelMedicineBattlePlayer");
        labelMedicineBattlePlayer->setGeometry(QRect(170, 100, 81, 21));
        labelMechanicBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelMechanicBattlePlayer->setObjectName("labelMechanicBattlePlayer");
        labelMechanicBattlePlayer->setGeometry(QRect(170, 130, 81, 20));
        labelElectronicsBattlePlayer = new QLabel(groupBoxBattlePlayer);
        labelElectronicsBattlePlayer->setObjectName("labelElectronicsBattlePlayer");
        labelElectronicsBattlePlayer->setGeometry(QRect(170, 160, 81, 21));
        spinBoxWeaponBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxWeaponBattlePlayer->setObjectName("spinBoxWeaponBattlePlayer");
        spinBoxWeaponBattlePlayer->setGeometry(QRect(280, 70, 40, 25));
        spinBoxWeaponBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxWeaponBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxWeaponBattlePlayer->setReadOnly(true);
        spinBoxWeaponBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxMedicineBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxMedicineBattlePlayer->setObjectName("spinBoxMedicineBattlePlayer");
        spinBoxMedicineBattlePlayer->setGeometry(QRect(280, 100, 40, 25));
        spinBoxMedicineBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxMedicineBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxMedicineBattlePlayer->setReadOnly(true);
        spinBoxMedicineBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxMechanicBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxMechanicBattlePlayer->setObjectName("spinBoxMechanicBattlePlayer");
        spinBoxMechanicBattlePlayer->setGeometry(QRect(280, 130, 40, 25));
        spinBoxMechanicBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxMechanicBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxMechanicBattlePlayer->setReadOnly(true);
        spinBoxMechanicBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxElectronicsBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxElectronicsBattlePlayer->setObjectName("spinBoxElectronicsBattlePlayer");
        spinBoxElectronicsBattlePlayer->setGeometry(QRect(280, 160, 40, 25));
        spinBoxElectronicsBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxElectronicsBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxElectronicsBattlePlayer->setReadOnly(true);
        spinBoxElectronicsBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxStrenghtBattlePlayer = new QSpinBox(groupBoxBattlePlayer);
        spinBoxStrenghtBattlePlayer->setObjectName("spinBoxStrenghtBattlePlayer");
        spinBoxStrenghtBattlePlayer->setGeometry(QRect(100, 70, 40, 25));
        spinBoxStrenghtBattlePlayer->setMinimumSize(QSize(40, 0));
        spinBoxStrenghtBattlePlayer->setMaximumSize(QSize(40, 16777215));
        spinBoxStrenghtBattlePlayer->setReadOnly(true);
        spinBoxStrenghtBattlePlayer->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        comboBWeaponPlayer = new QComboBox(groupBoxBattlePlayer);
        comboBWeaponPlayer->addItem(QString());
        comboBWeaponPlayer->addItem(QString());
        comboBWeaponPlayer->setObjectName("comboBWeaponPlayer");
        comboBWeaponPlayer->setGeometry(QRect(10, 160, 131, 24));
        radioButtonComplexityStandardPlayer = new QRadioButton(groupBoxBattlePlayer);
        radioButtonComplexityStandardPlayer->setObjectName("radioButtonComplexityStandardPlayer");
        radioButtonComplexityStandardPlayer->setGeometry(QRect(10, 190, 91, 22));
        radioButtonComplexitGoodPlayer = new QRadioButton(groupBoxBattlePlayer);
        radioButtonComplexitGoodPlayer->setObjectName("radioButtonComplexitGoodPlayer");
        radioButtonComplexitGoodPlayer->setGeometry(QRect(10, 210, 111, 22));
        radioButtonComplexityBadPlayer = new QRadioButton(groupBoxBattlePlayer);
        radioButtonComplexityBadPlayer->setObjectName("radioButtonComplexityBadPlayer");
        radioButtonComplexityBadPlayer->setGeometry(QRect(10, 230, 91, 22));
        pushButtonCalculateHitPlayer = new QPushButton(groupBoxBattlePlayer);
        pushButtonCalculateHitPlayer->setObjectName("pushButtonCalculateHitPlayer");
        pushButtonCalculateHitPlayer->setGeometry(QRect(170, 190, 150, 24));
        pushButtonCalculateHitPlayer->setMinimumSize(QSize(150, 0));
        pushButtonCalculateHitPlayer->setMaximumSize(QSize(150, 16777215));
        lineEditInResultHitRollPlayer = new QLineEdit(groupBoxBattlePlayer);
        lineEditInResultHitRollPlayer->setObjectName("lineEditInResultHitRollPlayer");
        lineEditInResultHitRollPlayer->setGeometry(QRect(170, 220, 101, 24));
        pushButtonnResultHitHitRollPlayer = new QPushButton(groupBoxBattlePlayer);
        pushButtonnResultHitHitRollPlayer->setObjectName("pushButtonnResultHitHitRollPlayer");
        pushButtonnResultHitHitRollPlayer->setGeometry(QRect(280, 220, 41, 24));
        groupBoxBattleNPS = new QGroupBox(groupBoxBattle);
        groupBoxBattleNPS->setObjectName("groupBoxBattleNPS");
        groupBoxBattleNPS->setGeometry(QRect(360, 10, 341, 261));
        comboBoxCharacterSelectBattleNPC = new QComboBox(groupBoxBattleNPS);
        comboBoxCharacterSelectBattleNPC->setObjectName("comboBoxCharacterSelectBattleNPC");
        comboBoxCharacterSelectBattleNPC->setGeometry(QRect(10, 30, 131, 24));
        labelBoxBattleNPS = new QLabel(groupBoxBattleNPS);
        labelBoxBattleNPS->setObjectName("labelBoxBattleNPS");
        labelBoxBattleNPS->setGeometry(QRect(170, 30, 151, 21));
        labelStrenghtBattleNPC = new QLabel(groupBoxBattleNPS);
        labelStrenghtBattleNPC->setObjectName("labelStrenghtBattleNPC");
        labelStrenghtBattleNPC->setGeometry(QRect(20, 70, 61, 21));
        labelAgilityBattleNPC = new QLabel(groupBoxBattleNPS);
        labelAgilityBattleNPC->setObjectName("labelAgilityBattleNPC");
        labelAgilityBattleNPC->setGeometry(QRect(20, 100, 61, 21));
        spinBoxAgilityBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxAgilityBattleNPC->setObjectName("spinBoxAgilityBattleNPC");
        spinBoxAgilityBattleNPC->setGeometry(QRect(100, 100, 40, 25));
        spinBoxAgilityBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxAgilityBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxAgilityBattleNPC->setReadOnly(false);
        spinBoxAgilityBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        spinBoxIntelligenceBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxIntelligenceBattleNPC->setObjectName("spinBoxIntelligenceBattleNPC");
        spinBoxIntelligenceBattleNPC->setGeometry(QRect(100, 130, 40, 25));
        spinBoxIntelligenceBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxIntelligenceBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxIntelligenceBattleNPC->setReadOnly(false);
        spinBoxIntelligenceBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        labelIntelligenceBattleNPC = new QLabel(groupBoxBattleNPS);
        labelIntelligenceBattleNPC->setObjectName("labelIntelligenceBattleNPC");
        labelIntelligenceBattleNPC->setGeometry(QRect(20, 130, 61, 21));
        labelWeaponBattleNPC = new QLabel(groupBoxBattleNPS);
        labelWeaponBattleNPC->setObjectName("labelWeaponBattleNPC");
        labelWeaponBattleNPC->setGeometry(QRect(170, 70, 81, 21));
        labelMedicineBattleNPC = new QLabel(groupBoxBattleNPS);
        labelMedicineBattleNPC->setObjectName("labelMedicineBattleNPC");
        labelMedicineBattleNPC->setGeometry(QRect(170, 100, 81, 21));
        labelMechanicBattleNPC = new QLabel(groupBoxBattleNPS);
        labelMechanicBattleNPC->setObjectName("labelMechanicBattleNPC");
        labelMechanicBattleNPC->setGeometry(QRect(170, 130, 81, 20));
        labelElectronicsBattleNPC = new QLabel(groupBoxBattleNPS);
        labelElectronicsBattleNPC->setObjectName("labelElectronicsBattleNPC");
        labelElectronicsBattleNPC->setGeometry(QRect(170, 160, 81, 21));
        spinBoxWeaponBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxWeaponBattleNPC->setObjectName("spinBoxWeaponBattleNPC");
        spinBoxWeaponBattleNPC->setGeometry(QRect(280, 70, 40, 25));
        spinBoxWeaponBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxWeaponBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxWeaponBattleNPC->setReadOnly(false);
        spinBoxWeaponBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxMedicineBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxMedicineBattleNPC->setObjectName("spinBoxMedicineBattleNPC");
        spinBoxMedicineBattleNPC->setGeometry(QRect(280, 100, 40, 25));
        spinBoxMedicineBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxMedicineBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxMedicineBattleNPC->setReadOnly(false);
        spinBoxMedicineBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxMechanicBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxMechanicBattleNPC->setObjectName("spinBoxMechanicBattleNPC");
        spinBoxMechanicBattleNPC->setGeometry(QRect(280, 130, 40, 25));
        spinBoxMechanicBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxMechanicBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxMechanicBattleNPC->setReadOnly(false);
        spinBoxMechanicBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxElectronicsBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxElectronicsBattleNPC->setObjectName("spinBoxElectronicsBattleNPC");
        spinBoxElectronicsBattleNPC->setGeometry(QRect(280, 160, 40, 25));
        spinBoxElectronicsBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxElectronicsBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxElectronicsBattleNPC->setReadOnly(false);
        spinBoxElectronicsBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBoxStrenghtBattleNPC = new QSpinBox(groupBoxBattleNPS);
        spinBoxStrenghtBattleNPC->setObjectName("spinBoxStrenghtBattleNPC");
        spinBoxStrenghtBattleNPC->setGeometry(QRect(100, 70, 40, 25));
        spinBoxStrenghtBattleNPC->setMinimumSize(QSize(40, 0));
        spinBoxStrenghtBattleNPC->setMaximumSize(QSize(40, 16777215));
        spinBoxStrenghtBattleNPC->setReadOnly(false);
        spinBoxStrenghtBattleNPC->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        comboBWeaponNPC = new QComboBox(groupBoxBattleNPS);
        comboBWeaponNPC->addItem(QString());
        comboBWeaponNPC->addItem(QString());
        comboBWeaponNPC->setObjectName("comboBWeaponNPC");
        comboBWeaponNPC->setGeometry(QRect(20, 160, 121, 24));
        radioButtonComplexityStandardNPC = new QRadioButton(groupBoxBattleNPS);
        radioButtonComplexityStandardNPC->setObjectName("radioButtonComplexityStandardNPC");
        radioButtonComplexityStandardNPC->setGeometry(QRect(20, 190, 91, 22));
        radioButtonComplexitGoodNPC = new QRadioButton(groupBoxBattleNPS);
        radioButtonComplexitGoodNPC->setObjectName("radioButtonComplexitGoodNPC");
        radioButtonComplexitGoodNPC->setGeometry(QRect(20, 210, 111, 22));
        radioButtonComplexityBadNPC = new QRadioButton(groupBoxBattleNPS);
        radioButtonComplexityBadNPC->setObjectName("radioButtonComplexityBadNPC");
        radioButtonComplexityBadNPC->setGeometry(QRect(20, 230, 91, 22));
        pushButtonCalculateHitNPC = new QPushButton(groupBoxBattleNPS);
        pushButtonCalculateHitNPC->setObjectName("pushButtonCalculateHitNPC");
        pushButtonCalculateHitNPC->setGeometry(QRect(170, 190, 150, 24));
        pushButtonCalculateHitNPC->setMaximumSize(QSize(150, 16777215));
        pushButtonnResultHitRollNPC = new QPushButton(groupBoxBattleNPS);
        pushButtonnResultHitRollNPC->setObjectName("pushButtonnResultHitRollNPC");
        pushButtonnResultHitRollNPC->setGeometry(QRect(170, 220, 150, 24));
        pushButtonnResultHitRollNPC->setMinimumSize(QSize(150, 0));
        pushButtonnResultHitRollNPC->setMaximumSize(QSize(150, 24));
        groupBoxInitiativeBattle = new QGroupBox(groupBoxBattle);
        groupBoxInitiativeBattle->setObjectName("groupBoxInitiativeBattle");
        groupBoxInitiativeBattle->setGeometry(QRect(710, 10, 281, 261));
        textEditTerminallInitiativeBattle = new QTextEdit(groupBoxInitiativeBattle);
        textEditTerminallInitiativeBattle->setObjectName("textEditTerminallInitiativeBattle");
        textEditTerminallInitiativeBattle->setGeometry(QRect(10, 80, 151, 171));
        textEditTerminallInitiativeBattle->setReadOnly(true);
        lineEditNameInitiativeBattle = new QLineEdit(groupBoxInitiativeBattle);
        lineEditNameInitiativeBattle->setObjectName("lineEditNameInitiativeBattle");
        lineEditNameInitiativeBattle->setGeometry(QRect(10, 50, 113, 24));
        labeNamelInitiativeBattle = new QLabel(groupBoxInitiativeBattle);
        labeNamelInitiativeBattle->setObjectName("labeNamelInitiativeBattle");
        labeNamelInitiativeBattle->setGeometry(QRect(50, 20, 31, 30));
        labeNamelInitiativeBattle->setMinimumSize(QSize(0, 30));
        lineEditRollInitiativeBattle = new QLineEdit(groupBoxInitiativeBattle);
        lineEditRollInitiativeBattle->setObjectName("lineEditRollInitiativeBattle");
        lineEditRollInitiativeBattle->setGeometry(QRect(130, 50, 71, 24));
        labelInitiativeBattle = new QLabel(groupBoxInitiativeBattle);
        labelInitiativeBattle->setObjectName("labelInitiativeBattle");
        labelInitiativeBattle->setGeometry(QRect(130, 20, 81, 30));
        labelInitiativeBattle->setMinimumSize(QSize(0, 30));
        pushButtonAddInitiativeBattle = new QPushButton(groupBoxInitiativeBattle);
        pushButtonAddInitiativeBattle->setObjectName("pushButtonAddInitiativeBattle");
        pushButtonAddInitiativeBattle->setGeometry(QRect(210, 50, 61, 24));
        pushButtonNextInitiativeBattle = new QPushButton(groupBoxInitiativeBattle);
        pushButtonNextInitiativeBattle->setObjectName("pushButtonNextInitiativeBattle");
        pushButtonNextInitiativeBattle->setGeometry(QRect(170, 80, 101, 30));
        pushButtonNextInitiativeBattle->setMinimumSize(QSize(0, 30));
        pushButtonPreviousInitiativeBattle = new QPushButton(groupBoxInitiativeBattle);
        pushButtonPreviousInitiativeBattle->setObjectName("pushButtonPreviousInitiativeBattle");
        pushButtonPreviousInitiativeBattle->setGeometry(QRect(170, 120, 101, 30));
        pushButtonPreviousInitiativeBattle->setMinimumSize(QSize(0, 30));
        pushButtonBattleStart = new QPushButton(groupBoxBattle);
        pushButtonBattleStart->setObjectName("pushButtonBattleStart");
        pushButtonBattleStart->setGeometry(QRect(1000, 10, 60, 120));
        pushButtonBattleStart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/images/images/SS_PB_MCW_StartBattle.png);\n"
"	background: none;\n"
"	border:none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MCW_StartBattle_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MCW_StartBattle_push.png);\n"
"}"));
        pushButtonBattleEnd = new QPushButton(groupBoxBattle);
        pushButtonBattleEnd->setObjectName("pushButtonBattleEnd");
        pushButtonBattleEnd->setGeometry(QRect(1000, 150, 60, 120));
        pushButtonBattleEnd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/images/images/SS_PB_MCW_EndBattle.png);\n"
"	background: none;\n"
"	border:none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MCW_EndBattle_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MCW_EndBattle_push.png);\n"
"}"));
        battleNoScreen = new QWidget(groupBoxBattle);
        battleNoScreen->setObjectName("battleNoScreen");
        battleNoScreen->setGeometry(QRect(0, 0, 990, 280));
        battleNoScreen->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/SS_L_MCW_BattleWidget.png);"));
        groupBoxTerminal = new QGroupBox(MasterControlWindow);
        groupBoxTerminal->setObjectName("groupBoxTerminal");
        groupBoxTerminal->setGeometry(QRect(330, 10, 671, 401));
        textEditTerminal = new QTextEdit(groupBoxTerminal);
        textEditTerminal->setObjectName("textEditTerminal");
        textEditTerminal->setGeometry(QRect(10, 10, 651, 351));
        textEditTerminal->setReadOnly(true);
        pushButtonTerminalON_OFF = new QPushButton(groupBoxTerminal);
        pushButtonTerminalON_OFF->setObjectName("pushButtonTerminalON_OFF");
        pushButtonTerminalON_OFF->setGeometry(QRect(10, 370, 41, 24));
        radioButtonLogMode = new QRadioButton(groupBoxTerminal);
        radioButtonLogMode->setObjectName("radioButtonLogMode");
        radioButtonLogMode->setGeometry(QRect(600, 370, 61, 22));
        radioButtonJournalMode = new QRadioButton(groupBoxTerminal);
        radioButtonJournalMode->setObjectName("radioButtonJournalMode");
        radioButtonJournalMode->setGeometry(QRect(510, 370, 81, 22));
        radioButtonNarrativeMode = new QRadioButton(groupBoxTerminal);
        radioButtonNarrativeMode->setObjectName("radioButtonNarrativeMode");
        radioButtonNarrativeMode->setGeometry(QRect(400, 370, 101, 22));
        pushButtonBack = new QPushButton(MasterControlWindow);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(330, 710, 1071, 61));
        pushButtonBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/images/images/SS_PB_MCW_Back.png);\n"
"	background: none;\n"
"	border:none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MCW_Back_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MCW_Back_push.png);\n"
"}"));
        tabWidget = new QTabWidget(MasterControlWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(1410, 10, 411, 761));
        tabWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_SMCW_Search.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_SMCW_Search_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_SMCW_Search_push.png);\n"
"}"));
        Bestiary = new QWidget();
        Bestiary->setObjectName("Bestiary");
        textEdit_2 = new QTextEdit(Bestiary);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 670, 231, 51));
        textEdit = new QTextEdit(Bestiary);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 391, 651));
        pushButton_2 = new QPushButton(Bestiary);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 670, 150, 51));
        pushButton_2->setMinimumSize(QSize(150, 40));
        tabWidget->addTab(Bestiary, QString());
        Location = new QWidget();
        Location->setObjectName("Location");
        textEdit_3 = new QTextEdit(Location);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 680, 231, 41));
        textEdit_4 = new QTextEdit(Location);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(10, 10, 391, 661));
        pushButton_3 = new QPushButton(Location);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 680, 150, 41));
        pushButton_3->setMaximumSize(QSize(150, 16777215));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_SMCW_Search.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_SMCW_Search_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_SMCW_Search_push.png);\n"
"}"));
        tabWidget->addTab(Location, QString());
        NPC = new QWidget();
        NPC->setObjectName("NPC");
        textEdit_5 = new QTextEdit(NPC);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(10, 10, 391, 651));
        textEdit_6 = new QTextEdit(NPC);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(10, 670, 231, 51));
        pushButton_4 = new QPushButton(NPC);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(250, 670, 150, 51));
        pushButton_4->setMaximumSize(QSize(150, 16777215));
        tabWidget->addTab(NPC, QString());

        retranslateUi(MasterControlWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MasterControlWindow);
    } // setupUi

    void retranslateUi(QWidget *MasterControlWindow)
    {
        MasterControlWindow->setWindowTitle(QCoreApplication::translate("MasterControlWindow", "Form", nullptr));
        groupBoxSamosbor->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200", nullptr));
        labelTimerSamosbor->setText(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        labelRangeInfoSamosbor->setText(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        labelSamosborState->setText(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        pushButtonSamosborStart->setText(QCoreApplication::translate("MasterControlWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260", nullptr));
        pushButtonSamosborPause->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        pushButtonSamosborResume->setText(QCoreApplication::translate("MasterControlWindow", "\320\222\320\276\320\267\320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\276\321\202\321\201\321\207\320\265\321\202", nullptr));
        pushButtonSamosborManualTrigger->setText(QCoreApplication::translate("MasterControlWindow", "\320\240\321\203\321\207\320\275\320\276\320\271 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200", nullptr));
        pushButtonSamosborManualSlowdown->setText(QCoreApplication::translate("MasterControlWindow", "\320\240\321\203\321\207\320\275\320\276\321\203 \320\227\320\260\320\274\320\265\320\264\320\273\320\265\320\275\320\270\320\265", nullptr));
        groupBoxSuccessCalculator->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \321\203\321\201\320\277\320\265\321\205\320\260", nullptr));
        labelClassAction->setText(QCoreApplication::translate("MasterControlWindow", "TextLabel", nullptr));
        labelStrenghtAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\320\270\320\273\320\260", nullptr));
        labelAgilityAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\233\320\276\320\262\320\272\320\276\321\201\321\202\321\214", nullptr));
        labelIntelligenceAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\230\320\275\321\202\320\265\320\273\320\265\320\272\321\202", nullptr));
        labelWeaponAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        labelMedicineAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        labelMechanicAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        labelElectronicsAction->setText(QCoreApplication::translate("MasterControlWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));
        comboBoxComplexity->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\236\321\207\320\265\320\275\321\214 \320\273\321\221\320\263\320\272\320\276\320\265", nullptr));
        comboBoxComplexity->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\233\321\221\320\263\320\272\320\276\320\265", nullptr));
        comboBoxComplexity->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265", nullptr));
        comboBoxComplexity->setItemText(3, QCoreApplication::translate("MasterControlWindow", "\320\241\320\273\320\276\320\266\320\275\320\276\320\265", nullptr));
        comboBoxComplexity->setItemText(4, QCoreApplication::translate("MasterControlWindow", "\320\236\321\207\320\265\320\275\321\214 \321\201\320\273\320\276\320\266\320\275\320\276\320\265", nullptr));
        comboBoxComplexity->setItemText(5, QCoreApplication::translate("MasterControlWindow", "\320\255\320\272\321\201\321\202\321\200\320\265\320\274\320\260\320\273\321\214\320\275\320\276\320\265", nullptr));

        labMasterModify->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200 \320\234\320\260\321\201\321\202\320\265\321\200\320\260", nullptr));
        comboBoxCriteria1->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\232\320\276\320\275\321\201\321\202\321\200\321\203\320\272\321\202\320\270\320\262\320\275\320\276\320\265", nullptr));
        comboBoxCriteria1->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\224\320\265\321\201\321\202\321\200\321\203\320\272\321\202\320\270\320\262\320\275\320\276\320\265 ", nullptr));
        comboBoxCriteria1->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 ", nullptr));

        comboBoxCriteria2->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\276\320\265", nullptr));
        comboBoxCriteria2->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\243\320\274\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265", nullptr));
        comboBoxCriteria2->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\223\320\270\320\261\321\200\320\270\320\264\320\275\320\276\320\265", nullptr));

        comboBoxCriteria3->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\320\275\320\276\320\265", nullptr));
        comboBoxCriteria3->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\241\320\270\320\273\320\276\320\262\320\276\320\265", nullptr));
        comboBoxCriteria3->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\223\320\270\320\261\321\200\320\270\320\264\320\275\320\276\320\265", nullptr));
        comboBoxCriteria3->setItemText(3, QCoreApplication::translate("MasterControlWindow", "\320\235\320\270\321\207\320\265\320\263\320\276", nullptr));

        comboBoxSkill2->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        comboBoxSkill2->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        comboBoxSkill2->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        comboBoxSkill2->setItemText(3, QCoreApplication::translate("MasterControlWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));

        comboBoxSkill1->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        comboBoxSkill1->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        comboBoxSkill1->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\321\205\320\260\320\260\320\275\320\270\320\272\320\260", nullptr));
        comboBoxSkill1->setItemText(3, QCoreApplication::translate("MasterControlWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));

        pushButtonCalculate->setText(QCoreApplication::translate("MasterControlWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        comboBoxCriteria4->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\230\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\320\271\320\270\321\217", nullptr));
        comboBoxCriteria4->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\245\320\260\321\200\320\270\320\267\320\270\320\260", nullptr));
        comboBoxCriteria4->setItemText(2, QCoreApplication::translate("MasterControlWindow", "\320\236\320\261\320\274\320\260\320\275", nullptr));
        comboBoxCriteria4->setItemText(3, QCoreApplication::translate("MasterControlWindow", "\320\242\320\276\321\200\320\263\320\276\320\262\320\273\321\217", nullptr));
        comboBoxCriteria4->setItemText(4, QCoreApplication::translate("MasterControlWindow", "\320\235\320\270\321\207\320\265\320\263\320\276", nullptr));

        groupBoxKantsCounter->setTitle(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        groupBoxConnections->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        pushButtonCreateASession->setText(QCoreApplication::translate("MasterControlWindow", "C\320\276\320\267\320\264\320\260\321\202\321\214 \320\241\320\265\321\201\321\201\320\270\321\216", nullptr));
        pushButtonSaveASession->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\241\320\265\321\201\320\270\321\216", nullptr));
        pushButtonEndTheSession->setText(QCoreApplication::translate("MasterControlWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\241\320\265\321\201\320\270\321\216", nullptr));
        pushButtonJoinASession->setText(QCoreApplication::translate("MasterControlWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272 ", nullptr));
        groupBoxCharacterToolkit->setTitle(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        groupBoxEvents->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\230\320\262\320\265\320\275\321\202\321\213", nullptr));
        pushButtonRandomEvent->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\276\320\265 \321\201\320\276\320\261\321\213\321\202\320\270\320\265", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\241\320\262\320\265\321\200\320\272\320\260 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262", nullptr));
        groupBoxBattle->setTitle(QString());
        groupBoxBattlePlayer->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\237\320\265\321\201\320\276\320\275\320\260\320\266", nullptr));
        labelClassBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        labelStrenghtBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\320\270\320\273\320\260", nullptr));
        labelAgilityBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\233\320\276\320\262\320\272\320\276\321\201\321\202\321\214", nullptr));
        labelIntelligenceBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\230\320\275\321\202\320\265\320\273\320\265\320\272\321\202", nullptr));
        labelWeaponBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        labelMedicineBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        labelMechanicBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        labelElectronicsBattlePlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));
        comboBWeaponPlayer->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\221\320\273\320\270\320\266\320\275\320\270\320\271 \320\261\320\276\320\271", nullptr));
        comboBWeaponPlayer->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\224\320\260\320\273\321\214\320\275\320\270\320\271 \320\261\320\276\320\271", nullptr));

        radioButtonComplexityStandardPlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202", nullptr));
        radioButtonComplexitGoodPlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\321\200\320\265\320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\276", nullptr));
        radioButtonComplexityBadPlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\320\276\320\274\320\265\321\205\320\260", nullptr));
        pushButtonCalculateHitPlayer->setText(QCoreApplication::translate("MasterControlWindow", "\320\240\320\260\321\201\321\201\320\270\321\207\321\202\320\260\321\202\321\214", nullptr));
        pushButtonnResultHitHitRollPlayer->setText(QCoreApplication::translate("MasterControlWindow", "IN", nullptr));
        groupBoxBattleNPS->setTitle(QCoreApplication::translate("MasterControlWindow", "NPS", nullptr));
        labelBoxBattleNPS->setText(QCoreApplication::translate("MasterControlWindow", "-", nullptr));
        labelStrenghtBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\320\270\320\273\320\260", nullptr));
        labelAgilityBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\233\320\276\320\262\320\272\320\276\321\201\321\202\321\214", nullptr));
        labelIntelligenceBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\230\320\275\321\202\320\265\320\273\320\265\320\272\321\202", nullptr));
        labelWeaponBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        labelMedicineBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        labelMechanicBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        labelElectronicsBattleNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));
        comboBWeaponNPC->setItemText(0, QCoreApplication::translate("MasterControlWindow", "\320\221\320\273\320\270\320\266\320\275\320\270\320\271 \320\261\320\276\320\271", nullptr));
        comboBWeaponNPC->setItemText(1, QCoreApplication::translate("MasterControlWindow", "\320\224\320\260\320\273\321\214\320\275\320\270\320\271 \320\261\320\276\320\271", nullptr));

        radioButtonComplexityStandardNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202", nullptr));
        radioButtonComplexitGoodNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\321\200\320\265\320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\276", nullptr));
        radioButtonComplexityBadNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\320\276\320\274\320\265\321\205\320\260", nullptr));
        pushButtonCalculateHitNPC->setText(QCoreApplication::translate("MasterControlWindow", "\320\240\320\260\321\201\321\201\320\270\321\207\321\202\320\260\321\202\321\214", nullptr));
        pushButtonnResultHitRollNPC->setText(QCoreApplication::translate("MasterControlWindow", "Roll", nullptr));
        groupBoxInitiativeBattle->setTitle(QCoreApplication::translate("MasterControlWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\321\202\320\270\320\262\320\260", nullptr));
        labeNamelInitiativeBattle->setText(QCoreApplication::translate("MasterControlWindow", "\320\230\320\274\321\217", nullptr));
        labelInitiativeBattle->setText(QCoreApplication::translate("MasterControlWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\321\202\320\270\320\262\320\260", nullptr));
        pushButtonAddInitiativeBattle->setText(QCoreApplication::translate("MasterControlWindow", "ADD", nullptr));
        pushButtonNextInitiativeBattle->setText(QCoreApplication::translate("MasterControlWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271", nullptr));
        pushButtonPreviousInitiativeBattle->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\321\200\320\265\320\264\320\270\320\264\321\203\321\211\320\270\320\271", nullptr));
        pushButtonBattleStart->setText(QString());
        pushButtonBattleEnd->setText(QString());
        groupBoxTerminal->setTitle(QString());
        pushButtonTerminalON_OFF->setText(QCoreApplication::translate("MasterControlWindow", "\320\222\320\272\320\273", nullptr));
        radioButtonLogMode->setText(QCoreApplication::translate("MasterControlWindow", "\320\233\320\276\320\263", nullptr));
        radioButtonJournalMode->setText(QCoreApplication::translate("MasterControlWindow", "\320\226\321\203\321\200\320\275\320\260\320\273", nullptr));
        radioButtonNarrativeMode->setText(QCoreApplication::translate("MasterControlWindow", "\320\235\320\260\321\200\321\200\320\260\321\202\320\270\320\262", nullptr));
        pushButtonBack->setText(QString());
#if QT_CONFIG(whatsthis)
        tabWidget->setWhatsThis(QCoreApplication::translate("MasterControlWindow", "<html><head/><body><p>bestiariy</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        textEdit->setHtml(QCoreApplication::translate("MasterControlWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Bestiary), QCoreApplication::translate("MasterControlWindow", "Bestiary", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MasterControlWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:large; font-weight:700;\"><br /></p></body></html>", nullptr));
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Location), QCoreApplication::translate("MasterControlWindow", "Location", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MasterControlWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:large; font-weight:700;\"><br /></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MasterControlWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(NPC), QCoreApplication::translate("MasterControlWindow", "NPC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterControlWindow: public Ui_MasterControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERCONTROLWINDOW_H

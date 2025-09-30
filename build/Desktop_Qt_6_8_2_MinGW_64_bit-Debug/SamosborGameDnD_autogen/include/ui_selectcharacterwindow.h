/********************************************************************************
** Form generated from reading UI file 'selectcharacterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCHARACTERWINDOW_H
#define UI_SELECTCHARACTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectCharacterWindow
{
public:
    QLabel *labelStrenght;
    QLabel *labelAgility;
    QLabel *labelXpCh;
    QLabel *labClass;
    QSpinBox *spinBoxStrenght;
    QLabel *labelElectronicsSkillName;
    QSpinBox *spinBoxAgility;
    QLabel *labelXp;
    QPushButton *pushButtonBack;
    QLabel *labelMedicineSkillName;
    QPushButton *pushButtonSave;
    QLabel *labelIntelligence;
    QSpinBox *spinBoxIntelligence;
    QComboBox *comboBoxCharacters;
    QLineEdit *lineEditXp;
    QPushButton *pushButtonTraitsHelp3;
    QLabel *labelTraitsName;
    QLabel *labelTraits2;
    QPushButton *pushButtonTraitsHelp1;
    QPushButton *pushButtonBack_2;
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
    QLabel *labelCharacters;
    QLabel *labelTraits1;
    QLabel *labelWeaponSkillName;
    QLabel *labelLvL;
    QPushButton *pushButton;
    QPushButton *pushButtonTraitsHelp2;
    QLabel *labelMechanicSkillName;
    QSpinBox *spinBoxWeaponSkill;
    QLabel *labelTraits3;
    QLabel *labelPointsLeft_2;
    QLineEdit *lineEditAddAttrPoints;
    QLabel *labelXpCh_2;
    QLineEdit *lineEditXp_3;
    QLabel *labelXpCh_3;
    QPushButton *pushButtonTalent;
    QWidget *papuri;
    QSpinBox *spinBoxElectronicsSkill;
    QSpinBox *spinBoxMedicineSkill;
    QSpinBox *spinBoxMechanicSkill;

    void setupUi(QWidget *SelectCharacterWindow)
    {
        if (SelectCharacterWindow->objectName().isEmpty())
            SelectCharacterWindow->setObjectName("SelectCharacterWindow");
        SelectCharacterWindow->resize(1000, 545);
        SelectCharacterWindow->setMinimumSize(QSize(1000, 0));
        SelectCharacterWindow->setMaximumSize(QSize(1000, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        SelectCharacterWindow->setFont(font);
        SelectCharacterWindow->setStyleSheet(QString::fromUtf8(""));
        labelStrenght = new QLabel(SelectCharacterWindow);
        labelStrenght->setObjectName("labelStrenght");
        labelStrenght->setGeometry(QRect(20, 50, 121, 30));
        labelStrenght->setMinimumSize(QSize(0, 30));
        labelAgility = new QLabel(SelectCharacterWindow);
        labelAgility->setObjectName("labelAgility");
        labelAgility->setGeometry(QRect(20, 90, 121, 30));
        labelAgility->setMinimumSize(QSize(0, 30));
        labelXpCh = new QLabel(SelectCharacterWindow);
        labelXpCh->setObjectName("labelXpCh");
        labelXpCh->setGeometry(QRect(400, 330, 201, 30));
        labelXpCh->setMinimumSize(QSize(0, 30));
        labClass = new QLabel(SelectCharacterWindow);
        labClass->setObjectName("labClass");
        labClass->setGeometry(QRect(240, 50, 241, 30));
        labClass->setMinimumSize(QSize(0, 30));
        spinBoxStrenght = new QSpinBox(SelectCharacterWindow);
        spinBoxStrenght->setObjectName("spinBoxStrenght");
        spinBoxStrenght->setGeometry(QRect(160, 50, 42, 30));
        spinBoxStrenght->setMinimumSize(QSize(0, 30));
        labelElectronicsSkillName = new QLabel(SelectCharacterWindow);
        labelElectronicsSkillName->setObjectName("labelElectronicsSkillName");
        labelElectronicsSkillName->setGeometry(QRect(20, 320, 121, 30));
        labelElectronicsSkillName->setMinimumSize(QSize(0, 30));
        labelElectronicsSkillName->setStyleSheet(QString::fromUtf8("background: none;"));
        spinBoxAgility = new QSpinBox(SelectCharacterWindow);
        spinBoxAgility->setObjectName("spinBoxAgility");
        spinBoxAgility->setGeometry(QRect(160, 90, 42, 30));
        spinBoxAgility->setMinimumSize(QSize(0, 30));
        labelXp = new QLabel(SelectCharacterWindow);
        labelXp->setObjectName("labelXp");
        labelXp->setGeometry(QRect(240, 130, 241, 30));
        labelXp->setMinimumSize(QSize(0, 30));
        pushButtonBack = new QPushButton(SelectCharacterWindow);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(10, 480, 370, 60));
        pushButtonBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border:none;\n"
"        image: url(:/images/images/SS_PB_SCW_Back.png);\n"
"    }\n"
"QPushButton:hover {\n"
"        image: url(:/images/images/SS_PB_SCW_Back_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"        image: url(:/images/images/SS_PB_SCW_Back_push.png);\n"
"}"));
        labelMedicineSkillName = new QLabel(SelectCharacterWindow);
        labelMedicineSkillName->setObjectName("labelMedicineSkillName");
        labelMedicineSkillName->setGeometry(QRect(20, 240, 101, 30));
        labelMedicineSkillName->setMinimumSize(QSize(0, 30));
        labelMedicineSkillName->setStyleSheet(QString::fromUtf8("background: none;"));
        pushButtonSave = new QPushButton(SelectCharacterWindow);
        pushButtonSave->setObjectName("pushButtonSave");
        pushButtonSave->setGeometry(QRect(10, 440, 171, 30));
        pushButtonSave->setMinimumSize(QSize(0, 30));
        pushButtonSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border: 2px solid black;\n"
"}\n"
"QPushButton:hover {\n"
"        background: none;\n"
"        border: 2px solid red;\n"
"        color: red;\n"
"}\n"
"QPushButton:pressed {\n"
"        background: none;\n"
"        border: 2px solid #8B0000;\n"
"        color: #8B0000;\n"
"}"));
        labelIntelligence = new QLabel(SelectCharacterWindow);
        labelIntelligence->setObjectName("labelIntelligence");
        labelIntelligence->setGeometry(QRect(20, 130, 121, 30));
        labelIntelligence->setMinimumSize(QSize(0, 30));
        spinBoxIntelligence = new QSpinBox(SelectCharacterWindow);
        spinBoxIntelligence->setObjectName("spinBoxIntelligence");
        spinBoxIntelligence->setGeometry(QRect(160, 130, 42, 30));
        spinBoxIntelligence->setMinimumSize(QSize(0, 30));
        comboBoxCharacters = new QComboBox(SelectCharacterWindow);
        comboBoxCharacters->setObjectName("comboBoxCharacters");
        comboBoxCharacters->setGeometry(QRect(120, 10, 361, 30));
        comboBoxCharacters->setMinimumSize(QSize(0, 30));
        lineEditXp = new QLineEdit(SelectCharacterWindow);
        lineEditXp->setObjectName("lineEditXp");
        lineEditXp->setGeometry(QRect(400, 360, 171, 30));
        lineEditXp->setMinimumSize(QSize(0, 30));
        pushButtonTraitsHelp3 = new QPushButton(SelectCharacterWindow);
        pushButtonTraitsHelp3->setObjectName("pushButtonTraitsHelp3");
        pushButtonTraitsHelp3->setGeometry(QRect(540, 280, 31, 30));
        pushButtonTraitsHelp3->setMinimumSize(QSize(30, 30));
        pushButtonTraitsHelp3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification_push.png);\n"
"}"));
        labelTraitsName = new QLabel(SelectCharacterWindow);
        labelTraitsName->setObjectName("labelTraitsName");
        labelTraitsName->setGeometry(QRect(240, 170, 81, 30));
        labelTraitsName->setMinimumSize(QSize(0, 30));
        labelTraits2 = new QLabel(SelectCharacterWindow);
        labelTraits2->setObjectName("labelTraits2");
        labelTraits2->setGeometry(QRect(240, 240, 301, 30));
        labelTraits2->setMinimumSize(QSize(0, 30));
        pushButtonTraitsHelp1 = new QPushButton(SelectCharacterWindow);
        pushButtonTraitsHelp1->setObjectName("pushButtonTraitsHelp1");
        pushButtonTraitsHelp1->setGeometry(QRect(540, 200, 31, 30));
        pushButtonTraitsHelp1->setMinimumSize(QSize(30, 30));
        pushButtonTraitsHelp1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification_push.png);\n"
"}"));
        pushButtonBack_2 = new QPushButton(SelectCharacterWindow);
        pushButtonBack_2->setObjectName("pushButtonBack_2");
        pushButtonBack_2->setGeometry(QRect(10, 400, 171, 30));
        pushButtonBack_2->setMinimumSize(QSize(0, 30));
        pushButtonBack_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border: 2px solid black;\n"
"}\n"
"QPushButton:hover {\n"
"        background: none;\n"
"        border: 2px solid red;\n"
"        color: red;\n"
"}\n"
"QPushButton:pressed {\n"
"        background: none;\n"
"        border: 2px solid #8B0000;\n"
"        color: #8B0000;\n"
"}"));
        tabWidget = new QTabWidget(SelectCharacterWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(630, 60, 361, 401));
        tabWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border:none;\n"
"        image: url(:/images/images/SS_PB_SMCW_Search.png);\n"
"    }\n"
"QPushButton:hover {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_push.png);\n"
"}"));
        Bestiary = new QWidget();
        Bestiary->setObjectName("Bestiary");
        textEdit_2 = new QTextEdit(Bestiary);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 320, 181, 41));
        textEdit = new QTextEdit(Bestiary);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 341, 301));
        pushButton_2 = new QPushButton(Bestiary);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 320, 150, 41));
        pushButton_2->setMinimumSize(QSize(150, 0));
        pushButton_2->setMaximumSize(QSize(150, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border:none;\n"
"        image: url(:/images/images/SS_PB_SMCW_Search.png);\n"
"    }\n"
"QPushButton:hover {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_push.png);\n"
"}"));
        tabWidget->addTab(Bestiary, QString());
        Location = new QWidget();
        Location->setObjectName("Location");
        textEdit_3 = new QTextEdit(Location);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 320, 181, 41));
        textEdit_4 = new QTextEdit(Location);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(10, 10, 341, 301));
        pushButton_3 = new QPushButton(Location);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 320, 150, 40));
        pushButton_3->setMaximumSize(QSize(150, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border:none;\n"
"        image: url(:/images/images/SS_PB_SMCW_Search.png);\n"
"    }\n"
"QPushButton:hover {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_push.png);\n"
"}"));
        tabWidget->addTab(Location, QString());
        NPC = new QWidget();
        NPC->setObjectName("NPC");
        textEdit_5 = new QTextEdit(NPC);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(10, 10, 341, 301));
        textEdit_6 = new QTextEdit(NPC);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(10, 320, 181, 41));
        pushButton_4 = new QPushButton(NPC);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 320, 151, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border:none;\n"
"        image: url(:/images/images/SS_PB_SMCW_Search.png);\n"
"    }\n"
"QPushButton:hover {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"        image: url(:/images/images/SS_PB_SMCW_Search_push.png);\n"
"}"));
        tabWidget->addTab(NPC, QString());
        labelCharacters = new QLabel(SelectCharacterWindow);
        labelCharacters->setObjectName("labelCharacters");
        labelCharacters->setGeometry(QRect(20, 10, 91, 30));
        labelCharacters->setMinimumSize(QSize(0, 30));
        labelTraits1 = new QLabel(SelectCharacterWindow);
        labelTraits1->setObjectName("labelTraits1");
        labelTraits1->setGeometry(QRect(240, 200, 301, 30));
        labelTraits1->setMinimumSize(QSize(0, 30));
        labelWeaponSkillName = new QLabel(SelectCharacterWindow);
        labelWeaponSkillName->setObjectName("labelWeaponSkillName");
        labelWeaponSkillName->setGeometry(QRect(20, 200, 101, 30));
        labelWeaponSkillName->setMinimumSize(QSize(0, 30));
        labelLvL = new QLabel(SelectCharacterWindow);
        labelLvL->setObjectName("labelLvL");
        labelLvL->setGeometry(QRect(240, 90, 231, 30));
        labelLvL->setMinimumSize(QSize(0, 30));
        pushButton = new QPushButton(SelectCharacterWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 400, 191, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border: 2px solid black;\n"
"}\n"
"QPushButton:hover {\n"
"        background: none;\n"
"        border: 2px solid red;\n"
"        color: red;\n"
"}\n"
"QPushButton:pressed {\n"
"        background: none;\n"
"        border: 2px solid #8B0000;\n"
"        color: #8B0000;\n"
"}"));
        pushButtonTraitsHelp2 = new QPushButton(SelectCharacterWindow);
        pushButtonTraitsHelp2->setObjectName("pushButtonTraitsHelp2");
        pushButtonTraitsHelp2->setGeometry(QRect(540, 240, 31, 30));
        pushButtonTraitsHelp2->setMinimumSize(QSize(30, 30));
        pushButtonTraitsHelp2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_CSCW_Clarification_push.png);\n"
"}"));
        labelMechanicSkillName = new QLabel(SelectCharacterWindow);
        labelMechanicSkillName->setObjectName("labelMechanicSkillName");
        labelMechanicSkillName->setGeometry(QRect(20, 280, 101, 30));
        labelMechanicSkillName->setMinimumSize(QSize(0, 30));
        labelMechanicSkillName->setStyleSheet(QString::fromUtf8("background: none;"));
        spinBoxWeaponSkill = new QSpinBox(SelectCharacterWindow);
        spinBoxWeaponSkill->setObjectName("spinBoxWeaponSkill");
        spinBoxWeaponSkill->setGeometry(QRect(150, 200, 50, 30));
        spinBoxWeaponSkill->setMinimumSize(QSize(50, 30));
        labelTraits3 = new QLabel(SelectCharacterWindow);
        labelTraits3->setObjectName("labelTraits3");
        labelTraits3->setGeometry(QRect(240, 280, 301, 30));
        labelTraits3->setMinimumSize(QSize(0, 30));
        labelPointsLeft_2 = new QLabel(SelectCharacterWindow);
        labelPointsLeft_2->setObjectName("labelPointsLeft_2");
        labelPointsLeft_2->setGeometry(QRect(20, 370, 181, 30));
        labelPointsLeft_2->setMinimumSize(QSize(0, 30));
        lineEditAddAttrPoints = new QLineEdit(SelectCharacterWindow);
        lineEditAddAttrPoints->setObjectName("lineEditAddAttrPoints");
        lineEditAddAttrPoints->setGeometry(QRect(400, 430, 171, 30));
        lineEditAddAttrPoints->setMinimumSize(QSize(0, 30));
        labelXpCh_2 = new QLabel(SelectCharacterWindow);
        labelXpCh_2->setObjectName("labelXpCh_2");
        labelXpCh_2->setGeometry(QRect(400, 400, 201, 30));
        labelXpCh_2->setMinimumSize(QSize(0, 30));
        lineEditXp_3 = new QLineEdit(SelectCharacterWindow);
        lineEditXp_3->setObjectName("lineEditXp_3");
        lineEditXp_3->setGeometry(QRect(400, 500, 171, 30));
        lineEditXp_3->setMinimumSize(QSize(0, 30));
        labelXpCh_3 = new QLabel(SelectCharacterWindow);
        labelXpCh_3->setObjectName("labelXpCh_3");
        labelXpCh_3->setGeometry(QRect(400, 470, 201, 30));
        labelXpCh_3->setMinimumSize(QSize(0, 30));
        pushButtonTalent = new QPushButton(SelectCharacterWindow);
        pushButtonTalent->setObjectName("pushButtonTalent");
        pushButtonTalent->setGeometry(QRect(630, 470, 360, 60));
        pushButtonTalent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: none;\n"
"        border:none;\n"
"        image: url(:/images/images/SS_PB_SCW_TalentTree.png);\n"
"    }\n"
"QPushButton:hover {\n"
"        image: url(:/images/images/SS_PB_SCW_TalentTree_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"        image: url(:/images/images/SS_PB_SCW_TalentTree_push.png);\n"
"}"));
        papuri = new QWidget(SelectCharacterWindow);
        papuri->setObjectName("papuri");
        papuri->setGeometry(QRect(0, 0, 1000, 545));
        papuri->setMinimumSize(QSize(1000, 545));
        papuri->setMaximumSize(QSize(1000, 545));
        papuri->setStyleSheet(QString::fromUtf8("bacground: none;\n"
"image: url(:/images/images/SS_L_SCW_BG.png);\n"
""));
        spinBoxElectronicsSkill = new QSpinBox(papuri);
        spinBoxElectronicsSkill->setObjectName("spinBoxElectronicsSkill");
        spinBoxElectronicsSkill->setGeometry(QRect(150, 320, 50, 30));
        spinBoxElectronicsSkill->setMinimumSize(QSize(50, 30));
        spinBoxElectronicsSkill->setMaximumSize(QSize(50, 16777215));
        spinBoxMedicineSkill = new QSpinBox(papuri);
        spinBoxMedicineSkill->setObjectName("spinBoxMedicineSkill");
        spinBoxMedicineSkill->setGeometry(QRect(150, 240, 50, 30));
        spinBoxMedicineSkill->setMinimumSize(QSize(50, 30));
        spinBoxMedicineSkill->setMaximumSize(QSize(50, 16777215));
        spinBoxMechanicSkill = new QSpinBox(papuri);
        spinBoxMechanicSkill->setObjectName("spinBoxMechanicSkill");
        spinBoxMechanicSkill->setGeometry(QRect(150, 280, 50, 30));
        spinBoxMechanicSkill->setMinimumSize(QSize(50, 30));
        spinBoxMechanicSkill->setMaximumSize(QSize(50, 16777215));
        papuri->raise();
        labelStrenght->raise();
        labelAgility->raise();
        labelXpCh->raise();
        labClass->raise();
        spinBoxStrenght->raise();
        labelElectronicsSkillName->raise();
        spinBoxAgility->raise();
        labelXp->raise();
        pushButtonBack->raise();
        labelMedicineSkillName->raise();
        pushButtonSave->raise();
        labelIntelligence->raise();
        spinBoxIntelligence->raise();
        comboBoxCharacters->raise();
        lineEditXp->raise();
        pushButtonTraitsHelp3->raise();
        labelTraitsName->raise();
        labelTraits2->raise();
        pushButtonTraitsHelp1->raise();
        pushButtonBack_2->raise();
        tabWidget->raise();
        labelCharacters->raise();
        labelTraits1->raise();
        labelWeaponSkillName->raise();
        labelLvL->raise();
        pushButton->raise();
        pushButtonTraitsHelp2->raise();
        labelMechanicSkillName->raise();
        spinBoxWeaponSkill->raise();
        labelTraits3->raise();
        labelPointsLeft_2->raise();
        lineEditAddAttrPoints->raise();
        labelXpCh_2->raise();
        lineEditXp_3->raise();
        labelXpCh_3->raise();
        pushButtonTalent->raise();

        retranslateUi(SelectCharacterWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SelectCharacterWindow);
    } // setupUi

    void retranslateUi(QWidget *SelectCharacterWindow)
    {
        SelectCharacterWindow->setWindowTitle(QCoreApplication::translate("SelectCharacterWindow", "SelectCharacterWindow", nullptr));
        labelStrenght->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\241\320\270\320\273\320\260", nullptr));
        labelAgility->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\233\320\276\320\262\320\272\320\276\321\201\321\202\321\214", nullptr));
        labelXpCh->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\224/\320\276 \320\276\320\277\321\213\321\202\320\260", nullptr));
        labClass->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        labelElectronicsSkillName->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));
        labelXp->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\236\320\277\321\213\321\202", nullptr));
        pushButtonBack->setText(QString());
        labelMedicineSkillName->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        labelIntelligence->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\230\320\275\321\202\320\265\320\273\320\265\320\272\321\202", nullptr));
        pushButtonTraitsHelp3->setText(QString());
        labelTraitsName->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\236\321\201\320\276\320\261\320\265\320\275\320\275\320\276\321\201\321\202\320\270", nullptr));
        labelTraits2->setText(QCoreApplication::translate("SelectCharacterWindow", "-", nullptr));
        pushButtonTraitsHelp1->setText(QString());
        pushButtonBack_2->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(whatsthis)
        tabWidget->setWhatsThis(QCoreApplication::translate("SelectCharacterWindow", "<html><head/><body><p>bestiariy</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        textEdit->setHtml(QCoreApplication::translate("SelectCharacterWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">1.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\213\320\273\321\214\320\275\320\270\320\272</span></h3>\n"
"<p style="
                        "\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 \321\201\321\203\321\211\320\275\320\276\321\201\321\202\321\214 \320\270\320\267 \321\204\320\270\320\276\320\273\320\265\321\202\320\276\320\262\320\276-\321\201\320\265\321\200\320\276\320\271 \320\277\321\213\320\273\320\270. \320\224\320\262\320\270\320\263\320\260\320\265\321\202\321\201\321\217 \320\277\320\276 \320\262\320\265\320\275\321\202\320\270\320\273\321\217\321\206\320\270\321\217\320\274, \320\275\320\265\321\203\320\273\320\276\320\262\320\270\320\274. \320\222\321\213\320\267\321\213\320\262\320"
                        "\260\320\265\321\202 \321\202\321\200\320\265\320\262\320\276\320\266\320\275\321\213\320\265 \321\210\321\221\320\277\320\276\321\202\321\213 \320\270 \320\277\320\276\321\202\320\265\321\200\321\216 \320\276\321\200\320\270\320\265\320\275\321\202\320\260\321\206\320\270\320\270. \320\241\320\262\321\217\320\267\320\260\320\275 \321\201 \320\274\320\265\321\201\321\202\320\260\320\274\320\270 \320\262\321\213\321\201\320\276\320\272\320\276\320\271 \321\201\320\274\320\265\321\200\321\202\320\275\320\276\321\201\321\202\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">2.\302\240</span></h3>\n"
"<h3 style=\" m"
                        "argin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\234\320\260\321\201\320\276\321\207\320\275\320\270\320\272\320\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\244\320\270\320\263\321\203\321\200\321\213 \320\262 \321\202\320\265\320\260\321\202\321\200\320\260\320\273\321\214\320\275\321\213\321\205 \320\274\320\260\321\201\320\272\320\260\321\205. \320\245\320\276\320\264\321\217\321\202 \320\275\320\276\321\207\320\260\320\274\320\270 \320\277\320\276 \320\267\320\260\320\277\320\265\321"
                        "\207\320\260\321\202\320\260\320\275\320\275\321\213\320\274 \321\215\321\202\320\260\320\266\320\260\320\274. \320\232\321\202\320\276 \320\262\321\201\321\202\321\203\320\277\320\260\320\265\321\202 \320\262 \320\272\320\276\320\275\321\202\320\260\320\272\321\202 \342\200\224 \321\200\320\270\321\201\320\272\321\203\320\265\321\202 \320\277\320\276\321\202\320\265\321\200\321\217\321\202\321\214 \320\273\320\270\321\207\320\275\320\276\321\201\321\202\321\214. \320\237\320\276\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\277\320\276\321\205\320\276\320\266\320\265 \320\275\320\260 \321\200\320\270\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265 \321\202\320\260\320\275\321\206\321\213.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">3.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\245\320\276\320\264\321\217\321\207\320\260\321\217 \320\232\320\275\320\270\320\263\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\262 \320\272\320\262\320\260\321\200"
                        "\321\202\320\270\321\200\320\260\321\205, \320\270\321\201\321\207\320\265\320\267\320\260\320\265\321\202 \321\207\320\265\321\200\320\265\320\267 \320\264\320\265\320\275\321\214. \320\232\321\202\320\276 \321\207\320\270\321\202\320\260\320\265\321\202 \342\200\224 \320\277\321\200\320\276\320\277\320\260\320\264\320\260\320\265\321\202. \320\241\321\202\321\200\320\260\320\275\320\270\321\206\321\213 \320\267\320\260\320\277\320\276\320\273\320\275\321\217\321\216\321\202\321\201\321\217 \320\270\320\274\320\265\320\275\320\260\320\274\320\270 \320\266\320\265\321\200\321\202\320\262. \320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276, \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\276\320\274 \320\272\320\260\320\272 \320\273\320\276\320\262\321\203\321\210\320\272\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">4.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\201\320\265\320\262\320\264\320\276\320\264\320\262\320\265\321\200\320\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFon"
                        "t'; font-size:13pt;\">\320\224\320\262\320\265\321\200\320\270, \320\262\320\265\320\264\321\203\321\211\320\270\320\265 \320\272\320\260\320\266\320\264\321\213\320\271 \321\200\320\260\320\267 \320\262 \321\200\320\260\320\267\320\275\321\213\320\265 \320\274\320\265\321\201\321\202\320\260: \320\276\321\202 \320\277\321\203\321\201\321\202\321\213\321\205 \320\272\320\276\321\200\320\270\320\264\320\276\321\200\320\276\320\262 \320\264\320\276 \321\207\320\265\321\200\320\275\320\270\320\273\321\214\320\275\320\276\320\271 \321\202\320\265\320\274\320\275\320\276\321\202\321\213. \320\230\320\275\320\276\320\263\320\264\320\260 \342\200\234\320\266\320\270\320\262\321\213\320\265\342\200\235, \320\274\320\276\320\263\321\203\321\202 \342\200\234\320\267\320\260\320\272\321\200\321\213\321\202\321\214\342\200\235 \320\267\320\260 \320\277\321\203\321\202\320\275\320\270\320\272\320\276\320\274 \320\277\321\203\321\202\321\214 \320\276\320\261\321\200\320\260\321\202\320\275\320\276.</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">5.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\241\320\265\321\202\320\265\320\262\320\276\320\271</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\276, \321\201\321\200\320\276\321\201\321\210\320\265\320\265\321\201\321\217 \321\201 \321\201\320\270\321\201\321\202\320\265\320\274\320\276\320\271 \320\262\320\265\321\211\320\260\320\275\320\270\321\217. \320\232\320\276\320\275\321\202\321\200\320\276\320\273\320\270\321\200\321\203\320\265\321\202 \320\264\320\270\320\275\320\260\320\274\320\270\320\272\320\270, \321\201\320\262\320\265\321\202, \321\201\320\270\320\263\320\275\320\260\320\273 \321\202\321\200\320\265\320\262\320\276\320\263\320\270. \320\234\320\276\320\266\320\265\321\202 \320\263\320\276\320\262\320\276\321\200\320\270\321\202\321\214 \320\263\320\276\320\273\320\276\321\201\320\276\320\274 \321\203\320\274\320\265\321\200\321\210\320\270\321\205. \320\237\321\200\320\265\320\264\320\277\320\276\320\273\320\276\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320"
                        "\276, \321\215\321\202\320\276 \320\276\321\201\321\202\320\260\321\202\320\276\320\272 \321\201\320\276\320\267\320\275\320\260\320\275\320\270\321\217 \320\261\321\213\320\262\321\210\320\265\320\263\320\276 \320\264\320\270\320\272\321\202\320\276\321\200\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">6.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\200\320\276\320\266\320\276\321\200\320\273\320\270\320\262\321"
                        "\213\320\271 \320\243\320\267\320\265\320\273</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\220\320\275\320\276\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\321\200\321\203\320\261\320\260 \320\270\320\273\320\270 \321\203\320\267\320\265\320\273 \320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\271, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\267\320\260\321\202\321\217\320\263\320\270\320\262\320\260\320\265\321\202 \320\262\321\201\321\221 \320\266\320\270\320\262\320\276\320\265. \320\237\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217"
                        " \320\262 \321\202\320\265\321\205\320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\270\321\217\321\205. \320\237\320\270\321\211\320\270\321\202, \321\201\321\202\320\276\320\275\320\265\321\202, \320\261\321\203\320\264\321\202\320\276 \320\266\320\270\320\262\320\260\321\217. \320\234\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\277\320\260\321\200\320\260\320\267\320\270\321\202\320\276\320\274 \320\275\320\260 \321\202\320\265\320\273\320\265 \320\223\320\270\320\263\320\260\321\205\321\200\321\203\321\211\321\221\320\262\320\272\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight"
                        ":700;\">7.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\242\320\265\320\275\321\214 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\241\320\270\320\273\321\203\321\215\321\202 \320\277\320\276\320\263\320\270\320\261\321\210\320\265\320\263\320\276, \320\277\320\276\320\262\321\202\320\276\321\200\321\217\321\216\321\211\320\270\320\271 \320\277\320\276\321\201\320\273\320\265\320\264"
                        "\320\275\320\270\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217. \320\235\320\265\320\276\320\277\320\260\321\201\320\265\320\275 \320\275\320\260\320\277\321\200\321\217\320\274\321\203\321\216, \320\275\320\276 \320\274\320\276\320\266\320\265\321\202 \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\277\321\201\320\270\321\205\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\201\321\200\321\213\320\262. \320\230\320\275\320\276\320\263\320\264\320\260 \320\276\320\275\320\270 \342\200\234\321\201\320\274\320\276\321\202\321\200\321\217\321\202 \320\262 \320\276\321\202\320\262\320\265\321\202\342\200\235\342\200\246</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">8.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\320\260\320\274\321\217\321\202\320\275\321\213\320\271 \320\255\321\204\320\270\321\200</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\242\320\265\320\273\320\265\320\262\320\270\320\267\320\270\320\276\320\275\320\275\321\213\320\265 \320\277\320\265\321\200\320\265\320\264"
                        "\320\260\321\207\320\270 \321\201 \321\203\321\207\320\260\321\201\321\202\320\270\320\265\320\274 \320\264\320\260\320\262\320\275\320\276 \321\203\320\274\320\265\321\200\321\210\320\270\321\205. \320\237\320\276\321\217\320\262\320\273\321\217\321\216\321\202\321\201\321\217 \320\261\320\265\320\267 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320\272\320\260 \321\201\320\270\320\263\320\275\320\260\320\273\320\260. \320\241\320\273\321\203\321\210\320\260\320\275\320\270\320\265 \320\274\320\276\320\266\320\265\321\202 \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\277\320\276\321\202\320\265\321\200\321\216 \320\277\320\260\320\274\321\217\321\202\320\270, \320\263\320\260\320\273\320\273\321\216\321\206\320\270\320\275\320\260\321\206\320\270\320\270, \321\201\320\276\320\274\320\275\320\260\320\274\320\261\321\203\320\273\320\270\320\267\320\274.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">9.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\236\321\202\321\200\320\260\320\266\320\260\321\202\320\265\320\273\321\214</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIF"
                        "ont'; font-size:13pt;\">\320\241\320\276\320\267\320\264\320\260\321\221\321\202 \320\264\320\262\320\276\320\271\320\275\320\270\320\272\320\260 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260, \320\276\320\261\321\213\321\207\320\275\320\276 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200\320\260. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \321\200\320\265\321\207\321\214 \320\270 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217, \320\275\320\276 \321\201 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\274 \320\267\320\260\320\277\320\276\320\267\320\264\320\260\320\275\320\270\320\265\320\274. \320\230\320\275\320\276\320\263\320\264\320\260 \320\277\321\213\321\202\320\260\320\265\321\202\321\201\321\217 \342\200\234\320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214\342\200\235 \320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273.</span></p>\n"
"<p style=\"-qt-parag"
                        "raph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">10.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\250\320\260\321\200\320\272\320\260\321\216\321\211\320\270\320\271</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\235\320\265\320\262\320\270\320\264\320\270\320\274\321\213\320\271 \321\205\320\270\321\211\320\275\320\270\320\272, \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\271 \321\202\320\276\320\273\321\214\320\272\320\276 \320\272\320\260\320\272 \320\267\320\262\321\203\320\272: \321\210\320\260\320\263\320\270, \321\201\320\272\321\200\320\265\320\266\320\265\321\202. \320\237\321\200\320\265\321\201\320\273\320\265\320\264\321\203\320\265\321\202 \320\276\320\264\320\270\320\275\320\276\321\207\320\265\320\272. \320\242\320\265, \320\272\321\202\320\276 \321\201\320\273\321\213\321\210\320\260\320\273 \320\265\320\263\320\276 \320\261\320\273\320\270\320\267\320\272\320\276, \320\270\321\201\321\207\320\265\320\267\320\260\321\216\321\202. \320\222\321\201\321\202\321\200\320\265\321\207\320\260\320\265\321\202\321\201\321\217 \321\207\320\260\321\211"
                        "\320\265 \320\262 \321\201\321\202\320\260\321\200\321\213\321\205 \320\273\320\265\321\201\321\202\320\275\320\270\321\207\320\275\321\213\321\205 \320\272\320\273\320\265\321\202\320\272\320\260\321\205.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">11.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\320\260\321\203\321\202\320\270\320\275\320\260 \320\230\320\274\320\265\320\275</span></h3>\n"
"<p style=\" margin-top:12px; m"
                        "argin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\234\320\260\320\273\320\276\320\267\320\260\320\274\320\265\321\202\320\275\320\260\321\217 \321\201\320\265\321\202\321\214 \320\275\320\260 \320\277\320\276\321\202\320\276\320\273\320\272\320\260\321\205 \320\272\320\262\320\260\321\200\321\202\320\270\321\200. \320\222 \320\275\320\265\320\271 \342\200\224 \320\262\320\277\320\273\320\265\321\202\321\221\320\275\320\275\321\213\320\265 \320\261\321\203\320\274\320\260\320\266\320\272\320\270 \321\201 \321\207\321\203\320\266\320\270\320\274\320\270 \320\270\320\274\320\265\320\275\320\260\320\274\320\270. \320\225\321\201\320\273\320\270 \320\267\320\260\320\264\320\265\320\275\320\265\321"
                        "\210\321\214 \342\200\224 \320\274\320\276\320\266\320\265\321\210\321\214 \320\267\320\260\320\261\321\213\321\202\321\214 \321\201\320\262\320\276\321\221 \320\270\320\274\321\217. \320\230 \321\207\320\265\320\274 \320\264\320\276\320\273\321\214\321\210\320\265 \320\267\320\260\320\261\321\213\321\202\320\276 \342\200\224 \321\202\320\265\320\274 \321\201\320\270\320\273\321\214\320\275\320\265\320\265 \320\277\321\200\320\270\320\262\321\217\320\267\320\260\320\275 \320\272 \320\223\320\270\320\263\320\260\321\205\321\200\321\203\321\211\321\221\320\262\320\272\320\265.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700"
                        ";\">12.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\213\320\273\321\214\320\275\321\213\320\265 \320\223\320\273\320\260\320\267\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\260\321\200\321\217\321\211\320\270\320\265 \320\263\320\273\320\260\320\267\320\275\321\213\320\265 \321\217\320\261\320\273\320\276\320\272\320\270 \320\262 \320\277\321\213\320\273\320\270. \320\241\320\273\320\265\320\264\321\217\321\202 \320\267\320\260"
                        " \320\266\320\270\320\273\321\214\321\206\320\260\320\274\320\270, \320\276\321\201\321\202\320\260\321\216\321\202\321\201\321\217 \320\275\320\265\320\277\320\276\320\264\320\262\320\270\320\266\320\275\321\213\320\274\320\270. \320\230\320\275\320\276\320\263\320\264\320\260 \320\274\320\276\321\200\320\263\320\260\321\216\321\202. \320\232\321\202\320\276 \320\262\321\201\321\202\321\200\320\265\321\202\320\270\321\202\321\201\321\217 \320\262\320\267\320\263\320\273\321\217\320\264\320\276\320\274 \342\200\224 \320\277\320\276\321\202\320\276\320\274 \320\275\320\265 \320\274\320\276\320\266\320\265\321\202 \321\201\320\277\320\260\321\202\321\214, \321\201\320\273\321\213\321\210\320\270\321\202 \342\200\234\320\275\320\260\320\261\320\273\321\216\320\264\320\265\320\275\320\270\320\265\342\200\235.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13p"
                        "t;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">13.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\240\320\265\321\207\320\265\320\262\320\276\320\271 \320\237\320\265\321\202\320\273\320\270\321\202\320\265\320\273\321\214</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320"
                        "\220\320\275\320\276\320\274\320\260\320\273\320\270\321\217 \320\262 \320\263\321\200\320\276\320\274\320\272\320\276\320\263\320\276\320\262\320\276\321\200\320\270\321\202\320\265\320\273\321\217\321\205. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \321\203\321\201\320\273\321\213\321\210\320\260\320\275\320\275\321\213\320\265 \321\204\321\200\320\260\320\267\321\213, \320\275\320\276 \321\201 \320\270\321\201\320\272\320\260\320\266\320\265\320\275\320\270\320\265\320\274 \321\201\320\274\321\213\321\201\320\273\320\260. \320\247\320\265\320\274 \321\207\320\260\321\211\320\265 \321\201\320\273\321\213\321\210\320\270\321\210\321\214, \321\202\320\265\320\274 \320\261\320\276\320\273\321\214\321\210\320\265 \320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320\262\320\276\321\201\320\277\321\200\320\270\321\217\321\202\320\270\320\265 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:e"
                        "mpty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">14.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\223\320\276\320\273\320\276\320\264\320\275\320\260\321\217 \320\237\320\273\321\221\320\275\320\272\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\244\321\200\320\260\320\263\320\274\320\265\320\275\321\202 \320\277\320\273\321\221\320\275\320\272\320\270 (\320\272\320\270\320\275\320\276 \320\270\320\273\320\270 \320\260\321\203\320\264\320\270\320\276), \320\277\320\276\321\217\320\262\320\273\321\217\321\216\321\211\320\270\320\271\321\201\321\217 \320\262 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\260\321\205. \320\225\321\201\320\273\320\270 \320\262\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \342\200\224 \320\262\321\213\320\267\321\213\320\262\320\260\320\265\321\202 \320\264\320\265\320\266\320\260\320\262\321\216, \320\267\320\260\321\202\320\265\320\274 \320\277\320\276\321\202\320\265\321\200\321\216 \321\207\321\203\320\262\321\201\321\202\320\262, \320\267\320\260\321\202\320\265\320\274 \342\200\234\320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276\320"
                        "\262\320\265\321\200\321\205 \321\200\320\260\320\267\321\203\320\274\320\260\342\200\235. \320\237\320\276\321\201\320\273\320\265 \321\215\321\202\320\276\320\263\320\276 \342\200\224 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266 \320\274\320\276\320\266\320\265\321\202 \320\275\320\260\321\207\320\260\321\202\321\214 \320\262\320\265\321\201\321\202\320\270 \321\201\320\265\320\261\321\217 \320\272\320\260\320\272 \320\272\321\202\320\276-\321\202\320\276 \320\264\321\200\321\203\320\263\320\276\320\271.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">15.\302\240</span></h3>\n"
"<h3 style=\" margi"
                        "n-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\235\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\233\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\244\320\270\320\263\321\203\321\200\320\260 \320\262 \321\203\320\275\320\270\321\204\320\276\321\200\320\274\320\265, \320\275\320\265 \320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320"
                        "\262\320\260\320\275\320\275\320\260\321\217 \320\275\320\270 \320\262 \320\276\320\264\320\275\320\276\320\274 \320\276\321\202\321\200\321\217\320\264\320\265. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \320\263\320\276\320\273\320\276\321\201 \320\267\320\275\320\260\320\272\320\276\320\274\320\276\320\263\320\276, \320\275\320\276 \321\201 \320\276\321\210\320\270\320\261\320\272\320\260\320\274\320\270 \320\262 \321\200\320\265\321\207\320\270. \320\222\321\201\320\265\320\263\320\264\320\260 \320\277\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\200\321\217\320\264\320\276\320\274 \321\201 \320\274\320\265\321\201\321\202\320\260\320\274\320\270 \320\260\320\272\321\202\320\270\320\262\320\275\320\276\320\263\320\276 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">16.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\243\320\273\321\213\320\261\320\260\321\216\321\211\320\270\320\271\321\201\321\217 \320\243\320\263\320\276\320\273</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family"
                        ":'.AppleSystemUIFont'; font-size:13pt;\">\320\236\320\264\320\270\320\275 \320\270\320\267 \321\203\320\263\320\273\320\276\320\262 \320\262 \321\201\321\202\320\260\321\200\320\276\320\271 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\265 \342\200\234\321\203\320\273\321\213\320\261\320\260\320\265\321\202\321\201\321\217\342\200\235 \342\200\224 \321\210\321\202\321\203\320\272\320\260\321\202\321\203\321\200\320\272\320\260 \320\276\320\261\321\200\320\260\320\267\321\203\320\265\321\202 \320\277\320\276\320\264\320\276\320\261\320\270\320\265 \321\200\321\202\320\260. \320\230\320\275\320\276\320\263\320\264\320\260 \321\210\320\265\320\277\321\207\320\265\321\202 \321\201\320\276\320\262\320\265\321\202\321\213. \320\241\320\275\320\260\321\207\320\260\320\273\320\260 \320\277\320\276\320\274\320\276\320\263\320\260\320\265\321\202\342\200\246 \320\277\320\276\321\202\320\276\320\274 \321\202\321\200\320\265\320\261\321\203\320\265\321\202. \320\242\320\265, \320\272\321\202\320\276 \321\201"
                        "\320\273\321\203\321\210\320\260\320\265\321\202 \342\200\224 \321\202\320\265\321\200\321\217\321\216\321\202 \321\201\320\262\321\217\320\267\321\214 \321\201 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214\321\216.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">17.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\234\320\265\321\205\320\260\320\275\320\270\320\272-\320\237\320\260\321\200\320\260\320"
                        "\267\320\270\321\202</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\220\320\275\320\276\320\274\320\260\320\273\320\270\321\217 \320\262 \320\276\320\261\321\200\320\260\320\267\320\265 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276. \320\237\321\213\321\202\320\260\320\265\321\202\321\201\321\217 \321\207\320\270\320\275\320\270\321\202\321\214 \321\201\320\273\320\276\320\274\320\260\320\275\320\275\321\213\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\213, \320\275\320\276 \320\264\320\265\320\273\320\260\320\265\321\202 \321\215\321\202\320\276 \342\200\234\320\275\320\265\320\277\321\200\320\260\320"
                        "\262\320\270\320\273\321\214\320\275\320\276\342\200\235: \321\200\320\276\320\267\320\265\321\202\320\272\320\270 \320\275\320\260\321\207\320\270\320\275\320\260\321\216\321\202 \320\277\320\265\321\202\321\214, \321\207\320\260\320\271\320\275\320\270\320\272\320\270 \342\200\224 \320\263\320\276\320\262\320\276\321\200\320\270\321\202\321\214. \320\237\320\276\320\267\320\266\320\265 \320\262\321\201\321\221 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\276 \342\200\234\320\277\320\276\320\264\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\321\202\321\201\321\217\342\200\235 \320\277\320\276\320\264 \320\265\320\263\320\276 \320\273\320\276\320\263\320\270\320\272\321\203.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin"
                        "-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">18.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\227\320\260\320\277\320\265\321\200\321\202\321\213\320\265 \320\237\320\265\321\201\320\275\320\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\230\320\267 \321\201\321\202\320\260\321\200\321\213\321\205 \320\272\320\260\321\201\321"
                        "\201\320\265\321\202 \320\270 \321\200\320\260\320\264\320\270\320\276\320\277\321\200\320\270\321\221\320\274\320\275\320\270\320\272\320\276\320\262 \320\264\320\276\320\275\320\276\321\201\320\270\321\202\321\201\321\217 \320\276\320\264\320\275\320\260 \320\270 \321\202\320\260 \320\266\320\265 \320\274\320\265\320\273\320\276\320\264\320\270\321\217. \320\242\320\265, \320\272\321\202\320\276 \320\265\321\221 \320\275\320\260\320\277\320\265\320\262\320\260\320\265\321\202 \342\200\224 \320\275\320\265 \320\274\320\276\320\263\321\203\321\202 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214\321\201\321\217. \320\247\320\265\321\200\320\265\320\267 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\264\320\275\320\265\320\271 \342\200\224 \320\270\321\201\321\207\320\265\320\267\320\260\321\216\321\202. \320\235\320\260 \321\201\321\202\320\265\320\275\320\265 \320\276\321\201\321\202\320\260\321\221\321\202\321\201\321\217 \342\200\234\320\267\320"
                        "\260\320\277\320\270\321\201\321\214\342\200\235 \320\270\321\205 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\277\320\265\321\201\320\275\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">19.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\320\265\320\277\320\265\320\273\321\214\320\275\320\270\320\272</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\236\320\261\321\200\320\260\320\267 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260, \320\262\321\213\320\273\320\265\320\277\320\273\320\265\320\275\320\275\321\213\320\271 \320\270\320\267 \320\277\320\265\320\277\320\273\320\260 \320\270 \320\277\321\213\320\273\320\270. \320\222\320\276\320\267\320\275\320\270\320\272\320\260\320\265\321\202 \320\277\321\200\320\270 \321\201\320\276\320\266\320\266\320\265\320\275\320\270\320\270 \320\276\320\264\320\265\320\266\320\264\321\213, \320\277\320\270\321\201\320\265\320\274 \320\270\320\273\320\270 \321\204\320\276\321\202\320\276\320\263\321\200\320\260\321\204\320\270\320\271 \320\277\320\276\320\263\320\270\320\261"
                        "\321\210\320\270\321\205. \320\241\321\202\320\276\320\270\321\202 \320\275\320\265\320\277\320\276\320\264\320\262\320\270\320\266\320\275\320\276, \320\270\320\275\320\276\320\263\320\264\320\260 \320\277\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \320\266\320\265\321\201\321\202\321\213 \321\203\321\210\320\265\320\264\321\210\320\270\321\205.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">20.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-si"
                        "ze:13pt; font-weight:700;\">\320\232\320\276\320\273\320\273\320\265\320\272\321\202\320\276\321\200 \320\241\320\275\320\276\320\262</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\275\320\276\321\207\321\214\321\216 \320\262 \320\276\320\261\321\200\320\260\320\267\320\265 \320\267\320\275\320\260\320\272\320\276\320\274\320\276\320\263\320\276. \320\237\321\200\320\276\321\201\320\270\321\202 \342\200\234\320\277\320\276\320\264\320\265\320\273\320\270\321\202\321\214\321\201\321\217 \321\201\320\275\320\276\320\274\342\200\235. \320\242\320\265, \320\272\321\202"
                        "\320\276 \321\201\320\276\320\263\320\273\320\260\321\210\320\260\320\265\321\202\321\201\321\217 \342\200\224 \320\261\320\276\320\273\321\214\321\210\320\265 \320\275\320\265 \320\262\320\270\320\264\321\217\321\202 \321\201\320\275\320\276\320\262 \320\262\320\276\320\276\320\261\321\211\320\265. \320\241\321\207\320\270\321\202\320\260\320\265\321\202\321\201\321\217, \321\207\321\202\320\276 \320\276\320\275 \342\200\234\321\201\320\276\320\261\320\270\321\200\320\260\320\265\321\202 \320\276\320\261\321\200\320\260\320\267\321\213\342\200\235 \320\264\320\273\321\217 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260. </span></p></body></html>", nullptr));
        pushButton_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Bestiary), QCoreApplication::translate("SelectCharacterWindow", "Bestiary", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("SelectCharacterWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">1.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\213\320\273\321\214\320\275\320\270\320\272</span></h3>\n"
"<p style="
                        "\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\276\320\273\321\203\320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\260\321\217 \321\201\321\203\321\211\320\275\320\276\321\201\321\202\321\214 \320\270\320\267 \321\204\320\270\320\276\320\273\320\265\321\202\320\276\320\262\320\276-\321\201\320\265\321\200\320\276\320\271 \320\277\321\213\320\273\320\270. \320\224\320\262\320\270\320\263\320\260\320\265\321\202\321\201\321\217 \320\277\320\276 \320\262\320\265\320\275\321\202\320\270\320\273\321\217\321\206\320\270\321\217\320\274, \320\275\320\265\321\203\320\273\320\276\320\262\320\270\320\274. \320\222\321\213\320\267\321\213\320\262\320"
                        "\260\320\265\321\202 \321\202\321\200\320\265\320\262\320\276\320\266\320\275\321\213\320\265 \321\210\321\221\320\277\320\276\321\202\321\213 \320\270 \320\277\320\276\321\202\320\265\321\200\321\216 \320\276\321\200\320\270\320\265\320\275\321\202\320\260\321\206\320\270\320\270. \320\241\320\262\321\217\320\267\320\260\320\275 \321\201 \320\274\320\265\321\201\321\202\320\260\320\274\320\270 \320\262\321\213\321\201\320\276\320\272\320\276\320\271 \321\201\320\274\320\265\321\200\321\202\320\275\320\276\321\201\321\202\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">2.\302\240</span></h3>\n"
"<h3 style=\" m"
                        "argin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\234\320\260\321\201\320\276\321\207\320\275\320\270\320\272\320\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\244\320\270\320\263\321\203\321\200\321\213 \320\262 \321\202\320\265\320\260\321\202\321\200\320\260\320\273\321\214\320\275\321\213\321\205 \320\274\320\260\321\201\320\272\320\260\321\205. \320\245\320\276\320\264\321\217\321\202 \320\275\320\276\321\207\320\260\320\274\320\270 \320\277\320\276 \320\267\320\260\320\277\320\265\321"
                        "\207\320\260\321\202\320\260\320\275\320\275\321\213\320\274 \321\215\321\202\320\260\320\266\320\260\320\274. \320\232\321\202\320\276 \320\262\321\201\321\202\321\203\320\277\320\260\320\265\321\202 \320\262 \320\272\320\276\320\275\321\202\320\260\320\272\321\202 \342\200\224 \321\200\320\270\321\201\320\272\321\203\320\265\321\202 \320\277\320\276\321\202\320\265\321\200\321\217\321\202\321\214 \320\273\320\270\321\207\320\275\320\276\321\201\321\202\321\214. \320\237\320\276\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\277\320\276\321\205\320\276\320\266\320\265 \320\275\320\260 \321\200\320\270\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265 \321\202\320\260\320\275\321\206\321\213.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">3.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\245\320\276\320\264\321\217\321\207\320\260\321\217 \320\232\320\275\320\270\320\263\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\262 \320\272\320\262\320\260\321\200"
                        "\321\202\320\270\321\200\320\260\321\205, \320\270\321\201\321\207\320\265\320\267\320\260\320\265\321\202 \321\207\320\265\321\200\320\265\320\267 \320\264\320\265\320\275\321\214. \320\232\321\202\320\276 \321\207\320\270\321\202\320\260\320\265\321\202 \342\200\224 \320\277\321\200\320\276\320\277\320\260\320\264\320\260\320\265\321\202. \320\241\321\202\321\200\320\260\320\275\320\270\321\206\321\213 \320\267\320\260\320\277\320\276\320\273\320\275\321\217\321\216\321\202\321\201\321\217 \320\270\320\274\320\265\320\275\320\260\320\274\320\270 \320\266\320\265\321\200\321\202\320\262. \320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276, \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\276\320\274 \320\272\320\260\320\272 \320\273\320\276\320\262\321\203\321\210\320\272\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">4.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\201\320\265\320\262\320\264\320\276\320\264\320\262\320\265\321\200\320\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFon"
                        "t'; font-size:13pt;\">\320\224\320\262\320\265\321\200\320\270, \320\262\320\265\320\264\321\203\321\211\320\270\320\265 \320\272\320\260\320\266\320\264\321\213\320\271 \321\200\320\260\320\267 \320\262 \321\200\320\260\320\267\320\275\321\213\320\265 \320\274\320\265\321\201\321\202\320\260: \320\276\321\202 \320\277\321\203\321\201\321\202\321\213\321\205 \320\272\320\276\321\200\320\270\320\264\320\276\321\200\320\276\320\262 \320\264\320\276 \321\207\320\265\321\200\320\275\320\270\320\273\321\214\320\275\320\276\320\271 \321\202\320\265\320\274\320\275\320\276\321\202\321\213. \320\230\320\275\320\276\320\263\320\264\320\260 \342\200\234\320\266\320\270\320\262\321\213\320\265\342\200\235, \320\274\320\276\320\263\321\203\321\202 \342\200\234\320\267\320\260\320\272\321\200\321\213\321\202\321\214\342\200\235 \320\267\320\260 \320\277\321\203\321\202\320\275\320\270\320\272\320\276\320\274 \320\277\321\203\321\202\321\214 \320\276\320\261\321\200\320\260\321\202\320\275\320\276.</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">5.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\241\320\265\321\202\320\265\320\262\320\276\320\271</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\241\321\203\321\211\320\265\321\201\321\202\320\262\320\276, \321\201\321\200\320\276\321\201\321\210\320\265\320\265\321\201\321\217 \321\201 \321\201\320\270\321\201\321\202\320\265\320\274\320\276\320\271 \320\262\320\265\321\211\320\260\320\275\320\270\321\217. \320\232\320\276\320\275\321\202\321\200\320\276\320\273\320\270\321\200\321\203\320\265\321\202 \320\264\320\270\320\275\320\260\320\274\320\270\320\272\320\270, \321\201\320\262\320\265\321\202, \321\201\320\270\320\263\320\275\320\260\320\273 \321\202\321\200\320\265\320\262\320\276\320\263\320\270. \320\234\320\276\320\266\320\265\321\202 \320\263\320\276\320\262\320\276\321\200\320\270\321\202\321\214 \320\263\320\276\320\273\320\276\321\201\320\276\320\274 \321\203\320\274\320\265\321\200\321\210\320\270\321\205. \320\237\321\200\320\265\320\264\320\277\320\276\320\273\320\276\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320"
                        "\276, \321\215\321\202\320\276 \320\276\321\201\321\202\320\260\321\202\320\276\320\272 \321\201\320\276\320\267\320\275\320\260\320\275\320\270\321\217 \320\261\321\213\320\262\321\210\320\265\320\263\320\276 \320\264\320\270\320\272\321\202\320\276\321\200\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">6.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\200\320\276\320\266\320\276\321\200\320\273\320\270\320\262\321"
                        "\213\320\271 \320\243\320\267\320\265\320\273</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\220\320\275\320\276\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\321\200\321\203\320\261\320\260 \320\270\320\273\320\270 \321\203\320\267\320\265\320\273 \320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\271, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\267\320\260\321\202\321\217\320\263\320\270\320\262\320\260\320\265\321\202 \320\262\321\201\321\221 \320\266\320\270\320\262\320\276\320\265. \320\237\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217"
                        " \320\262 \321\202\320\265\321\205\320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\270\321\217\321\205. \320\237\320\270\321\211\320\270\321\202, \321\201\321\202\320\276\320\275\320\265\321\202, \320\261\321\203\320\264\321\202\320\276 \320\266\320\270\320\262\320\260\321\217. \320\234\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\277\320\260\321\200\320\260\320\267\320\270\321\202\320\276\320\274 \320\275\320\260 \321\202\320\265\320\273\320\265 \320\223\320\270\320\263\320\260\321\205\321\200\321\203\321\211\321\221\320\262\320\272\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight"
                        ":700;\">7.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\242\320\265\320\275\321\214 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\241\320\270\320\273\321\203\321\215\321\202 \320\277\320\276\320\263\320\270\320\261\321\210\320\265\320\263\320\276, \320\277\320\276\320\262\321\202\320\276\321\200\321\217\321\216\321\211\320\270\320\271 \320\277\320\276\321\201\320\273\320\265\320\264"
                        "\320\275\320\270\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217. \320\235\320\265\320\276\320\277\320\260\321\201\320\265\320\275 \320\275\320\260\320\277\321\200\321\217\320\274\321\203\321\216, \320\275\320\276 \320\274\320\276\320\266\320\265\321\202 \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\277\321\201\320\270\321\205\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\201\321\200\321\213\320\262. \320\230\320\275\320\276\320\263\320\264\320\260 \320\276\320\275\320\270 \342\200\234\321\201\320\274\320\276\321\202\321\200\321\217\321\202 \320\262 \320\276\321\202\320\262\320\265\321\202\342\200\235\342\200\246</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">8.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\320\260\320\274\321\217\321\202\320\275\321\213\320\271 \320\255\321\204\320\270\321\200</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\242\320\265\320\273\320\265\320\262\320\270\320\267\320\270\320\276\320\275\320\275\321\213\320\265 \320\277\320\265\321\200\320\265\320\264"
                        "\320\260\321\207\320\270 \321\201 \321\203\321\207\320\260\321\201\321\202\320\270\320\265\320\274 \320\264\320\260\320\262\320\275\320\276 \321\203\320\274\320\265\321\200\321\210\320\270\321\205. \320\237\320\276\321\217\320\262\320\273\321\217\321\216\321\202\321\201\321\217 \320\261\320\265\320\267 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320\272\320\260 \321\201\320\270\320\263\320\275\320\260\320\273\320\260. \320\241\320\273\321\203\321\210\320\260\320\275\320\270\320\265 \320\274\320\276\320\266\320\265\321\202 \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\277\320\276\321\202\320\265\321\200\321\216 \320\277\320\260\320\274\321\217\321\202\320\270, \320\263\320\260\320\273\320\273\321\216\321\206\320\270\320\275\320\260\321\206\320\270\320\270, \321\201\320\276\320\274\320\275\320\260\320\274\320\261\321\203\320\273\320\270\320\267\320\274.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">9.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\236\321\202\321\200\320\260\320\266\320\260\321\202\320\265\320\273\321\214</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIF"
                        "ont'; font-size:13pt;\">\320\241\320\276\320\267\320\264\320\260\321\221\321\202 \320\264\320\262\320\276\320\271\320\275\320\270\320\272\320\260 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260, \320\276\320\261\321\213\321\207\320\275\320\276 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200\320\260. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \321\200\320\265\321\207\321\214 \320\270 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217, \320\275\320\276 \321\201 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\274 \320\267\320\260\320\277\320\276\320\267\320\264\320\260\320\275\320\270\320\265\320\274. \320\230\320\275\320\276\320\263\320\264\320\260 \320\277\321\213\321\202\320\260\320\265\321\202\321\201\321\217 \342\200\234\320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214\342\200\235 \320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273.</span></p>\n"
"<p style=\"-qt-parag"
                        "raph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">10.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\250\320\260\321\200\320\272\320\260\321\216\321\211\320\270\320\271</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\235\320\265\320\262\320\270\320\264\320\270\320\274\321\213\320\271 \321\205\320\270\321\211\320\275\320\270\320\272, \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\271 \321\202\320\276\320\273\321\214\320\272\320\276 \320\272\320\260\320\272 \320\267\320\262\321\203\320\272: \321\210\320\260\320\263\320\270, \321\201\320\272\321\200\320\265\320\266\320\265\321\202. \320\237\321\200\320\265\321\201\320\273\320\265\320\264\321\203\320\265\321\202 \320\276\320\264\320\270\320\275\320\276\321\207\320\265\320\272. \320\242\320\265, \320\272\321\202\320\276 \321\201\320\273\321\213\321\210\320\260\320\273 \320\265\320\263\320\276 \320\261\320\273\320\270\320\267\320\272\320\276, \320\270\321\201\321\207\320\265\320\267\320\260\321\216\321\202. \320\222\321\201\321\202\321\200\320\265\321\207\320\260\320\265\321\202\321\201\321\217 \321\207\320\260\321\211"
                        "\320\265 \320\262 \321\201\321\202\320\260\321\200\321\213\321\205 \320\273\320\265\321\201\321\202\320\275\320\270\321\207\320\275\321\213\321\205 \320\272\320\273\320\265\321\202\320\272\320\260\321\205.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">11.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\320\260\321\203\321\202\320\270\320\275\320\260 \320\230\320\274\320\265\320\275</span></h3>\n"
"<p style=\" margin-top:12px; m"
                        "argin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\234\320\260\320\273\320\276\320\267\320\260\320\274\320\265\321\202\320\275\320\260\321\217 \321\201\320\265\321\202\321\214 \320\275\320\260 \320\277\320\276\321\202\320\276\320\273\320\272\320\260\321\205 \320\272\320\262\320\260\321\200\321\202\320\270\321\200. \320\222 \320\275\320\265\320\271 \342\200\224 \320\262\320\277\320\273\320\265\321\202\321\221\320\275\320\275\321\213\320\265 \320\261\321\203\320\274\320\260\320\266\320\272\320\270 \321\201 \321\207\321\203\320\266\320\270\320\274\320\270 \320\270\320\274\320\265\320\275\320\260\320\274\320\270. \320\225\321\201\320\273\320\270 \320\267\320\260\320\264\320\265\320\275\320\265\321"
                        "\210\321\214 \342\200\224 \320\274\320\276\320\266\320\265\321\210\321\214 \320\267\320\260\320\261\321\213\321\202\321\214 \321\201\320\262\320\276\321\221 \320\270\320\274\321\217. \320\230 \321\207\320\265\320\274 \320\264\320\276\320\273\321\214\321\210\320\265 \320\267\320\260\320\261\321\213\321\202\320\276 \342\200\224 \321\202\320\265\320\274 \321\201\320\270\320\273\321\214\320\275\320\265\320\265 \320\277\321\200\320\270\320\262\321\217\320\267\320\260\320\275 \320\272 \320\223\320\270\320\263\320\260\321\205\321\200\321\203\321\211\321\221\320\262\320\272\320\265.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700"
                        ";\">12.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\213\320\273\321\214\320\275\321\213\320\265 \320\223\320\273\320\260\320\267\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\260\321\200\321\217\321\211\320\270\320\265 \320\263\320\273\320\260\320\267\320\275\321\213\320\265 \321\217\320\261\320\273\320\276\320\272\320\270 \320\262 \320\277\321\213\320\273\320\270. \320\241\320\273\320\265\320\264\321\217\321\202 \320\267\320\260"
                        " \320\266\320\270\320\273\321\214\321\206\320\260\320\274\320\270, \320\276\321\201\321\202\320\260\321\216\321\202\321\201\321\217 \320\275\320\265\320\277\320\276\320\264\320\262\320\270\320\266\320\275\321\213\320\274\320\270. \320\230\320\275\320\276\320\263\320\264\320\260 \320\274\320\276\321\200\320\263\320\260\321\216\321\202. \320\232\321\202\320\276 \320\262\321\201\321\202\321\200\320\265\321\202\320\270\321\202\321\201\321\217 \320\262\320\267\320\263\320\273\321\217\320\264\320\276\320\274 \342\200\224 \320\277\320\276\321\202\320\276\320\274 \320\275\320\265 \320\274\320\276\320\266\320\265\321\202 \321\201\320\277\320\260\321\202\321\214, \321\201\320\273\321\213\321\210\320\270\321\202 \342\200\234\320\275\320\260\320\261\320\273\321\216\320\264\320\265\320\275\320\270\320\265\342\200\235.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13p"
                        "t;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">13.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\240\320\265\321\207\320\265\320\262\320\276\320\271 \320\237\320\265\321\202\320\273\320\270\321\202\320\265\320\273\321\214</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320"
                        "\220\320\275\320\276\320\274\320\260\320\273\320\270\321\217 \320\262 \320\263\321\200\320\276\320\274\320\272\320\276\320\263\320\276\320\262\320\276\321\200\320\270\321\202\320\265\320\273\321\217\321\205. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \321\203\321\201\320\273\321\213\321\210\320\260\320\275\320\275\321\213\320\265 \321\204\321\200\320\260\320\267\321\213, \320\275\320\276 \321\201 \320\270\321\201\320\272\320\260\320\266\320\265\320\275\320\270\320\265\320\274 \321\201\320\274\321\213\321\201\320\273\320\260. \320\247\320\265\320\274 \321\207\320\260\321\211\320\265 \321\201\320\273\321\213\321\210\320\270\321\210\321\214, \321\202\320\265\320\274 \320\261\320\276\320\273\321\214\321\210\320\265 \320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320\262\320\276\321\201\320\277\321\200\320\270\321\217\321\202\320\270\320\265 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:e"
                        "mpty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">14.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\223\320\276\320\273\320\276\320\264\320\275\320\260\321\217 \320\237\320\273\321\221\320\275\320\272\320\260</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\244\321\200\320\260\320\263\320\274\320\265\320\275\321\202 \320\277\320\273\321\221\320\275\320\272\320\270 (\320\272\320\270\320\275\320\276 \320\270\320\273\320\270 \320\260\321\203\320\264\320\270\320\276), \320\277\320\276\321\217\320\262\320\273\321\217\321\216\321\211\320\270\320\271\321\201\321\217 \320\262 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\260\321\205. \320\225\321\201\320\273\320\270 \320\262\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \342\200\224 \320\262\321\213\320\267\321\213\320\262\320\260\320\265\321\202 \320\264\320\265\320\266\320\260\320\262\321\216, \320\267\320\260\321\202\320\265\320\274 \320\277\320\276\321\202\320\265\321\200\321\216 \321\207\321\203\320\262\321\201\321\202\320\262, \320\267\320\260\321\202\320\265\320\274 \342\200\234\320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276\320"
                        "\262\320\265\321\200\321\205 \321\200\320\260\320\267\321\203\320\274\320\260\342\200\235. \320\237\320\276\321\201\320\273\320\265 \321\215\321\202\320\276\320\263\320\276 \342\200\224 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266 \320\274\320\276\320\266\320\265\321\202 \320\275\320\260\321\207\320\260\321\202\321\214 \320\262\320\265\321\201\321\202\320\270 \321\201\320\265\320\261\321\217 \320\272\320\260\320\272 \320\272\321\202\320\276-\321\202\320\276 \320\264\321\200\321\203\320\263\320\276\320\271.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">15.\302\240</span></h3>\n"
"<h3 style=\" margi"
                        "n-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\235\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\233\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\244\320\270\320\263\321\203\321\200\320\260 \320\262 \321\203\320\275\320\270\321\204\320\276\321\200\320\274\320\265, \320\275\320\265 \320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320"
                        "\262\320\260\320\275\320\275\320\260\321\217 \320\275\320\270 \320\262 \320\276\320\264\320\275\320\276\320\274 \320\276\321\202\321\200\321\217\320\264\320\265. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \320\263\320\276\320\273\320\276\321\201 \320\267\320\275\320\260\320\272\320\276\320\274\320\276\320\263\320\276, \320\275\320\276 \321\201 \320\276\321\210\320\270\320\261\320\272\320\260\320\274\320\270 \320\262 \321\200\320\265\321\207\320\270. \320\222\321\201\320\265\320\263\320\264\320\260 \320\277\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\200\321\217\320\264\320\276\320\274 \321\201 \320\274\320\265\321\201\321\202\320\260\320\274\320\270 \320\260\320\272\321\202\320\270\320\262\320\275\320\276\320\263\320\276 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">16.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\243\320\273\321\213\320\261\320\260\321\216\321\211\320\270\320\271\321\201\321\217 \320\243\320\263\320\276\320\273</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family"
                        ":'.AppleSystemUIFont'; font-size:13pt;\">\320\236\320\264\320\270\320\275 \320\270\320\267 \321\203\320\263\320\273\320\276\320\262 \320\262 \321\201\321\202\320\260\321\200\320\276\320\271 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\265 \342\200\234\321\203\320\273\321\213\320\261\320\260\320\265\321\202\321\201\321\217\342\200\235 \342\200\224 \321\210\321\202\321\203\320\272\320\260\321\202\321\203\321\200\320\272\320\260 \320\276\320\261\321\200\320\260\320\267\321\203\320\265\321\202 \320\277\320\276\320\264\320\276\320\261\320\270\320\265 \321\200\321\202\320\260. \320\230\320\275\320\276\320\263\320\264\320\260 \321\210\320\265\320\277\321\207\320\265\321\202 \321\201\320\276\320\262\320\265\321\202\321\213. \320\241\320\275\320\260\321\207\320\260\320\273\320\260 \320\277\320\276\320\274\320\276\320\263\320\260\320\265\321\202\342\200\246 \320\277\320\276\321\202\320\276\320\274 \321\202\321\200\320\265\320\261\321\203\320\265\321\202. \320\242\320\265, \320\272\321\202\320\276 \321\201"
                        "\320\273\321\203\321\210\320\260\320\265\321\202 \342\200\224 \321\202\320\265\321\200\321\217\321\216\321\202 \321\201\320\262\321\217\320\267\321\214 \321\201 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214\321\216.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">17.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\234\320\265\321\205\320\260\320\275\320\270\320\272-\320\237\320\260\321\200\320\260\320"
                        "\267\320\270\321\202</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\220\320\275\320\276\320\274\320\260\320\273\320\270\321\217 \320\262 \320\276\320\261\321\200\320\260\320\267\320\265 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276. \320\237\321\213\321\202\320\260\320\265\321\202\321\201\321\217 \321\207\320\270\320\275\320\270\321\202\321\214 \321\201\320\273\320\276\320\274\320\260\320\275\320\275\321\213\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\213, \320\275\320\276 \320\264\320\265\320\273\320\260\320\265\321\202 \321\215\321\202\320\276 \342\200\234\320\275\320\265\320\277\321\200\320\260\320"
                        "\262\320\270\320\273\321\214\320\275\320\276\342\200\235: \321\200\320\276\320\267\320\265\321\202\320\272\320\270 \320\275\320\260\321\207\320\270\320\275\320\260\321\216\321\202 \320\277\320\265\321\202\321\214, \321\207\320\260\320\271\320\275\320\270\320\272\320\270 \342\200\224 \320\263\320\276\320\262\320\276\321\200\320\270\321\202\321\214. \320\237\320\276\320\267\320\266\320\265 \320\262\321\201\321\221 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\276 \342\200\234\320\277\320\276\320\264\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\321\202\321\201\321\217\342\200\235 \320\277\320\276\320\264 \320\265\320\263\320\276 \320\273\320\276\320\263\320\270\320\272\321\203.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin"
                        "-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">18.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\227\320\260\320\277\320\265\321\200\321\202\321\213\320\265 \320\237\320\265\321\201\320\275\320\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\230\320\267 \321\201\321\202\320\260\321\200\321\213\321\205 \320\272\320\260\321\201\321"
                        "\201\320\265\321\202 \320\270 \321\200\320\260\320\264\320\270\320\276\320\277\321\200\320\270\321\221\320\274\320\275\320\270\320\272\320\276\320\262 \320\264\320\276\320\275\320\276\321\201\320\270\321\202\321\201\321\217 \320\276\320\264\320\275\320\260 \320\270 \321\202\320\260 \320\266\320\265 \320\274\320\265\320\273\320\276\320\264\320\270\321\217. \320\242\320\265, \320\272\321\202\320\276 \320\265\321\221 \320\275\320\260\320\277\320\265\320\262\320\260\320\265\321\202 \342\200\224 \320\275\320\265 \320\274\320\276\320\263\321\203\321\202 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214\321\201\321\217. \320\247\320\265\321\200\320\265\320\267 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\264\320\275\320\265\320\271 \342\200\224 \320\270\321\201\321\207\320\265\320\267\320\260\321\216\321\202. \320\235\320\260 \321\201\321\202\320\265\320\275\320\265 \320\276\321\201\321\202\320\260\321\221\321\202\321\201\321\217 \342\200\234\320\267\320"
                        "\260\320\277\320\270\321\201\321\214\342\200\235 \320\270\321\205 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\277\320\265\321\201\320\275\320\270.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">19.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\320\265\320\277\320\265\320\273\321\214\320\275\320\270\320\272</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\236\320\261\321\200\320\260\320\267 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260, \320\262\321\213\320\273\320\265\320\277\320\273\320\265\320\275\320\275\321\213\320\271 \320\270\320\267 \320\277\320\265\320\277\320\273\320\260 \320\270 \320\277\321\213\320\273\320\270. \320\222\320\276\320\267\320\275\320\270\320\272\320\260\320\265\321\202 \320\277\321\200\320\270 \321\201\320\276\320\266\320\266\320\265\320\275\320\270\320\270 \320\276\320\264\320\265\320\266\320\264\321\213, \320\277\320\270\321\201\320\265\320\274 \320\270\320\273\320\270 \321\204\320\276\321\202\320\276\320\263\321\200\320\260\321\204\320\270\320\271 \320\277\320\276\320\263\320\270\320\261"
                        "\321\210\320\270\321\205. \320\241\321\202\320\276\320\270\321\202 \320\275\320\265\320\277\320\276\320\264\320\262\320\270\320\266\320\275\320\276, \320\270\320\275\320\276\320\263\320\264\320\260 \320\277\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \320\266\320\265\321\201\321\202\321\213 \321\203\321\210\320\265\320\264\321\210\320\270\321\205.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">20.\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-si"
                        "ze:13pt; font-weight:700;\">\320\232\320\276\320\273\320\273\320\265\320\272\321\202\320\276\321\200 \320\241\320\275\320\276\320\262</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">\320\237\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\275\320\276\321\207\321\214\321\216 \320\262 \320\276\320\261\321\200\320\260\320\267\320\265 \320\267\320\275\320\260\320\272\320\276\320\274\320\276\320\263\320\276. \320\237\321\200\320\276\321\201\320\270\321\202 \342\200\234\320\277\320\276\320\264\320\265\320\273\320\270\321\202\321\214\321\201\321\217 \321\201\320\275\320\276\320\274\342\200\235. \320\242\320\265, \320\272\321\202"
                        "\320\276 \321\201\320\276\320\263\320\273\320\260\321\210\320\260\320\265\321\202\321\201\321\217 \342\200\224 \320\261\320\276\320\273\321\214\321\210\320\265 \320\275\320\265 \320\262\320\270\320\264\321\217\321\202 \321\201\320\275\320\276\320\262 \320\262\320\276\320\276\320\261\321\211\320\265. \320\241\321\207\320\270\321\202\320\260\320\265\321\202\321\201\321\217, \321\207\321\202\320\276 \320\276\320\275 \342\200\234\321\201\320\276\320\261\320\270\321\200\320\260\320\265\321\202 \320\276\320\261\321\200\320\260\320\267\321\213\342\200\235 \320\264\320\273\321\217 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\260. </span></p></body></html>", nullptr));
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Location), QCoreApplication::translate("SelectCharacterWindow", "Location", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("SelectCharacterWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\215\275\357\270\217\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\241\321\202\320\276\320\273\320\276\320\262\320\260"
                        "\321\217 \342\200\234\320\243 \320\237\321\213\320\273\321\214\320\275\320\270\320\272\320\260\342\200\235</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\241\320\265\320\274\321\221\320\275 \342\200\234\320\241\320\272\321\200\320\270\320\277\321\203\321\207\320\270\320\271\342\200\235 \320\237\320\265\321\202\321\200\320\276\320\262\320\270\321\207</span> \342\200\224 \321\201\321\202\320\260\321\200\320\270\320\272, \320\277\320\265\321\200\320\265\320\266\320\270\320\262\321\210\320\270\320\271 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200\320\276\320\262; \320\263\320\276\320\262\320\276\321\200\320\270\321\202 \321"
                        "\210\321\221\320\277\320\276\321\202\320\276\320\274 \320\270 \320\267\320\260\320\263\320\260\320\264\320\272\320\260\320\274\320\270.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\233\320\270\320\264\320\270\321\217 \342\200\234\320\233\320\270\320\264\320\260-\320\236\321\200\320\273\320\270\321\206\320\260\342\200\235 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\275\320\260</span> \342\200\224 \320\261\321\213\320\262\321\210\320\270\320\271 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200, \321\202\320\265\320\277\320\265\321\200\321\214 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\270\321\200\321\203\320\265\321\202 \320\275\320\265\320\273\320\265\320\263\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\320\274\320\265\320\275; \320\262\320\273"
                        "\320\260\321\201\321\202\320\275\320\260\321\217 \320\270 \320\275\320\260\320\261\320\273\321\216\320\264\320\260\321\202\320\265\320\273\321\214\320\275\320\260\321\217.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\237\320\260\321\210\320\260 \342\200\234\320\237\321\203\321\201\321\202\320\276\320\267\320\262\320\276\320\275\342\200\235 \320\224\321\200\320\276\320\263\320\260\320\275\320\276\320\262</span> \342\200\224 \320\261\320\276\320\273\321\202\320\273\320\270\320\262\321\213\320\271 \320\262\321\213\320\264\321\203\320\274\321\211\320\270\320\272, \320\267\320\275\320\260\320\265\321\202 \320\262\321\201\321\221 \320\277\321\200\320\276 \320\262\321\201\320\265\321\205.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\235\320\270\320\272\320\276\320\273\320\260\320\271 \342\200\234\320\242\320\270\321\205\320\270\320\271\342\200\235 \320\230\321\201\320\260\320\265\320\262</span> \342\200\224 \320\267\320\260\320\274\320\272\320\275\321\203\321\202\321\213\320\271 \320\261\321\213\320\262\321\210\320\270\320\271 \321\202\320\265\321\205\320\275\320\270\320\272, \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \320\267\320\275\320\260\320\265\321\202 \321\201\320\265\320\272\321\200\320\265\321\202\321\213 \320\261\320\273\320\276\320\272\320\260.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\242\321\221\321\202\321\217 \320\234\320\260\321\210\320\260</span> \342\200\224 \321\205\320\276\320\267\321\217\320\271\320\272\320\260 \321\201\321"
                        "\202\320\276\320\273\320\276\320\262\320\276\320\271, \320\263\321\200\320\276\320\274\320\272\320\260\321\217 \320\270 \320\275\320\260\320\262\321\217\320\267\321\207\320\270\320\262\320\260\321\217, \342\200\234\321\201\320\262\320\276\320\264\320\275\320\270\321\206\320\260\342\200\235 \320\270 \321\206\320\265\320\275\321\202\321\200 \321\201\320\273\321\203\321\205\320\276\320\262.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\224\247\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fam"
                        "ily:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\246\320\265\321\205 \342\204\22617</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\220\320\273\320\265\320\272\321\201\320\265\320\271 \342\200\234\320\241\321\202\320\260\321\200\321\213\320\271 \320\234\320\265\321\205\320\260\320\275\320\270\320\272\342\200\235 \320\232\320\276\321\207\320\265\321\200\320\263\320\270\320\275</span> \342\200\224 \320\275\320\260\321\201\321\202\320\260\320\262\320\275\320\270\320\272 \321\200\320\260\320\261\320\276\321\207\320\270\321\205, \320\274\320\260\321\201\321\202\320\265\321\200 \321\201\321\202\320\260\320\275\320\272\320\276\320\262, \321\205\320\260\321\200\320\270\320\267\320\274\320\260\321\202\320"
                        "\270\321\207\320\275\321\213\320\271 \321\201\321\202\320\260\321\200\320\270\320\272.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\230\321\200\320\270\320\275\320\260 \342\200\234\320\241\320\262\320\260\321\200\320\272\320\260\342\200\235 \320\242\320\270\321\205\320\276\320\275\320\276\320\262\320\260</span> \342\200\224 \320\263\321\200\321\203\320\261\320\260\321\217 \320\270 \320\270\321\200\320\276\320\275\320\270\321\207\320\275\320\260\321\217 \321\201\320\262\320\260\321\200\321\211\320\270\321\206\320\260, \321\203\320\262\320\260\320\266\320\260\320\265\320\274\320\260\321\217 \320\267\320\260 \320\277\321\200\320\276\321\204\320\265\321\201\321\201\320\270\320\276\320\275\320\260\320\273\320\270\320\267\320\274.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; ma"
                        "rgin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\223\321\200\320\270\320\263\320\276\321\200\320\270\320\271 \342\200\234\320\250\320\270\320\273\320\276\342\200\235 \320\232\320\260\321\200\320\277\320\265\320\275\320\272\320\276</span> \342\200\224 \320\275\320\265\321\200\320\262\320\275\321\213\320\271 \320\270 \321\203\320\274\320\275\321\213\320\271 \321\202\320\265\321\205\320\275\320\270\320\272, \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \321\201\320\262\321\217\320\267\320\260\320\275 \321\201 \320\277\320\276\320\264\320\277\320\276\320\273\321\214\320\265\320\274.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\222\320\260\320\273\320\265\320\275\321\202\320\270\320\275\320\260 \342\200\234\320\234\320\260\320\274"
                        "\320\260 \320\222\320\260\320\273\321\217\342\200\235 \320\220\320\275\320\264\321\200\320\265\320\265\320\262\320\260</span> \342\200\224 \320\264\320\276\320\261\321\200\320\260\321\217 \320\270 \320\267\320\260\320\261\320\276\321\202\320\273\320\270\320\262\320\260\321\217, \320\261\321\213\320\262\321\210\320\260\321\217 \320\274\320\265\320\264\321\201\320\265\321\201\321\202\321\200\320\260, \320\277\320\276\320\274\320\276\320\263\320\260\320\265\321\202 \320\262\321\201\320\265\320\274.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\244\321\221\320\264\320\276\321\200 \342\200\234\320\224\320\276\320\272\342\200\235 \320\232\321\200\321\203\320\263\320\273\320\276\320\262</span> \342\200\224 \320\261\321\213\320\262\321\210\320\270\320\271 \320\262\321\200\320\260\321\207, \342\200\234\320\273\320\265\321\207\320\270\321"
                        "\202\342\200\235 \321\201\321\202\320\260\320\275\320\272\320\270 \320\272\320\260\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262, \321\201\320\273\320\265\320\263\320\272\320\260 \320\261\320\265\320\267\321\203\320\274\320\265\320\275.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\247\252\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\235\320\230\320\230 \342\200\234\320\230\321\201\321\201"
                        "\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 \320\277\321\213\320\273\320\270\342\200\235</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\222\320\273\320\260\320\264\320\270\320\274\320\270\321\200 \342\200\234\320\237\321\213\320\273\320\265\320\262\320\270\320\272\342\200\235 \320\241\320\265\321\200\320\265\320\261\321\200\320\276\320\262</span> \342\200\224 \320\277\320\276\320\266\320\270\320\273\320\276\320\271 \321\203\321\207\321\221\320\275\321\213\320\271, \320\276\320\264\320\265\321\200\320\266\320\270\320\274 \320\277\321\213\320\273\321\214\321\216, \321\200\320\260\321\201\321\201\320\265\321\217\320\275\320\275\321\213\320\271 \320\270 \321\203\320\274\320\275\321\213"
                        "\320\271.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\223\320\260\320\273\320\270\320\275\320\260 \342\200\234\320\250\321\203\320\274\320\275\320\260\321\217\342\200\235 \320\232\320\276\320\267\320\273\320\276\320\262\320\260</span> \342\200\224 \320\261\321\213\321\201\321\202\321\200\320\260\321\217, \320\263\320\265\320\275\320\270\320\260\320\273\321\214\320\275\320\260\321\217, \320\275\320\276 \320\277\321\201\320\270\321\205\320\270\321\207\320\265\321\201\320\272\320\270 \320\275\320\265\321\201\321\202\320\260\320\261\320\270\320\273\321\214\320\275\320\260\321\217 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\270\321\206\320\260.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:1"
                        "2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\220\320\275\320\264\321\200\320\265\320\271 \342\200\234\320\235\320\265\320\274\320\276\320\271\342\200\235 \320\230\320\273\321\214\320\270\320\275</span> \342\200\224 \320\274\320\276\320\273\321\207\320\260\320\273\320\270\320\262\321\213\320\271 \320\273\320\260\320\261\320\276\321\200\320\260\320\275\321\202 \321\201 \321\202\321\217\320\266\321\221\320\273\321\213\320\274 \320\277\321\200\320\276\321\210\320\273\321\213\320\274, \321\205\321\200\320\260\320\275\320\270\321\202 \321\202\320\260\320\271\320\275\321\203.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\222\320\270\320\272\321\202\320\276\321\200 \342\200\234\320\233\320\276\320\262\320\272\320\260\321\207\342\200\235 \320\241\320\260\320\274\321"
                        "\201\320\276\320\275\320\276\320\262</span> \342\200\224 \321\204\320\270\320\267\320\270\320\272-\321\201\320\260\321\200\320\272\320\260\321\201\321\202\320\270\320\272, \320\274\320\260\321\201\321\202\320\265\321\200 \320\260\320\277\320\277\320\260\321\200\320\260\321\202\320\276\320\262, \320\273\321\216\320\261\320\270\321\202 \320\277\320\276\320\264\321\210\321\203\321\207\320\270\320\262\320\260\321\202\321\214.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\236\320\273\321\214\320\263\320\260 \342\200\234\320\247\321\221\321\200\320\275\320\260\321\217 \320\240\321\203\320\272\320\260\342\200\235 \320\232\320\273\320\270\320\274\320\276\320\262\320\260</span> \342\200\224 \320\261\320\265\320\267\321\215\320\274\320\276\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\321\201\320"
                        "\270\321\205\320\276\320\273\320\276\320\263\320\270\320\275\321\217, \320\275\320\276\321\201\320\270\321\202 \321\207\321\221\321\200\320\275\321\213\320\265 \320\277\320\265\321\200\321\207\320\260\321\202\320\272\320\270, \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\276\320\277\320\260\321\201\320\275\320\276\320\271.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\217\245\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-si"
                        "ze:13pt; font-weight:700;\">\320\234\320\265\320\264\320\277\321\203\320\275\320\272\321\202 \342\200\234\320\227\320\264\321\200\320\260\320\262\320\270\320\265\342\200\235</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\225\320\273\320\270\320\267\320\260\320\262\320\265\321\202\320\260 \342\200\234\320\242\321\221\321\202\321\217 \320\233\320\270\320\267\320\260\342\200\235 \320\232\320\276\320\273\320\276\321\201\320\276\320\262\320\260</span> \342\200\224 \320\263\320\273\320\260\320\262\320\262\321\200\320\260\321\207, \321\201\321\202\321\200\320\276\320\263\320\260\321\217 \320\270 \321\201\321\203\321\200\320\276\320\262\320\260\321\217, \320\277\320\265\321\200\320\265\320\266\320\270\320\273\320\260 "
                        "\320\273\320\270\321\207\320\275\321\203\321\216 \321\202\321\200\320\260\320\263\320\265\320\264\320\270\321\216.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\232\320\270\321\200\320\270\320\273\320\273 \342\200\234\320\232\320\276\321\201\321\202\320\276\320\277\321\200\320\260\320\262\342\200\235 \320\241\320\260\320\262\320\265\320\273\321\214\320\265\320\262</span> \342\200\224 \321\204\320\265\320\273\321\214\320\264\321\210\320\265\321\200 \321\201 \321\207\321\221\321\200\320\275\321\213\320\274 \321\216\320\274\320\276\321\200\320\276\320\274, \320\263\321\200\321\203\320\261\321\213\320\271, \320\275\320\276 \320\275\320\260\320\264\321\221\320\266\320\265\320\275.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\220\320\275\320\275\320\260 \342\200\234\320\250\320\265\320\277\321\202\321\203\320\275\321\214\321\217\342\200\235 \320\234\320\260\321\202\320\262\320\265\320\265\320\262\320\260</span> \342\200\224 \321\202\320\270\321\205\320\260\321\217, \320\267\320\260\320\263\320\260\320\264\320\276\321\207\320\275\320\260\321\217 \320\274\320\265\320\264\321\201\320\265\321\201\321\202\321\200\320\260, \320\263\320\276\320\262\320\276\321\200\320\270\321\202 \320\277\320\276\321\201\320\273\320\276\320\262\320\270\321\206\320\260\320\274\320\270, \320\261\321\203\320\264\321\202\320\276 \320\262\320\270\320\264\320\270\321\202 \321\201\320\262\320\265\321\200\321\205\321\212\320\265\321\201\321\202\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\234\320\270\321\205\320\260\320\270\320\273 \342\200\234\320\237\320\270\320\273\321\216\320\273\321\214\320\272\320\260\342\200\235 \320\241\320\276\320\272\320\276\320\273\320\276\320\262</span> \342\200\224 \320\262\320\265\321\201\321\221\320\273\321\213\320\271 \320\270 \320\264\320\276\320\261\321\200\321\213\320\271 \320\260\320\277\321\202\320\265\320\272\320\260\321\200\321\214, \320\273\321\216\320\261\320\270\321\202 \320\262\321\201\320\265\321\205 \320\273\320\265\321\207\320\270\321\202\321\214 \320\270 \321\210\321\203\321\202\320\270\321\202\321\214.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\244\321\221\320\264\320\276\321\200 \342\200\234\320\247\320\270\321\201\321\202\321\216\320\273\321\217\342\200\235 \320\221\320\276\321\200\320\276\320\264"
                        "\320\270\320\275</span> \342\200\224 \321\201\321\202\320\260\321\200\321\210\320\270\320\271 \320\274\320\265\320\264\320\261\321\200\320\260\321\202, \320\277\320\276\320\274\320\265\321\210\320\260\320\275 \320\275\320\260 \321\207\320\270\321\201\321\202\320\276\321\202\320\265, \320\261\321\213\320\262\321\210\320\270\320\271 \321\205\320\270\321\200\321\203\321\200\320\263.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\233\241\357\270\217\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font"
                        "-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\232\320\260\320\267\320\260\321\200\320\274\321\213 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200\320\276\320\262</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\230\320\262\320\260\320\275 \342\200\234\320\234\320\276\320\273\320\276\321\202\342\200\235 \320\232\320\260\321\200\321\202\320\260\321\210\320\276\320\262</span> \342\200\224 \320\272\320\276\320\274\320\260\320\275\320\264\320\270\321\200, \321\201\321\203\321\200\320\276\320\262\321\213\320\271 \320\262\320\265\321\202\320\265\321\200\320\260\320\275, \320\277\320\276\321\207\321\202\320\270 \320\273\320\265\320\263\320\265\320\275\320\264\320\260"
                        ", \320\276\320\261\320\273\320\260\320\264\320\260\320\265\321\202 \342\200\234\321\207\321\203\320\271\320\272\320\276\320\271\342\200\235 \320\275\320\260 \320\241\320\260\320\274\320\276\321\201\320\261\320\276\321\200.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\241\320\262\320\265\321\202\320\273\320\260\320\275\320\260 \342\200\234\320\240\320\265\320\277\321\202\320\270\320\273\320\270\321\217\342\200\235 \320\242\321\200\320\276\321\204\320\270\320\274\320\276\320\262\320\260</span> \342\200\224 \320\273\320\276\320\262\320\272\320\260\321\217 \321\200\320\260\320\267\320\262\320\265\320\264\321\207\320\270\321\206\320\260, \320\270\321\200\320\276\320\275\320\270\321\207\320\275\320\260 \320\270 \320\276\320\277\320\260\321\201\320\275\320\260.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\""
                        " style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\234\320\260\320\272\321\201\320\270\320\274 \342\200\234\320\232\321\203\320\273\320\260\320\272\342\200\235 \320\221\320\276\321\200\320\270\321\201\320\276\320\262</span> \342\200\224 \320\274\320\276\320\273\321\207\320\260\320\273\320\270\320\262\321\213\320\271 \320\270 \321\201\320\270\320\273\321\214\320\275\321\213\320\271, \321\201 \321\202\321\200\320\260\320\263\320\270\321\207\320\275\321\213\320\274 \320\277\321\200\320\276\321\210\320\273\321\213\320\274, \321\201\320\272\320\273\320\276\320\275\320\265\320\275 \320\272 \321\217\321\200\320\276\321\201\321\202\320\270.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\236\320\273\320\265\320\263 \342\200\234\320"
                        "\234\320\265\320\275\320\263\320\265\320\273\320\265\342\200\235 \320\237\320\265\321\207\320\265\320\275\320\265\320\262</span> \342\200\224 \320\277\320\276\320\273\320\265\320\262\320\276\320\271 \320\274\320\265\320\264\320\270\320\272, \320\264\320\276\320\261\321\200\321\213\320\271 \320\270 \321\201\320\277\320\276\320\272\320\276\320\271\320\275\321\213\320\271, \320\262\320\275\321\203\321\210\320\260\320\265\321\202 \320\264\320\276\320\262\320\265\321\200\320\270\320\265.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\220\320\275\321\202\320\276\320\275 \342\200\234\320\237\320\273\320\260\321\201\321\202\321\203\320\275\342\200\235 \320\233\320\260\320\277\321\202\320\265\320\262</span> \342\200\224 \320\261\320\265\321\201\321\210\321\203\320\274\320\275\321\213\320\271 \321\200\320\260\320\267\320\262\320\265\320\264"
                        "\321\207\320\270\320\272, \321\202\320\260\320\270\320\275\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \320\270 \320\277\321\203\320\263\320\260\321\216\321\211\320\270\320\271.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\342\232\231\357\270\217\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\242\320\265\321\205\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\277\320\276\320\274\320\265\321"
                        "\211\320\265\320\275\320\270\321\217</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\241\320\265\320\274\320\265\320\275 \342\200\234\320\242\320\265\320\275\320\265\320\262\320\276\320\271\342\200\235 \320\237\320\260\320\262\320\273\320\276\320\262</span> \342\200\224 \320\274\320\260\321\201\321\202\320\265\321\200 \320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\271, \320\274\320\276\320\273\321\207\320\260\320\273\320\270\320\262\321\213\320\271 \320\270 \320\277\320\276\321\207\321\202\320\270 \320\274\320\270\321\201\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\202\320\265\321\205\320\275\320\270\320\272, \342\200\234\320\270\321\201\321"
                        "\207\320\265\320\267\320\260\320\265\321\202 \320\262 \321\202\320\265\320\275\320\270\342\200\235.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\220\320\275\321\204\320\270\321\201\320\260 \342\200\234\320\250\320\270\320\267\320\260\342\200\235 \320\234\320\270\321\200\320\276\320\275\320\276\320\262\320\260</span> \342\200\224 \321\201\321\202\321\200\320\260\320\275\320\275\320\260\321\217 \320\266\320\265\320\275\321\211\320\270\320\275\320\260-\320\270\320\275\320\266\320\265\320\275\320\265\321\200, \321\201\320\273\321\213\321\210\320\270\321\202 \342\200\234\321\210\321\221\320\277\320\276\321\202 \321\202\321\200\321\203\320\261\342\200\235, \321\201\321\207\320\270\321\202\320\260\320\265\321\202 \320\270\321\205 \320\266\320\270\320\262\321\213\320\274\320\270.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; mar"
                        "gin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\217\232\357\270\217\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\224\320\262\320\276\321\200, \320\277\320\260\320\274\321\217\321\202\320\275\320\270\320\272 \320\237\321\213\320\273\321\214\320\275\320\270\320\272\320\276\320\262\321\203</span></h3>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\""
                        " style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\237\321\200\320\260\321\201\320\272\320\276\320\262\321\214\321\217 \342\200\234\320\221\320\260\320\261\320\272\320\260 \320\237\321\213\320\273\321\214\320\275\320\270\320\272\320\276\320\262\320\260\342\200\235 \320\222\320\265\321\202\321\200\320\276\320\262\320\260</span> \342\200\224 \321\201\321\202\320\260\321\200\321\203\321\205\320\260 \321\201 \320\274\321\203\321\202\320\275\321\213\320\274 \320\277\321\200\320\276\321\210\320\273\321\213\320\274, \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \320\267\320\275\320\260\320\265\321\202 \320\264\321\200\320\265\320\262\320\275\321\216\321\216 \321\202\320\260\320\271\320\275\321\203 \320\261\320\273\320\276\320\272\320\260. \320\241\320\270\320\264\320\270\321\202 \321\203 \320\277\320\260\320\274\321\217\321\202\320\275\320\270\320\272\320\260 \320\270 \342\200\234\321\200\320"
                        "\260\320\267\320\263\320\276\320\262\320\260\321\200\320\270\320\262\320\260\320\265\321\202\342\200\235 \321\201 \320\275\320\270\320\274.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<hr />\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\360\237\217\233\357\270\217\302\240</span></h3>\n"
"<h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700;\">\320\237\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276 \320\277\320\260\321\200\321\202\320\270\320"
                        "\270</span></h3>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-style:italic;\">(NPC \320\267\320\264\320\265\321\201\321\214 \320\276\320\277\320\270\321\201\320\260\320\275\321\213 \320\272\320\276\321\201\320\262\320\265\320\275\320\275\320\276)</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\241\321\202\321\200\320\260\320\266\320\270 \320\237\320\260\321"
                        "\200\321\202\320\270\320\270</span> \342\200\224 \320\261\320\265\320\267\321\213\320\274\321\217\320\275\320\275\321\213\320\265, \320\274\320\276\320\273\321\207\320\260\320\273\320\270\320\262\321\213\320\265 \320\273\320\270\320\272\320\262\320\270\320\264\320\260\321\202\320\276\321\200\321\213 \320\277\321\200\320\270 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\265. \320\235\320\270\320\272\320\276\320\263\320\264\320\260 \320\275\320\265 \320\263\320\276\320\262\320\276\321\200\321\217\321\202, \320\262\320\275\321\203\321\210\320\260\321\216\321\202 \321\201\321\202\321\200\320\260\321\205.</li>\n"
"<li style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\223\320\273\320\260\320\262\320\260 \320\277\320\260\321\200\321\202\320\270\320\270 (\320\275\320"
                        "\260 \321\215\320\272\321\200\320\260\320\275\320\265)</span> \342\200\224 \320\277\320\276\321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\207\320\265\321\200\320\265\320\267 \321\202\320\265\320\273\320\265\320\262\320\270\320\267\320\276\321\200, \320\276\320\261\321\200\320\260\321\211\320\260\320\265\321\202\321\201\321\217 \320\275\320\260\320\277\321\200\321\217\320\274\321\203\321\216 \320\272 \320\270\320\263\321\200\320\276\320\272\320\260\320\274. \320\222\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \320\275\320\265 \321\207\320\265\320\273\320\276\320\262\320\265\320\272 \320\262\320\276\320\262\321\201\320\265. </li></ul></body></html>", nullptr));
        pushButton_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(NPC), QCoreApplication::translate("SelectCharacterWindow", "NPC", nullptr));
        labelCharacters->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\266", nullptr));
        labelTraits1->setText(QCoreApplication::translate("SelectCharacterWindow", "-", nullptr));
        labelWeaponSkillName->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        labelLvL->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButtonTraitsHelp2->setText(QString());
        labelMechanicSkillName->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        labelTraits3->setText(QCoreApplication::translate("SelectCharacterWindow", "-", nullptr));
        labelPointsLeft_2->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \320\276\321\207\320\272\320\276\320\262 \320\275\320\260\320\262\321\213\320\272\320\276\320\262", nullptr));
        lineEditAddAttrPoints->setText(QString());
        labelXpCh_2->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\224/\320\276 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272", nullptr));
        lineEditXp_3->setText(QString());
        labelXpCh_3->setText(QCoreApplication::translate("SelectCharacterWindow", "\320\224/\320\276 \320\275\320\260\320\262\321\213\320\272\320\276\320\262", nullptr));
        pushButtonTalent->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelectCharacterWindow: public Ui_SelectCharacterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCHARACTERWINDOW_H

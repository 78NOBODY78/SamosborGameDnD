/********************************************************************************
** Form generated from reading UI file 'createcharacterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECHARACTERWINDOW_H
#define UI_CREATECHARACTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateCharacterWindow
{
public:
    QLineEdit *lineEditName;
    QLabel *labelName;
    QRadioButton *radioButtMale;
    QRadioButton *radioButtonFemale;
    QComboBox *comboBoxClass;
    QPushButton *pushButtonHelpClass;
    QSpinBox *spinBoxStrenght;
    QSpinBox *spinBoxAgility;
    QSpinBox *spinBoxIntelligence;
    QLabel *labelStrength;
    QLabel *labelAgility;
    QLabel *labelIntelligence;
    QPushButton *pushButtonCreate;
    QPushButton *pushButtoSave;
    QPushButton *pushButtonBack;
    QLabel *labelWeaponSkillName;
    QLabel *labelMedicineSkillName;
    QLabel *labelMechanicSkillName;
    QLabel *labClass;
    QLabel *labeSskils;
    QLabel *labelElectronicsSkillName;
    QLabel *labeTraitsName;
    QLabel *labelPointsLeft;
    QLabel *labelMedicineSkill;
    QLabel *labelMechanicSkill;
    QLabel *labelElectronicsSkill;
    QLabel *labelWeaponSkill;
    QLabel *labelTraits1;
    QLabel *labelTraits2;
    QLabel *labelTraits3;
    QPushButton *pushButtonTraitsHelp1;
    QPushButton *pushButtonTraitsHelp2;
    QPushButton *pushButtonTraitsHelp3;
    QWidget *widget;

    void setupUi(QWidget *CreateCharacterWindow)
    {
        if (CreateCharacterWindow->objectName().isEmpty())
            CreateCharacterWindow->setObjectName("CreateCharacterWindow");
        CreateCharacterWindow->resize(800, 410);
        CreateCharacterWindow->setMinimumSize(QSize(800, 410));
        CreateCharacterWindow->setMaximumSize(QSize(800, 410));
        lineEditName = new QLineEdit(CreateCharacterWindow);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(170, 20, 291, 30));
        lineEditName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background: transparent;\n"
"border: 2px solid black;\n"
"}"));
        labelName = new QLabel(CreateCharacterWindow);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(20, 20, 141, 30));
        radioButtMale = new QRadioButton(CreateCharacterWindow);
        radioButtMale->setObjectName("radioButtMale");
        radioButtMale->setGeometry(QRect(480, 60, 91, 30));
        radioButtonFemale = new QRadioButton(CreateCharacterWindow);
        radioButtonFemale->setObjectName("radioButtonFemale");
        radioButtonFemale->setGeometry(QRect(480, 20, 91, 30));
        comboBoxClass = new QComboBox(CreateCharacterWindow);
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->setObjectName("comboBoxClass");
        comboBoxClass->setGeometry(QRect(90, 60, 330, 30));
        comboBoxClass->setMinimumSize(QSize(330, 30));
        comboBoxClass->setMaximumSize(QSize(330, 30));
        comboBoxClass->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background: transparent;\n"
"border: 2px solid black;\n"
"}"));
        pushButtonHelpClass = new QPushButton(CreateCharacterWindow);
        pushButtonHelpClass->setObjectName("pushButtonHelpClass");
        pushButtonHelpClass->setGeometry(QRect(430, 60, 30, 30));
        pushButtonHelpClass->setMinimumSize(QSize(30, 30));
        pushButtonHelpClass->setMaximumSize(QSize(30, 30));
        pushButtonHelpClass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        spinBoxStrenght = new QSpinBox(CreateCharacterWindow);
        spinBoxStrenght->setObjectName("spinBoxStrenght");
        spinBoxStrenght->setGeometry(QRect(691, 20, 91, 30));
        spinBoxStrenght->setMinimumSize(QSize(0, 30));
        spinBoxStrenght->setMaximumSize(QSize(16777215, 30));
        spinBoxStrenght->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background: none;\n"
"border: 2px solid black;\n"
"}"));
        spinBoxAgility = new QSpinBox(CreateCharacterWindow);
        spinBoxAgility->setObjectName("spinBoxAgility");
        spinBoxAgility->setGeometry(QRect(690, 60, 91, 30));
        spinBoxAgility->setMinimumSize(QSize(0, 30));
        spinBoxAgility->setMaximumSize(QSize(16777215, 30));
        spinBoxAgility->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background: transparent;\n"
"border: 2px solid black;\n"
"}"));
        spinBoxIntelligence = new QSpinBox(CreateCharacterWindow);
        spinBoxIntelligence->setObjectName("spinBoxIntelligence");
        spinBoxIntelligence->setGeometry(QRect(690, 100, 91, 30));
        spinBoxIntelligence->setMinimumSize(QSize(0, 30));
        spinBoxIntelligence->setMaximumSize(QSize(16777215, 30));
        spinBoxIntelligence->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background: transparent;\n"
"border: 2px solid black;\n"
"}"));
        labelStrength = new QLabel(CreateCharacterWindow);
        labelStrength->setObjectName("labelStrength");
        labelStrength->setGeometry(QRect(588, 20, 101, 30));
        labelStrength->setMinimumSize(QSize(0, 30));
        labelStrength->setMaximumSize(QSize(16777215, 30));
        labelAgility = new QLabel(CreateCharacterWindow);
        labelAgility->setObjectName("labelAgility");
        labelAgility->setGeometry(QRect(590, 60, 101, 30));
        labelAgility->setMinimumSize(QSize(0, 30));
        labelAgility->setMaximumSize(QSize(16777215, 30));
        labelIntelligence = new QLabel(CreateCharacterWindow);
        labelIntelligence->setObjectName("labelIntelligence");
        labelIntelligence->setGeometry(QRect(590, 100, 101, 30));
        labelIntelligence->setMinimumSize(QSize(0, 30));
        labelIntelligence->setMaximumSize(QSize(16777215, 30));
        pushButtonCreate = new QPushButton(CreateCharacterWindow);
        pushButtonCreate->setObjectName("pushButtonCreate");
        pushButtonCreate->setGeometry(QRect(40, 310, 200, 80));
        pushButtonCreate->setMinimumSize(QSize(200, 80));
        pushButtonCreate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/images/images/SS_PB_PMW_Create2.png);\n"
"	background: none;\n"
"	border:none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_PMW_Create2_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_PMW_Create2_push.png);\n"
"}"));
        pushButtoSave = new QPushButton(CreateCharacterWindow);
        pushButtoSave->setObjectName("pushButtoSave");
        pushButtoSave->setGeometry(QRect(290, 310, 200, 80));
        pushButtoSave->setMinimumSize(QSize(200, 80));
        pushButtoSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border: 2px solid black;\n"
"}\n"
"QPushButton:hover {\n"
"	background: none;\n"
"	border: 2px solid red;\n"
"	color: red;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: none;\n"
"	border: 2px solid #8B0000;\n"
"	color: #8B0000;\n"
"}"));
        pushButtonBack = new QPushButton(CreateCharacterWindow);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(540, 310, 200, 80));
        pushButtonBack->setMinimumSize(QSize(200, 80));
        pushButtonBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/images/images/SS_PB_CCW_Cancel2.png);\n"
"	background: none;\n"
"	border:none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_CCW_Cancel2_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_CCW_Cancel2_push.png);\n"
"}"));
        labelWeaponSkillName = new QLabel(CreateCharacterWindow);
        labelWeaponSkillName->setObjectName("labelWeaponSkillName");
        labelWeaponSkillName->setGeometry(QRect(20, 140, 111, 30));
        labelWeaponSkillName->setMinimumSize(QSize(0, 30));
        labelMedicineSkillName = new QLabel(CreateCharacterWindow);
        labelMedicineSkillName->setObjectName("labelMedicineSkillName");
        labelMedicineSkillName->setGeometry(QRect(20, 180, 111, 30));
        labelMedicineSkillName->setMinimumSize(QSize(0, 30));
        labelMechanicSkillName = new QLabel(CreateCharacterWindow);
        labelMechanicSkillName->setObjectName("labelMechanicSkillName");
        labelMechanicSkillName->setGeometry(QRect(20, 220, 111, 30));
        labelMechanicSkillName->setMinimumSize(QSize(0, 30));
        labClass = new QLabel(CreateCharacterWindow);
        labClass->setObjectName("labClass");
        labClass->setGeometry(QRect(20, 60, 71, 30));
        labClass->setMinimumSize(QSize(0, 30));
        labClass->setMaximumSize(QSize(16777215, 30));
        labeSskils = new QLabel(CreateCharacterWindow);
        labeSskils->setObjectName("labeSskils");
        labeSskils->setGeometry(QRect(20, 100, 151, 30));
        labeSskils->setMinimumSize(QSize(0, 30));
        labelElectronicsSkillName = new QLabel(CreateCharacterWindow);
        labelElectronicsSkillName->setObjectName("labelElectronicsSkillName");
        labelElectronicsSkillName->setGeometry(QRect(20, 260, 121, 30));
        labelElectronicsSkillName->setMinimumSize(QSize(0, 30));
        labeTraitsName = new QLabel(CreateCharacterWindow);
        labeTraitsName->setObjectName("labeTraitsName");
        labeTraitsName->setGeometry(QRect(220, 100, 81, 30));
        labeTraitsName->setMinimumSize(QSize(0, 30));
        labelPointsLeft = new QLabel(CreateCharacterWindow);
        labelPointsLeft->setObjectName("labelPointsLeft");
        labelPointsLeft->setGeometry(QRect(590, 140, 191, 30));
        labelPointsLeft->setMinimumSize(QSize(0, 30));
        labelPointsLeft->setMaximumSize(QSize(16777215, 30));
        labelMedicineSkill = new QLabel(CreateCharacterWindow);
        labelMedicineSkill->setObjectName("labelMedicineSkill");
        labelMedicineSkill->setGeometry(QRect(140, 180, 180, 30));
        labelMedicineSkill->setMinimumSize(QSize(180, 30));
        labelMedicineSkill->setMaximumSize(QSize(180, 20));
        labelMechanicSkill = new QLabel(CreateCharacterWindow);
        labelMechanicSkill->setObjectName("labelMechanicSkill");
        labelMechanicSkill->setGeometry(QRect(140, 220, 180, 30));
        labelMechanicSkill->setMinimumSize(QSize(180, 30));
        labelMechanicSkill->setMaximumSize(QSize(180, 20));
        labelElectronicsSkill = new QLabel(CreateCharacterWindow);
        labelElectronicsSkill->setObjectName("labelElectronicsSkill");
        labelElectronicsSkill->setGeometry(QRect(140, 260, 180, 30));
        labelElectronicsSkill->setMinimumSize(QSize(180, 30));
        labelElectronicsSkill->setMaximumSize(QSize(180, 20));
        labelWeaponSkill = new QLabel(CreateCharacterWindow);
        labelWeaponSkill->setObjectName("labelWeaponSkill");
        labelWeaponSkill->setGeometry(QRect(140, 140, 180, 30));
        labelWeaponSkill->setMinimumSize(QSize(180, 30));
        labelWeaponSkill->setMaximumSize(QSize(180, 20));
        labelTraits1 = new QLabel(CreateCharacterWindow);
        labelTraits1->setObjectName("labelTraits1");
        labelTraits1->setGeometry(QRect(220, 140, 270, 30));
        labelTraits1->setMinimumSize(QSize(270, 30));
        labelTraits1->setMaximumSize(QSize(270, 30));
        labelTraits2 = new QLabel(CreateCharacterWindow);
        labelTraits2->setObjectName("labelTraits2");
        labelTraits2->setGeometry(QRect(220, 180, 270, 30));
        labelTraits2->setMinimumSize(QSize(270, 30));
        labelTraits2->setMaximumSize(QSize(270, 30));
        labelTraits3 = new QLabel(CreateCharacterWindow);
        labelTraits3->setObjectName("labelTraits3");
        labelTraits3->setGeometry(QRect(220, 220, 270, 30));
        labelTraits3->setMinimumSize(QSize(270, 30));
        labelTraits3->setMaximumSize(QSize(270, 30));
        pushButtonTraitsHelp1 = new QPushButton(CreateCharacterWindow);
        pushButtonTraitsHelp1->setObjectName("pushButtonTraitsHelp1");
        pushButtonTraitsHelp1->setGeometry(QRect(530, 140, 30, 30));
        pushButtonTraitsHelp1->setMinimumSize(QSize(30, 30));
        pushButtonTraitsHelp1->setMaximumSize(QSize(30, 30));
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
        pushButtonTraitsHelp2 = new QPushButton(CreateCharacterWindow);
        pushButtonTraitsHelp2->setObjectName("pushButtonTraitsHelp2");
        pushButtonTraitsHelp2->setGeometry(QRect(530, 180, 30, 30));
        pushButtonTraitsHelp2->setMinimumSize(QSize(30, 30));
        pushButtonTraitsHelp2->setMaximumSize(QSize(30, 30));
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
        pushButtonTraitsHelp3 = new QPushButton(CreateCharacterWindow);
        pushButtonTraitsHelp3->setObjectName("pushButtonTraitsHelp3");
        pushButtonTraitsHelp3->setGeometry(QRect(530, 220, 30, 30));
        pushButtonTraitsHelp3->setMinimumSize(QSize(30, 30));
        pushButtonTraitsHelp3->setMaximumSize(QSize(30, 30));
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
        widget = new QWidget(CreateCharacterWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 410));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/images/images/SS_L_CCW_BG.png);"));
        widget->raise();
        lineEditName->raise();
        labelName->raise();
        radioButtMale->raise();
        radioButtonFemale->raise();
        comboBoxClass->raise();
        pushButtonHelpClass->raise();
        spinBoxStrenght->raise();
        spinBoxAgility->raise();
        spinBoxIntelligence->raise();
        labelStrength->raise();
        labelAgility->raise();
        labelIntelligence->raise();
        pushButtonCreate->raise();
        pushButtoSave->raise();
        pushButtonBack->raise();
        labelWeaponSkillName->raise();
        labelMedicineSkillName->raise();
        labelMechanicSkillName->raise();
        labClass->raise();
        labeSskils->raise();
        labelElectronicsSkillName->raise();
        labeTraitsName->raise();
        labelPointsLeft->raise();
        labelMedicineSkill->raise();
        labelMechanicSkill->raise();
        labelElectronicsSkill->raise();
        labelWeaponSkill->raise();
        labelTraits1->raise();
        labelTraits2->raise();
        labelTraits3->raise();
        pushButtonTraitsHelp1->raise();
        pushButtonTraitsHelp2->raise();
        pushButtonTraitsHelp3->raise();

        retranslateUi(CreateCharacterWindow);

        QMetaObject::connectSlotsByName(CreateCharacterWindow);
    } // setupUi

    void retranslateUi(QWidget *CreateCharacterWindow)
    {
        CreateCharacterWindow->setWindowTitle(QCoreApplication::translate("CreateCharacterWindow", "Dialog", nullptr));
        labelName->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\230\320\274\321\217 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\260", nullptr));
        radioButtMale->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\234\321\203\320\266\321\207\320\270\320\275\320\260", nullptr));
        radioButtonFemale->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\226\320\265\320\275\321\211\320\270\320\275\320\260", nullptr));
        comboBoxClass->setItemText(0, QCoreApplication::translate("CreateCharacterWindow", "\320\236\321\204\320\270\321\206\320\265\321\200 \320\241\320\273\321\203\320\266\320\261\321\213 \320\221\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270", nullptr));
        comboBoxClass->setItemText(1, QCoreApplication::translate("CreateCharacterWindow", "\320\234\320\265\320\264\320\270\320\272", nullptr));
        comboBoxClass->setItemText(2, QCoreApplication::translate("CreateCharacterWindow", "\320\230\320\275\320\266\320\265\320\275\320\265\321\200", nullptr));
        comboBoxClass->setItemText(3, QCoreApplication::translate("CreateCharacterWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272", nullptr));
        comboBoxClass->setItemText(4, QCoreApplication::translate("CreateCharacterWindow", "\320\237\320\276\320\274\320\276\321\210\320\275\320\270\320\272", nullptr));

        pushButtonHelpClass->setText(QString());
        labelStrength->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\241\320\270\320\273\320\260", nullptr));
        labelAgility->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\233\320\276\320\262\320\272\320\276\321\201\321\202\321\214", nullptr));
        labelIntelligence->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\230\320\275\321\202\320\265\320\273\320\265\320\272\321\202", nullptr));
        pushButtonCreate->setText(QString());
        pushButtoSave->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\241\320\236\320\245\320\240\320\220\320\235\320\230\320\242\320\254", nullptr));
        pushButtonBack->setText(QString());
        labelWeaponSkillName->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\236\321\200\321\203\320\266\320\270\320\265", nullptr));
        labelMedicineSkillName->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\320\260", nullptr));
        labelMechanicSkillName->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        labClass->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        labeSskils->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\235\320\260\320\262\321\213\320\272\320\270", nullptr));
        labelElectronicsSkillName->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\270\320\272\320\260", nullptr));
        labeTraitsName->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\236\321\201\320\276\320\261\320\265\320\275\320\275\320\276\321\201\321\202\320\270", nullptr));
        labelPointsLeft->setText(QCoreApplication::translate("CreateCharacterWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \320\276\321\207\320\272\320\276\320\262 3", nullptr));
        labelMedicineSkill->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        labelMechanicSkill->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        labelElectronicsSkill->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        labelWeaponSkill->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        labelTraits1->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        labelTraits2->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        labelTraits3->setText(QCoreApplication::translate("CreateCharacterWindow", "-", nullptr));
        pushButtonTraitsHelp1->setText(QString());
        pushButtonTraitsHelp2->setText(QString());
        pushButtonTraitsHelp3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateCharacterWindow: public Ui_CreateCharacterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECHARACTERWINDOW_H

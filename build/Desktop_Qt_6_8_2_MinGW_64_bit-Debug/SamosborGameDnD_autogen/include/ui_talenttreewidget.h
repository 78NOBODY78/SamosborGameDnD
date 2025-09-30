/********************************************************************************
** Form generated from reading UI file 'talenttreewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALENTTREEWIDGET_H
#define UI_TALENTTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalentTreeWidget
{
public:
    QGroupBox *talenttreewidgetgroupBox;
    QGroupBox *groupBox;
    QLabel *labeConstPers;
    QComboBox *SelectCharactercomboBox;
    QLabel *labelConstClass;
    QLabel *labelPrinClass;
    QLabel *labelConstPoints;
    QLabel *labelPrintPoints;
    QLabel *labelPrintLvL;
    QLabel *labelConstLvL_2;
    QGroupBox *groupBoxRang1;
    QPushButton *pushButtonTalent1;
    QPushButton *pushButtonTalent2;
    QPushButton *pushButtonTalent3;
    QPushButton *pushButtonTalent1Help;
    QPushButton *pushButtonTalent2Help;
    QPushButton *pushButtonTalent3Help;
    QGroupBox *groupBoxRang2;
    QPushButton *pushButtonTalent4;
    QPushButton *pushButtonTalent5;
    QPushButton *pushButtonTalent6;
    QPushButton *pushButtonTalent4Help;
    QPushButton *pushButtonTalent5Help;
    QPushButton *pushButtonTalent6Help;
    QGroupBox *groupBoxSpecial1;
    QPushButton *pushButtonSpecial1_1;
    QPushButton *pushButtonSpecial1Help_1;
    QPushButton *pushButtonSpecial1_2;
    QPushButton *pushButtonSpecial1_3;
    QPushButton *pushButtonSpecial1Help_2;
    QPushButton *pushButtonSpecialt1Help_3;
    QGroupBox *groupBoxSpecial2;
    QPushButton *pushButtonSpecialt2Help_1;
    QPushButton *pushButtonSpecial2Help_2;
    QPushButton *pushButtonSpecial2Help_3;
    QPushButton *pushButtonSpecial2_1;
    QPushButton *pushButtonSpecial2_2;
    QPushButton *pushButtonSpecial2_3;
    QGroupBox *groupBoxSpecial3;
    QPushButton *pushButtonSpecial3_1;
    QPushButton *pushButtonSpecial3_2;
    QPushButton *pushButtonSpecial3_3;
    QPushButton *pushButtonSpecial3Help_1;
    QPushButton *pushButtonSpecial3Help_2;
    QPushButton *pushButtonSpecial3Help_3;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonResetTalents;
    QWidget *widget;

    void setupUi(QWidget *TalentTreeWidget)
    {
        if (TalentTreeWidget->objectName().isEmpty())
            TalentTreeWidget->setObjectName("TalentTreeWidget");
        TalentTreeWidget->resize(1130, 780);
        TalentTreeWidget->setMinimumSize(QSize(1130, 780));
        TalentTreeWidget->setMaximumSize(QSize(1130, 780));
        TalentTreeWidget->setStyleSheet(QString::fromUtf8(""));
        talenttreewidgetgroupBox = new QGroupBox(TalentTreeWidget);
        talenttreewidgetgroupBox->setObjectName("talenttreewidgetgroupBox");
        talenttreewidgetgroupBox->setGeometry(QRect(10, 0, 1111, 681));
        talenttreewidgetgroupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #001b35;\n"
"}"));
        groupBox = new QGroupBox(talenttreewidgetgroupBox);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 1051, 61));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #002942;\n"
"			color: white;\n"
"        }"));
        labeConstPers = new QLabel(groupBox);
        labeConstPers->setObjectName("labeConstPers");
        labeConstPers->setGeometry(QRect(10, 20, 71, 40));
        labeConstPers->setMinimumSize(QSize(0, 40));
        labeConstPers->setStyleSheet(QString::fromUtf8("QLabel{\n"
"            color: white;\n"
"}"));
        SelectCharactercomboBox = new QComboBox(groupBox);
        SelectCharactercomboBox->setObjectName("SelectCharactercomboBox");
        SelectCharactercomboBox->setGeometry(QRect(80, 20, 431, 40));
        SelectCharactercomboBox->setMinimumSize(QSize(0, 40));
        SelectCharactercomboBox->setMaximumSize(QSize(16777215, 20));
        labelConstClass = new QLabel(groupBox);
        labelConstClass->setObjectName("labelConstClass");
        labelConstClass->setGeometry(QRect(530, 20, 49, 40));
        labelConstClass->setMinimumSize(QSize(0, 40));
        labelConstClass->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"}"));
        labelPrinClass = new QLabel(groupBox);
        labelPrinClass->setObjectName("labelPrinClass");
        labelPrinClass->setGeometry(QRect(570, 20, 191, 40));
        labelPrinClass->setMinimumSize(QSize(0, 40));
        labelPrinClass->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        labelConstPoints = new QLabel(groupBox);
        labelConstPoints->setObjectName("labelConstPoints");
        labelConstPoints->setGeometry(QRect(910, 20, 49, 40));
        labelConstPoints->setMinimumSize(QSize(0, 40));
        labelConstPoints->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        labelPrintPoints = new QLabel(groupBox);
        labelPrintPoints->setObjectName("labelPrintPoints");
        labelPrintPoints->setGeometry(QRect(960, 20, 81, 40));
        labelPrintPoints->setMinimumSize(QSize(0, 40));
        labelPrintPoints->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        labelPrintLvL = new QLabel(groupBox);
        labelPrintLvL->setObjectName("labelPrintLvL");
        labelPrintLvL->setGeometry(QRect(830, 20, 61, 40));
        labelPrintLvL->setMinimumSize(QSize(0, 40));
        labelPrintLvL->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        labelConstLvL_2 = new QLabel(groupBox);
        labelConstLvL_2->setObjectName("labelConstLvL_2");
        labelConstLvL_2->setGeometry(QRect(770, 20, 49, 40));
        labelConstLvL_2->setMinimumSize(QSize(0, 40));
        labelConstLvL_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        groupBoxRang1 = new QGroupBox(talenttreewidgetgroupBox);
        groupBoxRang1->setObjectName("groupBoxRang1");
        groupBoxRang1->setGeometry(QRect(10, 80, 1091, 121));
        groupBoxRang1->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #002942;\n"
"color: white;\n"
"        }"));
        pushButtonTalent1 = new QPushButton(groupBoxRang1);
        pushButtonTalent1->setObjectName("pushButtonTalent1");
        pushButtonTalent1->setGeometry(QRect(20, 20, 261, 81));
        pushButtonTalent1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent2 = new QPushButton(groupBoxRang1);
        pushButtonTalent2->setObjectName("pushButtonTalent2");
        pushButtonTalent2->setGeometry(QRect(400, 20, 251, 81));
        pushButtonTalent2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent3 = new QPushButton(groupBoxRang1);
        pushButtonTalent3->setObjectName("pushButtonTalent3");
        pushButtonTalent3->setGeometry(QRect(770, 20, 241, 81));
        pushButtonTalent3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent1Help = new QPushButton(groupBoxRang1);
        pushButtonTalent1Help->setObjectName("pushButtonTalent1Help");
        pushButtonTalent1Help->setGeometry(QRect(290, 20, 51, 81));
        pushButtonTalent1Help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent2Help = new QPushButton(groupBoxRang1);
        pushButtonTalent2Help->setObjectName("pushButtonTalent2Help");
        pushButtonTalent2Help->setGeometry(QRect(660, 20, 51, 81));
        pushButtonTalent2Help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent3Help = new QPushButton(groupBoxRang1);
        pushButtonTalent3Help->setObjectName("pushButtonTalent3Help");
        pushButtonTalent3Help->setGeometry(QRect(1020, 20, 51, 81));
        pushButtonTalent3Help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        groupBoxRang2 = new QGroupBox(talenttreewidgetgroupBox);
        groupBoxRang2->setObjectName("groupBoxRang2");
        groupBoxRang2->setGeometry(QRect(10, 210, 1091, 121));
        groupBoxRang2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #002942;\n"
"color: white;\n"
"        }"));
        pushButtonTalent4 = new QPushButton(groupBoxRang2);
        pushButtonTalent4->setObjectName("pushButtonTalent4");
        pushButtonTalent4->setGeometry(QRect(20, 20, 261, 81));
        pushButtonTalent4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent5 = new QPushButton(groupBoxRang2);
        pushButtonTalent5->setObjectName("pushButtonTalent5");
        pushButtonTalent5->setGeometry(QRect(400, 20, 251, 81));
        pushButtonTalent5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent6 = new QPushButton(groupBoxRang2);
        pushButtonTalent6->setObjectName("pushButtonTalent6");
        pushButtonTalent6->setGeometry(QRect(770, 20, 241, 81));
        pushButtonTalent6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent4Help = new QPushButton(groupBoxRang2);
        pushButtonTalent4Help->setObjectName("pushButtonTalent4Help");
        pushButtonTalent4Help->setGeometry(QRect(290, 20, 51, 81));
        pushButtonTalent4Help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent5Help = new QPushButton(groupBoxRang2);
        pushButtonTalent5Help->setObjectName("pushButtonTalent5Help");
        pushButtonTalent5Help->setGeometry(QRect(660, 20, 51, 81));
        pushButtonTalent5Help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonTalent6Help = new QPushButton(groupBoxRang2);
        pushButtonTalent6Help->setObjectName("pushButtonTalent6Help");
        pushButtonTalent6Help->setGeometry(QRect(1020, 20, 51, 81));
        pushButtonTalent6Help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        groupBoxSpecial1 = new QGroupBox(talenttreewidgetgroupBox);
        groupBoxSpecial1->setObjectName("groupBoxSpecial1");
        groupBoxSpecial1->setGeometry(QRect(10, 340, 361, 331));
        groupBoxSpecial1->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #002942;\n"
"color: white;\n"
"        }"));
        pushButtonSpecial1_1 = new QPushButton(groupBoxSpecial1);
        pushButtonSpecial1_1->setObjectName("pushButtonSpecial1_1");
        pushButtonSpecial1_1->setGeometry(QRect(20, 30, 261, 81));
        pushButtonSpecial1_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial1Help_1 = new QPushButton(groupBoxSpecial1);
        pushButtonSpecial1Help_1->setObjectName("pushButtonSpecial1Help_1");
        pushButtonSpecial1Help_1->setGeometry(QRect(290, 30, 51, 81));
        pushButtonSpecial1Help_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial1_2 = new QPushButton(groupBoxSpecial1);
        pushButtonSpecial1_2->setObjectName("pushButtonSpecial1_2");
        pushButtonSpecial1_2->setGeometry(QRect(20, 130, 261, 81));
        pushButtonSpecial1_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial1_3 = new QPushButton(groupBoxSpecial1);
        pushButtonSpecial1_3->setObjectName("pushButtonSpecial1_3");
        pushButtonSpecial1_3->setGeometry(QRect(20, 230, 261, 81));
        pushButtonSpecial1_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial1Help_2 = new QPushButton(groupBoxSpecial1);
        pushButtonSpecial1Help_2->setObjectName("pushButtonSpecial1Help_2");
        pushButtonSpecial1Help_2->setGeometry(QRect(290, 130, 51, 81));
        pushButtonSpecial1Help_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecialt1Help_3 = new QPushButton(groupBoxSpecial1);
        pushButtonSpecialt1Help_3->setObjectName("pushButtonSpecialt1Help_3");
        pushButtonSpecialt1Help_3->setGeometry(QRect(290, 230, 51, 81));
        pushButtonSpecialt1Help_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        groupBoxSpecial2 = new QGroupBox(talenttreewidgetgroupBox);
        groupBoxSpecial2->setObjectName("groupBoxSpecial2");
        groupBoxSpecial2->setGeometry(QRect(390, 340, 351, 331));
        groupBoxSpecial2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #002942;\n"
"color: white;\n"
"        }"));
        pushButtonSpecialt2Help_1 = new QPushButton(groupBoxSpecial2);
        pushButtonSpecialt2Help_1->setObjectName("pushButtonSpecialt2Help_1");
        pushButtonSpecialt2Help_1->setGeometry(QRect(280, 30, 51, 81));
        pushButtonSpecialt2Help_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial2Help_2 = new QPushButton(groupBoxSpecial2);
        pushButtonSpecial2Help_2->setObjectName("pushButtonSpecial2Help_2");
        pushButtonSpecial2Help_2->setGeometry(QRect(280, 130, 51, 81));
        pushButtonSpecial2Help_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial2Help_3 = new QPushButton(groupBoxSpecial2);
        pushButtonSpecial2Help_3->setObjectName("pushButtonSpecial2Help_3");
        pushButtonSpecial2Help_3->setGeometry(QRect(280, 230, 51, 81));
        pushButtonSpecial2Help_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial2_1 = new QPushButton(groupBoxSpecial2);
        pushButtonSpecial2_1->setObjectName("pushButtonSpecial2_1");
        pushButtonSpecial2_1->setGeometry(QRect(20, 30, 251, 81));
        pushButtonSpecial2_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial2_2 = new QPushButton(groupBoxSpecial2);
        pushButtonSpecial2_2->setObjectName("pushButtonSpecial2_2");
        pushButtonSpecial2_2->setGeometry(QRect(20, 130, 251, 81));
        pushButtonSpecial2_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial2_3 = new QPushButton(groupBoxSpecial2);
        pushButtonSpecial2_3->setObjectName("pushButtonSpecial2_3");
        pushButtonSpecial2_3->setGeometry(QRect(20, 230, 251, 81));
        pushButtonSpecial2_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        groupBoxSpecial3 = new QGroupBox(talenttreewidgetgroupBox);
        groupBoxSpecial3->setObjectName("groupBoxSpecial3");
        groupBoxSpecial3->setGeometry(QRect(760, 340, 341, 331));
        groupBoxSpecial3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"            background: #002942;\n"
"color: white;\n"
"        }"));
        pushButtonSpecial3_1 = new QPushButton(groupBoxSpecial3);
        pushButtonSpecial3_1->setObjectName("pushButtonSpecial3_1");
        pushButtonSpecial3_1->setGeometry(QRect(20, 30, 241, 81));
        pushButtonSpecial3_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial3_2 = new QPushButton(groupBoxSpecial3);
        pushButtonSpecial3_2->setObjectName("pushButtonSpecial3_2");
        pushButtonSpecial3_2->setGeometry(QRect(20, 130, 241, 81));
        pushButtonSpecial3_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial3_3 = new QPushButton(groupBoxSpecial3);
        pushButtonSpecial3_3->setObjectName("pushButtonSpecial3_3");
        pushButtonSpecial3_3->setGeometry(QRect(20, 230, 241, 81));
        pushButtonSpecial3_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial3Help_1 = new QPushButton(groupBoxSpecial3);
        pushButtonSpecial3Help_1->setObjectName("pushButtonSpecial3Help_1");
        pushButtonSpecial3Help_1->setGeometry(QRect(270, 30, 51, 81));
        pushButtonSpecial3Help_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial3Help_2 = new QPushButton(groupBoxSpecial3);
        pushButtonSpecial3Help_2->setObjectName("pushButtonSpecial3Help_2");
        pushButtonSpecial3Help_2->setGeometry(QRect(270, 130, 51, 81));
        pushButtonSpecial3Help_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSpecial3Help_3 = new QPushButton(groupBoxSpecial3);
        pushButtonSpecial3Help_3->setObjectName("pushButtonSpecial3Help_3");
        pushButtonSpecial3Help_3->setGeometry(QRect(270, 230, 51, 81));
        pushButtonSpecial3Help_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: #00FF00;\n"
"}"));
        pushButtonSave = new QPushButton(TalentTreeWidget);
        pushButtonSave->setObjectName("pushButtonSave");
        pushButtonSave->setGeometry(QRect(50, 700, 311, 60));
        pushButtonSave->setMinimumSize(QSize(200, 60));
        pushButtonSave->setMaximumSize(QSize(1000, 60));
        QFont font;
        font.setPointSize(14);
        pushButtonSave->setFont(font);
        pushButtonSave->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: white;\n"
"	border: 4px solid white;\n"
"}\n"
"QPushButton:hover {\n"
"	color: #FF0E0E;\n"
"	border: 4px solid #FF0E0E;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #FF0E0E;\n"
"	border: 4px solid #FF0E0E;\n"
"}"));
        pushButtonBack = new QPushButton(TalentTreeWidget);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(790, 700, 301, 61));
        pushButtonBack->setFont(font);
        pushButtonBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: white;\n"
"	border: 4px solid white;\n"
"}\n"
"QPushButton:hover {\n"
"	color: #FF0E0E;\n"
"	border: 4px solid #FF0E0E;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #FF0E0E;\n"
"	border: 4px solid #FF0E0E;\n"
"}"));
        pushButtonResetTalents = new QPushButton(TalentTreeWidget);
        pushButtonResetTalents->setObjectName("pushButtonResetTalents");
        pushButtonResetTalents->setGeometry(QRect(420, 700, 311, 61));
        pushButtonResetTalents->setFont(font);
        pushButtonResetTalents->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: black;\n"
"	color: white;\n"
"	border: 4px solid white;\n"
"}\n"
"QPushButton:hover {\n"
"	color: #FF0E0E;\n"
"	border: 4px solid #FF0E0E;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #FF0E0E;\n"
"	border: 4px solid #FF0E0E;\n"
"}"));
        widget = new QWidget(TalentTreeWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1130, 780));
        widget->setMinimumSize(QSize(1130, 780));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        widget->raise();
        talenttreewidgetgroupBox->raise();
        pushButtonSave->raise();
        pushButtonBack->raise();
        pushButtonResetTalents->raise();

        retranslateUi(TalentTreeWidget);

        QMetaObject::connectSlotsByName(TalentTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *TalentTreeWidget)
    {
        TalentTreeWidget->setWindowTitle(QCoreApplication::translate("TalentTreeWidget", "Form", nullptr));
        talenttreewidgetgroupBox->setTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("TalentTreeWidget", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\260", nullptr));
        labeConstPers->setText(QCoreApplication::translate("TalentTreeWidget", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\266", nullptr));
        labelConstClass->setText(QCoreApplication::translate("TalentTreeWidget", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        labelPrinClass->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        labelConstPoints->setText(QCoreApplication::translate("TalentTreeWidget", "\320\236\321\207\320\272\320\270", nullptr));
        labelPrintPoints->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        labelPrintLvL->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        labelConstLvL_2->setText(QCoreApplication::translate("TalentTreeWidget", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214", nullptr));
        groupBoxRang1->setTitle(QString());
        pushButtonTalent1->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonTalent2->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonTalent3->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonTalent1Help->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonTalent2Help->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonTalent3Help->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        groupBoxRang2->setTitle(QString());
        pushButtonTalent4->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonTalent5->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonTalent6->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonTalent4Help->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonTalent5Help->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonTalent6Help->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        groupBoxSpecial1->setTitle(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial1_1->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial1Help_1->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecial1_2->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial1_3->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial1Help_2->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecialt1Help_3->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        groupBoxSpecial2->setTitle(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecialt2Help_1->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecial2Help_2->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecial2Help_3->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecial2_1->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial2_2->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial2_3->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        groupBoxSpecial3->setTitle(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial3_1->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial3_2->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial3_3->setText(QCoreApplication::translate("TalentTreeWidget", "-", nullptr));
        pushButtonSpecial3Help_1->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecial3Help_2->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSpecial3Help_3->setText(QCoreApplication::translate("TalentTreeWidget", "?", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("TalentTreeWidget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("TalentTreeWidget", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButtonResetTalents->setText(QCoreApplication::translate("TalentTreeWidget", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\202\320\260\320\273\320\260\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TalentTreeWidget: public Ui_TalentTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALENTTREEWIDGET_H

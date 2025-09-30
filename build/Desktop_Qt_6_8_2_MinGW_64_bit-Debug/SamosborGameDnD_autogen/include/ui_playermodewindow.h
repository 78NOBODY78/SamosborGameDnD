/********************************************************************************
** Form generated from reading UI file 'playermodewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERMODEWINDOW_H
#define UI_PLAYERMODEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerModeWindow
{
public:
    QPushButton *pushButtonCreate;
    QPushButton *pushButtonSelect;
    QPushButton *pushButtonBack;
    QWidget *widget;

    void setupUi(QWidget *PlayerModeWindow)
    {
        if (PlayerModeWindow->objectName().isEmpty())
            PlayerModeWindow->setObjectName("PlayerModeWindow");
        PlayerModeWindow->resize(800, 500);
        PlayerModeWindow->setMinimumSize(QSize(800, 500));
        PlayerModeWindow->setMaximumSize(QSize(800, 500));
        PlayerModeWindow->setStyleSheet(QString::fromUtf8(""));
        pushButtonCreate = new QPushButton(PlayerModeWindow);
        pushButtonCreate->setObjectName("pushButtonCreate");
        pushButtonCreate->setGeometry(QRect(100, 210, 600, 80));
        pushButtonCreate->setMinimumSize(QSize(600, 80));
        pushButtonCreate->setMaximumSize(QSize(600, 80));
        pushButtonCreate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_PMW_Create.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_PMW_Create_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_PMW_Create_push.png);\n"
"}"));
        pushButtonSelect = new QPushButton(PlayerModeWindow);
        pushButtonSelect->setObjectName("pushButtonSelect");
        pushButtonSelect->setGeometry(QRect(100, 310, 600, 80));
        pushButtonSelect->setMinimumSize(QSize(600, 80));
        pushButtonSelect->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: none;\n"
"	border:none;\n"
"	image: url(:/images/images/SS_PB_PMW_Play.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_PMW_Play_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_PMW_Play_push.png);\n"
"}"));
        pushButtonBack = new QPushButton(PlayerModeWindow);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(240, 410, 310, 70));
        pushButtonBack->setMinimumSize(QSize(310, 70));
        pushButtonBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: transparent;\n"
"        border: none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MM_Exit.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MM_Exit.png);\n"
"}"));
        widget = new QWidget(PlayerModeWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 500));
        widget->setMinimumSize(QSize(800, 500));
        widget->setMaximumSize(QSize(800, 500));
        widget->setStyleSheet(QString::fromUtf8("QWidget {background-image: url(:/images/images/SS_L_GMW_BG.png);}"));
        widget->raise();
        pushButtonCreate->raise();
        pushButtonSelect->raise();
        pushButtonBack->raise();

        retranslateUi(PlayerModeWindow);

        QMetaObject::connectSlotsByName(PlayerModeWindow);
    } // setupUi

    void retranslateUi(QWidget *PlayerModeWindow)
    {
        PlayerModeWindow->setWindowTitle(QCoreApplication::translate("PlayerModeWindow", "\320\240\320\265\320\266\320\270\320\274 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        pushButtonCreate->setText(QString());
        pushButtonSelect->setText(QString());
        pushButtonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PlayerModeWindow: public Ui_PlayerModeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERMODEWINDOW_H

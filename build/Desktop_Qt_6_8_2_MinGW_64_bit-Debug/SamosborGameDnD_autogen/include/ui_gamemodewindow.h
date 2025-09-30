/********************************************************************************
** Form generated from reading UI file 'gamemodewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMODEWINDOW_H
#define UI_GAMEMODEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameModeWindow
{
public:
    QPushButton *pushButtonPlayer;
    QPushButton *pushButtonMaster;
    QPushButton *pushButtBack;
    QWidget *widget;

    void setupUi(QWidget *GameModeWindow)
    {
        if (GameModeWindow->objectName().isEmpty())
            GameModeWindow->setObjectName("GameModeWindow");
        GameModeWindow->resize(800, 500);
        GameModeWindow->setMinimumSize(QSize(800, 500));
        GameModeWindow->setMaximumSize(QSize(800, 16777215));
        GameModeWindow->setStyleSheet(QString::fromUtf8(""));
        pushButtonPlayer = new QPushButton(GameModeWindow);
        pushButtonPlayer->setObjectName("pushButtonPlayer");
        pushButtonPlayer->setGeometry(QRect(190, 270, 400, 80));
        pushButtonPlayer->setMinimumSize(QSize(400, 80));
        pushButtonPlayer->setMaximumSize(QSize(400, 80));
        pushButtonPlayer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/images/images/SS_PB_GMW_Player.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	background-image: url(:/images/images/SS_PB_GMW_Player_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/images/images/SS_PB_GMW_Player_push.png);\n"
"}"));
        pushButtonMaster = new QPushButton(GameModeWindow);
        pushButtonMaster->setObjectName("pushButtonMaster");
        pushButtonMaster->setGeometry(QRect(190, 170, 400, 80));
        pushButtonMaster->setMinimumSize(QSize(400, 80));
        pushButtonMaster->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/images/images/SS_PB_GMW_Master.png);\n"
"    }\n"
"QPushButton:hover {\n"
"	background-image: url(:/images/images/SS_PB_GMW_Master_hover.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	background-image: url(:/images/images/SS_PB_GMW_Master_push.png);\n"
"}"));
        pushButtBack = new QPushButton(GameModeWindow);
        pushButtBack->setObjectName("pushButtBack");
        pushButtBack->setGeometry(QRect(240, 410, 310, 70));
        pushButtBack->setMinimumSize(QSize(310, 70));
        pushButtBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: transparent;\n"
"        border: none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MM_Exit.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MM_Exit.png);\n"
"}"));
        widget = new QWidget(GameModeWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 500));
        widget->setMinimumSize(QSize(800, 500));
        widget->setStyleSheet(QString::fromUtf8("QWidget {background-image: url(:/images/images/SS_L_MM.png);}"));
        widget->raise();
        pushButtonPlayer->raise();
        pushButtonMaster->raise();
        pushButtBack->raise();

        retranslateUi(GameModeWindow);

        QMetaObject::connectSlotsByName(GameModeWindow);
    } // setupUi

    void retranslateUi(QWidget *GameModeWindow)
    {
        GameModeWindow->setWindowTitle(QCoreApplication::translate("GameModeWindow", "\320\222\321\213\320\261\320\276\321\200 \321\200\320\265\320\266\320\270\320\274\320\260", nullptr));
        pushButtonPlayer->setText(QString());
        pushButtonMaster->setText(QString());
        pushButtBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameModeWindow: public Ui_GameModeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMODEWINDOW_H

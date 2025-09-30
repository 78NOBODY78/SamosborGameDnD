/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonExit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/images/images/SS_L_MM.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(330, 130, 150, 180));
        pushButtonStart->setMinimumSize(QSize(150, 180));
        pushButtonStart->setMaximumSize(QSize(150, 180));
        pushButtonStart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: transparent;\n"
"        border: none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MM_Go.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MM_Go.png);\n"
"}"));
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName("pushButtonExit");
        pushButtonExit->setGeometry(QRect(260, 410, 310, 70));
        pushButtonExit->setMinimumSize(QSize(310, 70));
        pushButtonExit->setMaximumSize(QSize(310, 70));
        pushButtonExit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background: transparent;\n"
"        border: none;\n"
"    }\n"
"QPushButton:hover {\n"
"	image: url(:/images/images/SS_PB_MM_Exit.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/images/images/SS_PB_MM_Exit.png);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonStart->setText(QString());
        pushButtonExit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

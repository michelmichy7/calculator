/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnAdd;
    QPushButton *btnSubstract;
    QPushButton *btnDivide;
    QPushButton *btnMultiply;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtFirstNum;
    QLineEdit *txtSecondNum;
    QLineEdit *txtResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(376, 245);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(10, 120, 83, 29));
        btnSubstract = new QPushButton(centralwidget);
        btnSubstract->setObjectName("btnSubstract");
        btnSubstract->setGeometry(QRect(100, 120, 83, 29));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(190, 120, 83, 29));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(280, 120, 83, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 91, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 111, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 111, 20));
        txtFirstNum = new QLineEdit(centralwidget);
        txtFirstNum->setObjectName("txtFirstNum");
        txtFirstNum->setGeometry(QRect(180, 20, 113, 28));
        txtSecondNum = new QLineEdit(centralwidget);
        txtSecondNum->setObjectName("txtSecondNum");
        txtSecondNum->setGeometry(QRect(180, 70, 113, 28));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(80, 160, 231, 28));
        txtResult->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 376, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSubstract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

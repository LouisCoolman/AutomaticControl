/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget_Plot;
    QWidget *tab;
    QCustomPlot *widget_Root;
    QWidget *tab_3;
    QCustomPlot *widget_Freq;
    QLabel *label;
    QLineEdit *lineEdit_Numerator;
    QLineEdit *lineEdit_Denominator;
    QLabel *label_2;
    QPushButton *pushButton_Calculate;
    QGroupBox *groupBox;
    QRadioButton *radioButton_ZP;
    QRadioButton *radioButton_ploynomial;
    QCheckBox *checkBox_Root;
    QCheckBox *checkBox_Freq;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(646, 417);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget_Plot = new QTabWidget(centralWidget);
        tabWidget_Plot->setObjectName(QStringLiteral("tabWidget_Plot"));
        tabWidget_Plot->setGeometry(QRect(210, 10, 421, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget_Root = new QCustomPlot(tab);
        widget_Root->setObjectName(QStringLiteral("widget_Root"));
        widget_Root->setGeometry(QRect(20, 20, 371, 281));
        tabWidget_Plot->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widget_Freq = new QCustomPlot(tab_3);
        widget_Freq->setObjectName(QStringLiteral("widget_Freq"));
        widget_Freq->setGeometry(QRect(20, 20, 371, 281));
        tabWidget_Plot->addTab(tab_3, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 151, 16));
        lineEdit_Numerator = new QLineEdit(centralWidget);
        lineEdit_Numerator->setObjectName(QStringLiteral("lineEdit_Numerator"));
        lineEdit_Numerator->setGeometry(QRect(30, 80, 171, 20));
        lineEdit_Denominator = new QLineEdit(centralWidget);
        lineEdit_Denominator->setObjectName(QStringLiteral("lineEdit_Denominator"));
        lineEdit_Denominator->setGeometry(QRect(30, 130, 171, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 151, 16));
        pushButton_Calculate = new QPushButton(centralWidget);
        pushButton_Calculate->setObjectName(QStringLiteral("pushButton_Calculate"));
        pushButton_Calculate->setGeometry(QRect(60, 200, 75, 23));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 171, 31));
        radioButton_ZP = new QRadioButton(groupBox);
        radioButton_ZP->setObjectName(QStringLiteral("radioButton_ZP"));
        radioButton_ZP->setGeometry(QRect(0, 10, 89, 16));
        radioButton_ploynomial = new QRadioButton(groupBox);
        radioButton_ploynomial->setObjectName(QStringLiteral("radioButton_ploynomial"));
        radioButton_ploynomial->setGeometry(QRect(80, 10, 89, 16));
        checkBox_Root = new QCheckBox(centralWidget);
        checkBox_Root->setObjectName(QStringLiteral("checkBox_Root"));
        checkBox_Root->setGeometry(QRect(30, 170, 71, 16));
        checkBox_Freq = new QCheckBox(centralWidget);
        checkBox_Freq->setObjectName(QStringLiteral("checkBox_Freq"));
        checkBox_Freq->setGeometry(QRect(120, 170, 71, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_Plot->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        tabWidget_Plot->setTabText(tabWidget_Plot->indexOf(tab), QApplication::translate("MainWindow", "\346\240\271\350\275\250\350\277\271", Q_NULLPTR));
        tabWidget_Plot->setTabText(tabWidget_Plot->indexOf(tab_3), QApplication::translate("MainWindow", "\351\242\221\345\237\237\345\210\206\346\236\220", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\210\206\345\255\220\357\274\210aib \347\251\272\346\240\274\347\273\223\345\260\276\357\274\211", Q_NULLPTR));
        lineEdit_Denominator->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\210\206\346\257\215\357\274\210\347\251\272\346\240\274\347\273\223\345\260\276\357\274\211", Q_NULLPTR));
        pushButton_Calculate->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", Q_NULLPTR));
        groupBox->setTitle(QString());
        radioButton_ZP->setText(QApplication::translate("MainWindow", "\351\233\266\346\236\201\347\202\271\345\275\242\345\274\217", Q_NULLPTR));
        radioButton_ploynomial->setText(QApplication::translate("MainWindow", "\345\244\232\351\241\271\345\274\217\345\275\242\345\274\217", Q_NULLPTR));
        checkBox_Root->setText(QApplication::translate("MainWindow", "\346\240\271\350\275\250\350\277\271", Q_NULLPTR));
        checkBox_Freq->setText(QApplication::translate("MainWindow", "\351\242\221\345\237\237\345\210\206\346\236\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

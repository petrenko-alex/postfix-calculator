/********************************************************************************
** Form generated from reading UI file 'postfixcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTFIXCALCULATOR_H
#define UI_POSTFIXCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostfixCalculatorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PostfixCalculatorClass)
    {
        if (PostfixCalculatorClass->objectName().isEmpty())
            PostfixCalculatorClass->setObjectName(QStringLiteral("PostfixCalculatorClass"));
        PostfixCalculatorClass->resize(600, 400);
        menuBar = new QMenuBar(PostfixCalculatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        PostfixCalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PostfixCalculatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PostfixCalculatorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PostfixCalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PostfixCalculatorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PostfixCalculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PostfixCalculatorClass->setStatusBar(statusBar);

        retranslateUi(PostfixCalculatorClass);

        QMetaObject::connectSlotsByName(PostfixCalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *PostfixCalculatorClass)
    {
        PostfixCalculatorClass->setWindowTitle(QApplication::translate("PostfixCalculatorClass", "PostfixCalculator", 0));
    } // retranslateUi

};

namespace Ui {
    class PostfixCalculatorClass: public Ui_PostfixCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTFIXCALCULATOR_H

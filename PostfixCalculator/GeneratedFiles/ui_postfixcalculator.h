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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostfixCalculatorClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *PostfixCalculatorClass)
    {
        if (PostfixCalculatorClass->objectName().isEmpty())
            PostfixCalculatorClass->setObjectName(QStringLiteral("PostfixCalculatorClass"));
        PostfixCalculatorClass->resize(600, 400);
        PostfixCalculatorClass->setMinimumSize(QSize(600, 400));
        PostfixCalculatorClass->setMaximumSize(QSize(600, 400));
        centralWidget = new QWidget(PostfixCalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 100, 231, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 561, 51));
        QPalette palette;
        QBrush brush(QColor(85, 85, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Yu Mincho Light"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 191, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Yu Gothic UI Semilight"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 210, 231, 51));
        label_3->setFont(font1);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 360, 291, 31));
        pushButton->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 70, 191, 16));
        label_4->setFont(font1);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 100, 251, 241));
        PostfixCalculatorClass->setCentralWidget(centralWidget);

        retranslateUi(PostfixCalculatorClass);

        QMetaObject::connectSlotsByName(PostfixCalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *PostfixCalculatorClass)
    {
        PostfixCalculatorClass->setWindowTitle(QApplication::translate("PostfixCalculatorClass", "PostfixCalculator", 0));
        label->setText(QApplication::translate("PostfixCalculatorClass", "\320\237\320\276\321\201\321\202\321\204\320\270\320\272\321\201\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", 0));
        label_2->setText(QApplication::translate("PostfixCalculatorClass", "\320\241\321\202\321\200\320\276\320\272\320\260 \320\264\320\273\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217:", 0));
        label_3->setText(QApplication::translate("PostfixCalculatorClass", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", 0));
        pushButton->setText(QApplication::translate("PostfixCalculatorClass", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", 0));
        label_4->setText(QApplication::translate("PostfixCalculatorClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260:", 0));
    } // retranslateUi

};

namespace Ui {
    class PostfixCalculatorClass: public Ui_PostfixCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTFIXCALCULATOR_H

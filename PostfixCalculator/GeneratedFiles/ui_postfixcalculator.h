/********************************************************************************
** Form generated from reading UI file 'postfixcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
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
    QLineEdit *input;
    QLabel *label;
    QLabel *label_2;
    QLabel *output;
    QPushButton *executeB;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *result;

    void setupUi(QMainWindow *PostfixCalculatorClass)
    {
        if (PostfixCalculatorClass->objectName().isEmpty())
            PostfixCalculatorClass->setObjectName(QStringLiteral("PostfixCalculatorClass"));
        PostfixCalculatorClass->resize(600, 400);
        PostfixCalculatorClass->setMinimumSize(QSize(600, 400));
        PostfixCalculatorClass->setMaximumSize(QSize(600, 400));
        centralWidget = new QWidget(PostfixCalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        input = new QLineEdit(centralWidget);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(20, 100, 231, 20));
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
        output = new QLabel(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(20, 210, 91, 51));
        output->setFont(font1);
        executeB = new QPushButton(centralWidget);
        executeB->setObjectName(QStringLiteral("executeB"));
        executeB->setGeometry(QRect(150, 360, 291, 31));
        executeB->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 70, 191, 16));
        label_4->setFont(font1);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 100, 271, 241));
        textEdit->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        result = new QLabel(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(120, 210, 171, 51));
        QPalette palette1;
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        result->setPalette(palette1);
        PostfixCalculatorClass->setCentralWidget(centralWidget);

        retranslateUi(PostfixCalculatorClass);

        QMetaObject::connectSlotsByName(PostfixCalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *PostfixCalculatorClass)
    {
        PostfixCalculatorClass->setWindowTitle(QApplication::translate("PostfixCalculatorClass", "PostfixCalculator", 0));
        label->setText(QApplication::translate("PostfixCalculatorClass", "\320\237\320\276\321\201\321\202\321\204\320\270\320\272\321\201\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", 0));
        label_2->setText(QApplication::translate("PostfixCalculatorClass", "\320\241\321\202\321\200\320\276\320\272\320\260 \320\264\320\273\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217:", 0));
        output->setText(QApplication::translate("PostfixCalculatorClass", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", 0));
        executeB->setText(QApplication::translate("PostfixCalculatorClass", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", 0));
        label_4->setText(QApplication::translate("PostfixCalculatorClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260:", 0));
        textEdit->setHtml(QApplication::translate("PostfixCalculatorClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\260\320\275\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275 \320\264\320\273\321\217 \321\200\320\265\321\210\320\265\320\275\320\270\321\217 \320\277\321\200\320\270\320\274\320\265\321\200\320\276\320\262, \320\267\320\260\320\277\320\270\321\201\320\260\320\275\320\275\321\213\321\205 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 \320\236\320\261\321\200\320\260"
                        "\321\202\320\275\320\276\320\271 \320\237\320\276\320\273\321\214\321\201\320\272\320\276\320\271 \320\235\320\276\321\202\320\260\321\206\320\270\320\270.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D1%80%D0%B0%D1%82%D0%BD%D0%B0%D1%8F_%D0%BF%D0%BE%D0%BB%D1%8C%D1%81%D0%BA%D0%B0%D1%8F_%D0%B7%D0%B0%D0%BF%D0%B8%D1%81%D1%8C\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \320\277\320\276\320\273\321\214\321\201\320\272\320\260\321\217 \320\275\320\276\321\202\320\260\321\206\320\270\321\217</span></a><span style=\" font-size:8pt; font-weight:600;\"> (\320\236\320\237\320\235)</span><span style=\" font-size:8pt;\">\302\240\342\200"
                        "\224 \321\204\320\276\321\200\320\274\320\260 \320\267\320\260\320\277\320\270\321\201\320\270 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\271, \320\262 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\276\320\277\320\265\321\200\320\260\320\275\320\264\321\213 \321\200\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\321\213 \320\277\320\265\321\200\320\265\320\264 \320\267\320\275\320\260\320\272\320\260\320\274\320\270 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-style:italic"
                        ";\">\320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; font-style:italic;\">&quot;3 + 5&quot; \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 \320\236\320\237\320\235 \320\261\321\203\320\264\320\265\321\202 \320\267\320\260\320\277\320\270\321\201\320\260\320\275\320\276 \320\272\320\260\320\272 &quot;3 5 +&quot;, \320\260 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; font-style:italic;\">&quot; 4 * 2  - 3&quot; \320\272\320\260\320\272 &quot;4 2 * 3 -&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; mar"
                        "gin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\270\320\262\320\260\320\265\321\202 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270:<br />\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265 - &quot;+&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\222\321\213\321\207\320\270\321\202\320\260\320\275\320\270\320\265 - &quot;-&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320"
                        "\265 - &quot;*&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\224\320\265\320\273\320\265\320\275\320\270\320\265 - &quot;/&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\222\320\276\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\262 \321\201\321\202\320\265\320\277\320\265\320\275\321\214 - &quot;^&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\237\321\200\320\270 \320\262\320\262\320\276\320\264\320\265 \320\277\321\200\320\270"
                        "\320\274\320\265\321\200\320\260, \321\207\320\270\321\201\320\273\320\260 \320\270 \320\267\320\275\320\260\320\272\320\270 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271 \320\264\320\276\320\273\320\266\320\275\321\213 \321\200\320\260\320\267\320\264\320\265\320\273\321\217\321\202\321\214\321\201\321\217 \320\276\320\264\320\275\320\270\320\274 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\274 \320\277\321\200\320\276\320\261\320\265\320\273\320\260.</span></p></body></html>", 0));
        result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PostfixCalculatorClass: public Ui_PostfixCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTFIXCALCULATOR_H

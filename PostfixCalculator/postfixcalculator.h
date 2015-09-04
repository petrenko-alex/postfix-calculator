#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include "ui_postfixcalculator.h"
#include "MyStack.h"
#include "inputstringvalidator.h"

class PostfixCalculator : public QMainWindow
{
	Q_OBJECT

public:
	PostfixCalculator(QWidget *parent = 0);
	~PostfixCalculator();

private slots:
	/* Слот кнопки "Получить результат" */
	void execute();

private:
	/* Проверка корректности ввода */
	bool checkIfInputIsCorrect();
	/* Подсчет выражения */
	double calculate() throw(QString&);
	/* Проверка строки на целое число */
	bool isIntNumber(const QString &number);
	/* Проверка строки на вещественное число */
	bool isFloatNumber(const QString &number);
	/* Проверка строки на число */
	bool isNumber(const QString &number);
	/* Проверка строки на операцию */
	bool isOperation(const QString &operation);
	/* Очистка поля результата */
	void clearResult();

	Ui::PostfixCalculatorClass ui;
	QStringList input;
};

#endif // POSTFIXCALCULATOR_H

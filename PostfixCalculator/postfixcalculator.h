#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <QtWidgets/QMainWindow>
#include "ui_postfixcalculator.h"

class PostfixCalculator : public QMainWindow
{
	Q_OBJECT

public:
	PostfixCalculator(QWidget *parent = 0);
	~PostfixCalculator();

private:
	Ui::PostfixCalculatorClass ui;
};

#endif // POSTFIXCALCULATOR_H

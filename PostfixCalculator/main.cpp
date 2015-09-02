#include "postfixcalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PostfixCalculator w;
	w.show();
	return a.exec();
}

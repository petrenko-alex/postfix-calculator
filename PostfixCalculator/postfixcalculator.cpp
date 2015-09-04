#include "postfixcalculator.h"

PostfixCalculator::PostfixCalculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	/* Шрифт для строки результата */
	QFont resultFont("Yu Gothic UI Semilight", 20);
	resultFont.setBold(true);
	ui.result->setFont(resultFont);
	/* Соединяем сигнали и слоты */
	connect(ui.executeB, SIGNAL(clicked(bool)), SLOT(execute()));
	connect(ui.input, SIGNAL(returnPressed()), SLOT(execute()));
	/* Валидатор для строки ввода */
	QValidator *inputVal = new InputStringValidator(this);
	ui.input->setValidator(inputVal);
}

PostfixCalculator::~PostfixCalculator()
{

}

void PostfixCalculator::execute()
{
	clearResult();
	double result = -999;
	/* Считать данные из виджета */
	QString tmpInput = ui.input->text();
	if (!tmpInput.isEmpty())
	{
		input = tmpInput.split(" ");
	}
	else
	{
		QMessageBox::warning(this, "Некорректный ввод", "Строка ввода пуста. Пожалуйста, заполните строку.");
		return;
	}

	/* Если ввод корректен */
	if (checkIfInputIsCorrect())
	{
		/* Производим расчет */
		try
		{
			result = calculate();
		}
		catch (QString &errorString)
		{
			QMessageBox::warning(this, "Ошибка вычислений", errorString);
			return;
		}
		/* Выводим результат */
		ui.result->setText(QString::number(result));
	}
}

bool PostfixCalculator::checkIfInputIsCorrect()
{
	unsigned int operandsCounter = 0;
	bool operation = false;
	unsigned int size = input.size();

	for (int i = 0; i < size; ++i)
	{
		/* Если встретился операнд (число) */
		if (isNumber(input[i]))
		{
			++operandsCounter;
		}
		/* Если встретилась операция и для нее достаточно операндов */
		else if (isOperation(input[i]) && operandsCounter >= 2)
		{
			--operandsCounter;
			operation = true;
		}
		/* Если встретилась операция и для нее не достаточно операндов */
		else if (isOperation(input[i]) && operandsCounter < 2)
		{
			QString info = "Недостаточно операндов для операции \"" + input[i] + "\" на позиции " + QString::number(i+1) + ".";
			QMessageBox::warning(this, "Некорректный ввод", info);
			return false;
		}
		/* Если встретился неизвестный символ */
		else if (!isOperation(input[i]) && !isNumber(input[i]))
		{
			QString info = "Неизвестный символ \"" + input[i] + "\" на позиции " + QString::number(i + 1) + ".";
			QMessageBox::warning(this, "Некорректный ввод", info);
			return false;
		}
	}

	/* Проверка наличия операций */
	if (!operation)
	{
		QString info = "Не введены арифметические операции.";
		QMessageBox::warning(this, "Некорректный ввод", info);
		return false;
	}
	/* Проверка соответствия количества операндов и операций */
	if (operandsCounter > 1)
	{
		QString info = "Недостаточно операций для всех операндов.";
		QMessageBox::warning(this, "Некорректный ввод", info);
		return false;
	}
	return true;
}

double PostfixCalculator::calculate()
{
	double rightOperand = 0;
	double leftOperand = 0;
	double result = 0;
	int size = input.size();
	MyStack stack;

	for (int i = 0; i < size; ++i)
	{
		/* Если встретился операнд - число */
		if (isNumber(input[i]))
		{
			/* Помещаем его в стек */
			stack.push(input[i].toDouble());
		}
		else if (isOperation(input[i]))
		{
			/* Берем операнды из стека */
			rightOperand = stack.pop();
			leftOperand = stack.pop();
			/* Выполняем необходимую операцию */
			if (input[i] == "+")
			{
				result = leftOperand + rightOperand;
				stack.push(result);
			}
			else if (input[i] == "-")
			{
				result = leftOperand - rightOperand;
				stack.push(result);
			}
			else if (input[i] == "*")
			{
				result = leftOperand * rightOperand;
				stack.push(result);
			}
			else if (input[i] == "/")
			{
				if (rightOperand == 0)
				{
					QString errorString = "На позиции " + QString::number(i + 1) + " обнаружено деление на нуль.";
					throw errorString;
				}
				else
				{
					result = leftOperand / rightOperand;
					stack.push(result);
				}
			}
			else if (input[i] == "^")
			{
				result = pow(leftOperand, rightOperand);
				stack.push(result);
			}
		}
	}

	result = stack.pop();
	return result;
}

bool PostfixCalculator::isIntNumber(const QString &number)
{
	int strSize = number.size();
	int i = 0;

	/* Если строка пуста */
	if (strSize == 0)
		return false;

	/* На первом месте может быть + или - */
	if (number[0] == "+" || number[0] == "-")
	{
		/* Не может быть только знак + или - (без цифр) */
		if (strSize < 2)
			return false;

		i = 1;
	}

	/* Проверка оставшейся части строки на содержание только цифр  */
	for (; i < strSize; ++i)
	{
		/* Если i-ый символ строки - не цифра */
		if (!number[i].isDigit())
		{
			return false;
		}
	}
	return true;
}

bool PostfixCalculator::isFloatNumber(const QString &number)
{
	int strSize = number.size();
	int dotFlag = false;
	int i = 0;

	/* Если строка пуста */
	if (strSize == 0)
		return false;

	/* На первом месте может быть + или + */
	if (number[0] == "+" || number[0] == "-")
	{
		/* Не может быть только знак + или - (без цифр) */
		if (strSize < 2)
			return false;

		i = 1;
	}

	/* Проверка оставшейся части строки на содержание только цифр и 1 точки */
	for (; i < strSize; ++i)
	{
		/* Если i-ый символ строки - точка */
		if (number[i] == '.')
		{
			if (!dotFlag)
				dotFlag = true;
			else
				return false;
		}
		/* Если i-ый символ строки - не точка и не цифра */
		if (!number[i].isDigit() && number[i] != '.')
		{
			return false;
		}
	}
	return true;
}

bool PostfixCalculator::isNumber(const QString &number)
{
	return isIntNumber(number) || isFloatNumber(number);
}

bool PostfixCalculator::isOperation(const QString &operation)
{
	return operation == "+" || operation == "-" || operation == "*" || operation == "/" || operation == "^";
}

void PostfixCalculator::clearResult()
{
	ui.result->clear();
}

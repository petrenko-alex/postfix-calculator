#include "inputstringvalidator.h"

InputStringValidator::InputStringValidator(QObject *parent)
	: QValidator(parent)
{

}

InputStringValidator::~InputStringValidator()
{

}

QValidator::State InputStringValidator::validate(QString &input, int &pos) const
{
	for (int i = 0; i < input.length(); ++i)
	{
		if (!input[i].isDigit()
			&& input[i] != '+'
			&& input[i] != '-'
			&& input[i] != '*'
			&& input[i] != '/'
			&& input[i] != '^'
			&& input[i] != '.'
			&& input[i] != ' ')
		{
			return QValidator::Invalid;
		}
		
		
	}
	return QValidator::Acceptable;
}

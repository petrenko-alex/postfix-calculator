#ifndef INPUTSTRINGVALIDATOR_H
#define INPUTSTRINGVALIDATOR_H

#include <QValidator>

class InputStringValidator : public QValidator
{
	Q_OBJECT

public:
	InputStringValidator(QObject *parent);
	~InputStringValidator();
	QValidator::State validate(QString &input, int &pos) const;
};

#endif // INPUTSTRINGVALIDATOR_H

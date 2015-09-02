#ifndef ELEMENT_H
#define ELEMENT_H

/*!
 * Класс элемента стека
 */

template <typename T>
class Element
{
public:
	Element();
	Element(T value);
	~Element();

	/* Установить значение элемента */
	void setValue(T value);
	/* Получить значение элемента */
	T getValue();
	/* Установить указатель на следующий элемент */
	void setNextElement(Element<T> *next);
	/* Получить указатель на следующий элемент */
	Element<T>* getNextElement();

private:
	T value;					// Значение элемента стека
	Element<T> *nextElement;	// Указатель на следующий элемент стека
};

#endif // ELEMENT_H
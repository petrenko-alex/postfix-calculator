#ifndef CONTAINER_H
#define CONTAINER_H

#include "Element.h"

/*!
 * Класс стека на основе односвязного списка
 */
template <typename T>
class Container
{
public:
	Container();
	~Container();

	/* Поместить элемент на вершину стека */
	void push(T value);
	/* Удалить элемент с вершины стека */
	Element<T> pop();
	/* Проверить, пуст ли стек */
	bool isEmpty();

private:
	Element<T> *top;			// Указатель на вершину стека
	unsigned int size;			// Размер стека
};

#endif // CONTAINER_H


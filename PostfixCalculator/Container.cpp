#include "Container.h"

template <class T>
Container<T>::Container()
{
	size = 0;
	top = NULL;
}

template <class T>
Container<T>::~Container()
{
	size = 0;
	top = NULL;
}

template <class T>
void Container<T>::push(T value)
{
	/* Создаем новый элемент стека */
	Element<T> *newElement = new Element < T > ;
	/* Устанавливаем значение элемента стека */
	newElement->value = value;
	/* Устанавливаем связь текущей вершины с добавляемым элементом */
	top->getNextElement() = &element;
	/* Увеличиваем размер стека */
	++size;
}

template <class T>
Element<T> Container<T>::pop()
{
	if (top != NULL)
	{
		delete top;
		--size;
	}
}

template <class T>
bool Container<T>::isEmpty()
{
	return size == 0;
}

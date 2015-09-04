#ifndef MYSTACK_H
#define MYSTACK_H

/*
 * Класс стека на основе односвязного списка
 */

class MyStack
{
private:

	struct stackElement			// Структура - элемент стека
	{
		double value;			// Значение
		stackElement *next;		// Указатель на следующий элемент
	};

	stackElement *head;			// Указатель на вершину стека
	unsigned int size;			// Размер стека (кол-во элементов в нем)

public:
	/* Конструктор */
	MyStack();

	/* Деструктор */
	~MyStack();

	/* Поместить элемент на вершину стека */
	void push(double value);

	/* Изъять элемент с вершины стека */
	double pop();

	/* Получить элемент на вершине стека */
	double peek();

	/* Проверить стек на наличие в нем элементов */
	bool isEmpty();
};

#endif // MYSTACK_H
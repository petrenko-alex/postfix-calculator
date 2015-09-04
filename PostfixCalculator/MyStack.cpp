#include "MyStack.h"


MyStack::MyStack()
{
	size = 0;
	head = 0;
}


MyStack::~MyStack()
{
	while (size != 0)
	{
		pop();
	}
}

void MyStack::push(double value)
{
	/* Добавление первого элемента */
	if (size == 0)
	{
		head = new(stackElement);
		head->value = value;
		head->next = 0;
		size = 1;
	}
	/* Добавление остальных элементов */
	else
	{
		++size;
		stackElement *tmp = head;
		head = new(stackElement);
		head->next = tmp;
		head->value = value;
	}
}

double MyStack::pop()
{
	if (size != 0)
	{
		stackElement * tmp = head;
		double toReturn = head->value;
		head = head->next;
		delete tmp;
		--size;

		return toReturn;
	}
}

double MyStack::peek()
{
	if (size != 0)
	{
		return head->value;
	}
}

bool MyStack::isEmpty()
{
	return size == 0;
}

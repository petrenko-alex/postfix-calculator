#include "Element.h"

template <typename T>
Element<T>::Element()
{
	this->value		  = 0;
	this->nextElement = NULL;
}

template <typename T>
Element<T>::~Element()
{
}


template <typename T>
Element<T>::Element(T value)
{
	this->value		  = value;
	this->nextElement = NULL;
}


template <typename T>
void Element<T>::setValue(T value)
{
	this->value = value;
}


template <typename T>
T Element<T>::getValue()
{
	return this->value;
}


template <typename T>
void Element<T>::setNextElement(Element<T> *next)
{
	this->nextElement = next;
}

template <typename T>
Element<T>* Element<T>::getNextElement()
{
	return this->nextElement;
}

#include "stdafx.h"

template <class T> class node
{
private:
	T value;
	node* next;

public:
	node(T startingVal) : value = startingVal, next = NULL{};
};

template <class T> class linkedList
{
private:
	node<T>* head;

public:
	linkedList() : head = NULL;
	
	void push(T val)
	{
		node* y = new node(val);
		y->next = head;
		head = y;
	}
};
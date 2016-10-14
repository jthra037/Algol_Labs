#include "stdafx.h"

template <class T> class Node
{
private:
	T value;
	Node* next;

public:
	Node(T startingVal) : value = startingVal, next = NULL{};
};

template <class T> class linkedList
{
private:
	Node<T>* head;

public:
	linkedList() : head = NULL;
	
	void push(T val)
	{
		Node<T>* y = new Node<T>(val);
		y->next = head;
		head = y;
	}


};
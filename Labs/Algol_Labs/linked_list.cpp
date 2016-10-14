#include "stdafx.h"

template <class T> class Node
{
private:
	T value;
	Node* next;

public:
	Node(T startingVal) : value = startingVal, next = NULL{};
};

template <class T> class LinkedList
{
private:
	Node<T>* head;

public:
	LinkedList() : head = NULL;
	
	void push(T val)
	{
		Node<T>* y = new Node<T>(val);
		y->next = head;
		head = y;
	}

	void pushBack(T val)
	{
		Node<T>* present = head;
		Node<T>* y = new Node(val);

		if (present == NULL)
			head = y;
		else
			while (present->next != NULL)
				present = present->next;
		present->next = y;
	}

	void printList()
	{
		Node<T>* present = head;
		while (present != NULL)
		{
			cout << present->data << " ";
			present = present->next;
		}
		cout << endl;
	}

	void insert(T val, Node<T>&  target)
	{
		Node<T> y = new Node(val);
		y.next = target.next;
		target.next = &y;
	}

	void addInOrder(T val) // Comparisons will be occurring and I will need to come up with answers for other Types
	{
		Node<T>* present = head;
		Node<T>* previous = NULL;

		while ((present->data <= val) || (present != NULL))
		{
			previous = present;
			present = present->next;
		}

		insert(val, previous);
	}
};
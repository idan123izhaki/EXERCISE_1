#include <iostream>
#include "stack.hpp"

Stack::Stack() : head(nullptr), currentSize(0) {}


bool Stack::isEmpty() const
{
	return (this->head == nullptr);
}

void Stack::push(int data)
{
	Node* newElement = new Node(data);
	if (!(this->head))
		this->head = newElement;
	else
	{
		newElement->setNext(this->head);
		this->head = newElement;
	}
	currentSize++;
}

int Stack::pop()
{
	int popElement = -1;
	if (!(this->isEmpty()))
	{
		Node* temp = this->head;
		this->head = temp->getNext();
		temp->setNext(nullptr);
		popElement = temp->getData();
		this->currentSize--;
		delete temp;
	}
	else
		std::cout << "The stack is empty! (from pop function)" << std::endl;
	
	return popElement;
}


int Stack::top() const
{
	int topElement = -1;
	if (this->isEmpty())
		std::cout << "The stack is empty! (from top function)" << std::endl;
	else
		topElement = this->head->getData();
	return topElement;
}

std::ostream& operator<<(std::ostream& os, const Stack s)
{
	if (s.head)
	{
		os << "The stack elements (from the top): ";
		Node* temp = s.head;
		while (temp)
		{
			os << temp->getData() << " ";
			temp = temp->getNext();

		}
		std::cout << std::endl;
	}
	else
		os << "The stack is empty! (from the << operator)" << std::endl;
	return os;
}

int Stack::getSize() const
{
	return this->currentSize;
}

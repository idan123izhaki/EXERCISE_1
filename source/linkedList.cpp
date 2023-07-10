#include<iostream>
#include "linkedList.hpp"

//using initialization list
LinkedList::LinkedList() : head(nullptr) {}

//Adds a node to the end of the linked list
void LinkedList::add(int data)
{
	Node* newNode = new Node(data);
	if (this->isEmpty())
		this->head = newNode;
	else
	{
		Node* current = this->head;
		while (current->getNext())
			current = current->getNext();
		current->setNext(newNode);
	}
}


// remove the last node from the linked list
int LinkedList::remove()
{
	int dataRemoved = -1;
	if (!(this->isEmpty()))
	{
		if (this->head->getNext() == nullptr)
		{
			dataRemoved = this->head->getData();
			delete this->head;
			this->head = nullptr;
		}
		else
		{
			Node* temp = this->head;
			while (temp->getNext()->getNext())
				temp = temp->getNext();
			Node* removeItem = temp->getNext();
			temp->setNext(nullptr);
			dataRemoved = removeItem->getData();
			delete removeItem;
		}
		std::cout << "removed " << dataRemoved << " from the linked list." << std::endl;
	}
	else
		std::cout << "The linked list is empty, there are no nodes to remove..." << std::endl;
	return dataRemoved;
}


//if the linked list empty- return true, else return false
bool LinkedList::isEmpty() const
{
	return (this->head == nullptr);
}



//print all the data in the linked list- from the head
void LinkedList::printItems() const
{
	if (!(this->isEmpty()))
	{
		std::cout << "The linked list data (from head): ";
		Node* temp = this->head;
		while (temp)
		{
			std::cout << temp->getData() << " ";
			temp = temp->getNext();
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "The linked list is empty, there are no nodes to print..." << std::endl;
	}
}
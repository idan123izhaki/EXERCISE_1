#include<iostream>
#include"node.hpp"


Node::Node(int data)
{
	this->data = data;
	this->next = nullptr;
}

int Node::getData() const
{
	return this->data;
}
void Node::setData(int data)
{
	this->data = data;
}

Node* Node::getNext() const
{
	return this->next;
}

void Node::setNext(Node* newNext)
{
	this->next = newNext;
}
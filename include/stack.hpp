#pragma once
#include "node.hpp"
#include<iostream>

class Stack
{
	Node* head;
	int currentSize;

public:
	Stack();
	void push(int);
	int pop();
	int top() const;
	int getSize() const;
	bool isEmpty() const;
	friend std::ostream& operator<<(std::ostream&, const Stack);
};
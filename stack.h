#pragma once
#include "Node.h"
#include<iostream>
using namespace std;

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
	friend ostream& operator<<(ostream&, const Stack);
};
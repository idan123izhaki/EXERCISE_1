#pragma once
#include "stack.hpp"

class Queue
{
	Stack s1;
	Stack s2;
	int queueSize;
public:
	Queue();
	void enqueue(int);
	int dequeue();
	int headQ();
	int sizeQ() const;
	bool isEmpty() const;
	friend std::ostream& operator<<(std::ostream&, Queue*);
};
#pragma once
#include "stack.h"
using namespace std;
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
	friend ostream& operator<<(ostream&, Queue*);
};
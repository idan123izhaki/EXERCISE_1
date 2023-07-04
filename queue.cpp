#include<iostream>
#include "queue.h"
using namespace std;

Queue::Queue() : queueSize(0) {}


void Queue::enqueue(int data)
{
	s1.push(data);
	queueSize++;
}

int Queue::dequeue()
{
	int removeItem = -1;
	int size = this->queueSize;
	if (size > 0)
	{
		while (size > 1)
		{
			s2.push(s1.pop());
			size--;
		}
		removeItem = s1.pop();
		while (!(s2.isEmpty()))
			s1.push(s2.pop());
		(this->queueSize)--;
	}
	else
		cout << "The queue is empty! (from the dequeue function)." << endl;

	return removeItem;
}

int Queue::headQ()
{
	int headItem;
	int size = this->queueSize;
	if (size > 0)
	{
		while ((size--) > 1)
			s2.push(s1.pop());
		headItem = s1.top();
		while (!(s2.isEmpty()))
			s1.push(s2.pop());
	}
	else
	{
		cout << "The queue is empty! (from the headQ function)." << endl;
		headItem = -1;
	}
	return headItem;
}

int Queue::sizeQ() const
{
	return this->queueSize;
}

bool Queue::isEmpty() const
{
	return (this->queueSize == 0);
}

ostream& operator<<(ostream& os, Queue* q)
{
	os << "Queue elements: ";
	int size = q->sizeQ();
	while (size > 0)
	{
		os << q->headQ() << " ";
		q->enqueue(q->dequeue());
		size--;
	}
	os << endl;
	return os;
}

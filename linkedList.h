#pragma once
#include "node.h"

class LinkedList {
	Node* head;

public:
	LinkedList();
	void add(int);
	int remove();
	bool isEmpty() const;
	void printItems() const;
};
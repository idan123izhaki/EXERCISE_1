#pragma once
//implements a node in a linked list.
class Node {
	int data;
	Node* next;
	
public:
	Node(int);
	int getData() const;
	void setData(int);
	Node* getNext() const;
	void setNext(Node*);
};

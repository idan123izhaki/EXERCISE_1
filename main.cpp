#include<iostream>
#include "linkedList.h"
#include "stack.h"
#include "queue.h"

#define SIZE_ARRAY 6
using namespace std;

void reverse(int*, int);
void printArray(int*, int);

int main()
{
	//task_1_1
	cout << "task_1_1" << endl;
	LinkedList lst;
	lst.add(5);
	lst.add(7);
	lst.add(6);
	lst.add(9);
	lst.printItems();
	lst.remove();
	lst.remove();
	lst.printItems();
	lst.add(15);
	lst.printItems();

	//task_1_2
	cout << "\ntask_1_2" << endl;
	Stack stack;
	stack.push(20);
	stack.push(50);
	stack.push(35);
	stack.push(14);
	cout << stack;
	stack.pop();
	stack.pop();
	cout << stack;
	stack.pop();
	stack.pop();
	stack.pop();
	cout << stack;

	//task_1_3
	cout << "\ntask_1_3" << endl;
	int arr [SIZE_ARRAY] = { 1, 2, 3, 5, 8, 12 };
	printArray(arr, SIZE_ARRAY);
	reverse(arr, SIZE_ARRAY);
	printArray(arr, SIZE_ARRAY);

	cout << "Please enter 10 integer numbers:" << endl;
	int cin_arr[10];
	for (int i = 0; i < 10; i++)
		cin >> cin_arr[i];
	printArray(cin_arr, 10);
	reverse(cin_arr, 10);
	printArray(cin_arr, 10);


	//task_2
	cout << "\ntask_2" << endl;
	Queue q;
	q.enqueue(8);
	q.enqueue(6);
	q.enqueue(17);
	q.enqueue(2);
	q.enqueue(15);
	cout << "After insert to queue: " << &q;
	cout << "The size of the queue is:" << q.sizeQ() << endl;
	q.dequeue();
	q.dequeue();
	cout << "After removing two numbers from the queue: " << &q;
	cout << "The size of the queue is:" << q.sizeQ() << endl;
	cout << "The head in the queue is: " << q.headQ() << endl;

	//task_3
	//mergeSort.cpp file + text file.
	return 0;
}

//task_1_3
void reverse(int* nums, int size)
{
	Stack tempStack;
	int i = 0;
	while (i < size) 
		tempStack.push(nums[i++]);
	i = 0;
	while (i < size)
		nums[i++] = tempStack.pop();
}

void printArray(int* nums, int size)
{
	cout << "Array elements: ";
	for (int i = 0; i < size; i++)
		cout << nums[i] << " ";
	cout << endl;
}
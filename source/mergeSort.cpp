////task_3
//#include <iostream>
//
//void merge(int* leftArr, int* rightArr, int* arr, int size)
//{
//	int leftSize = size / 2;
//	int rightSize = size - leftSize;
//	int i = 0, l = 0, r = 0;
//	while (l < leftSize && r < rightSize)
//	{
//		if (leftArr[l] < rightArr[r])
//		{
//			arr[i] = leftArr[l];
//			i++;
//			l++;
//		}
//		else
//		{
//			arr[i] = rightArr[r];
//			i++;
//			r++;
//		}
//	}
//	while (l < leftSize)
//	{
//		arr[i] = leftArr[l];
//		i++;
//		l++;
//	}
//	while (r < rightSize)
//	{
//		arr[i] = rightArr[r];
//		i++;
//		r++;
//	}
//}
//
//void mergeSort(int* arr, int size)
//{
//	if (size <= 1)
//		return;
//	int mid = size / 2;
//	int* leftArr = new int[mid];
//	int* rightArr = new int[size - mid];
//	int i = 0, j = 0;
//	for (; i < size; i++)
//	{
//		if (i < mid)
//			leftArr[i] = arr[i];
//		else
//		{
//			rightArr[j] = arr[i];
//			j++;
//		}
//			
//	}
//	mergeSort(leftArr, mid);
//	mergeSort(rightArr, size - mid);
//	merge(leftArr, rightArr, arr, size);
//}
//
//
//void printArray(int* array, int size)
//{
//	std::cout << "Printing the array: ";
//	for (int i = 0; i < size; i++)
//		std::cout << array[i] << " ";
//	std::cout << std::endl;
//}
//
//int main()
//{
//	int arr[] = { 0, 6, 9, 2, 4, 1, 5, 8, 3, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printArray(arr, size);
//	mergeSort(arr,size);
//	printArray(arr, size);
//	return 0;
//}
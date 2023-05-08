#pragma once
#ifndef HEAPSORT_H
#define HEAPSORT_H

class HeapSort
{
private:
	int* arr;
	int size;
	void heapify(int arr[], int n, int i);
public:
	HeapSort(int size);
	~HeapSort();
	void print();
	void heapSort();
};


#endif // !HEAPSORT_H



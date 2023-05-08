#pragma once
#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort
{
private:
	int* arr;
	int size;
public:
	QuickSort(int size);
	~QuickSort();
	void print();
	void quickSort(int l, int r);
};

#endif // !QUICKSORT_H




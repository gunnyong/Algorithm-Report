#pragma once
#ifndef MERGESORT_H
#define MERGESORT_H

class MergeSort
{
private:
	int* arr;
	int size;
	void merge(int left, int mid, int right);
public:
	MergeSort(int size);
	~MergeSort();
	void print();
	void mergeSort(int left, int right);
};

#endif // !MERGESORT_H
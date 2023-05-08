#pragma once
#ifndef ETCSORT_H
#define ETCSORT_H

class EtcSort
{
private:
	int* arr;
	int size;
public:
	EtcSort(int size);
	~EtcSort();
	void print();
	void bubbleSort();
	void insertionSort();
	void selecitonSort();
};

#endif // !#ETCSORT_H
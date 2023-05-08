#include "QuickSort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

QuickSort::QuickSort(int size)
{
	this->size = size;
	arr = new int[size];
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j])
				i--;
		}
	}
} // 1 ~ 100���� ���� ��� 20�� ����, �ߺ� ���� �����Ѵ�.

QuickSort::~QuickSort()
{
	cout << "������ �迭 ����";
	delete[] arr;
}

void QuickSort::print()
{
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

void QuickSort::quickSort(int l, int r)
{
	int i = l; //�迭 �ε����� ó��
	int j = r; //�迭 �ε����� ��
	int pivot = arr[(i + j) / 2];

	while (i <= j) {
		while (arr[i] < pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

	if (l < j) {
		quickSort(l, j);
	}
	
	if (i < r) {
		quickSort(i, r);
	}
}
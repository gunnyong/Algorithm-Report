#include "QuickSort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//생성자 구현부
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
} // 1 ~ 100까지 랜덤 상수 20개 생성, 중복 값은 제외한다.

//소멸자 구현부
QuickSort::~QuickSort()
{
	cout << "생성된 배열 삭제";
	delete[] arr;
}

//배열 출력 함수 구현부
void QuickSort::print()
{
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

//퀵 정렬 함수 구현부
void QuickSort::quickSort(int l, int r)
{
	int i = l;
	int j = r;
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

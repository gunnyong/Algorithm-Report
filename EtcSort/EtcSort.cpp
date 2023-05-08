#include "EtcSort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

EtcSort::EtcSort(int size)
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

EtcSort::~EtcSort()
{
	delete[] arr;
}

void EtcSort::print()
{
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

void EtcSort::bubbleSort()
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

void EtcSort::insertionSort()
{
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void EtcSort::selecitonSort()
{
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}

		swap(arr[min], arr[i]);
	}
}

int main() {
	EtcSort arr1(20);

	cout << "생성된 배열: ";
	arr1.print();

	cout << "배열을 정렬합니다.(Bubble Sort)" << endl;
	arr1.bubbleSort();

	cout << "정렬된 배열: ";
	arr1.print();

	cout << endl;

	EtcSort arr2(20);

	cout << "생성된 배열: ";
	arr2.print();

	cout << "배열을 정렬합니다.(Insertion Sort)" << endl;
	arr2.insertionSort();

	cout << "정렬된 배열: ";
	arr2.print();

	cout << endl;

	EtcSort arr3(20);

	cout << "생성된 배열: ";
	arr3.print();

	cout << "배열을 정렬합니다.(Selection Sort)" << endl;
	arr3.selecitonSort();

	cout << "정렬된 배열: ";
	arr3.print();
}
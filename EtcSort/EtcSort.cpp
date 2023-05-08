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
} // 1 ~ 100���� ���� ��� 20�� ����, �ߺ� ���� �����Ѵ�.

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

	cout << "������ �迭: ";
	arr1.print();

	cout << "�迭�� �����մϴ�.(Bubble Sort)" << endl;
	arr1.bubbleSort();

	cout << "���ĵ� �迭: ";
	arr1.print();

	cout << endl;

	EtcSort arr2(20);

	cout << "������ �迭: ";
	arr2.print();

	cout << "�迭�� �����մϴ�.(Insertion Sort)" << endl;
	arr2.insertionSort();

	cout << "���ĵ� �迭: ";
	arr2.print();

	cout << endl;

	EtcSort arr3(20);

	cout << "������ �迭: ";
	arr3.print();

	cout << "�迭�� �����մϴ�.(Selection Sort)" << endl;
	arr3.selecitonSort();

	cout << "���ĵ� �迭: ";
	arr3.print();
}
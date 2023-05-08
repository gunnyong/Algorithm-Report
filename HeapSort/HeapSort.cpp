#include "HeapSort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void HeapSort::heapify(int arr[], int n, int i)
{
	int largest = i; //root
	int left = i * 2 + 1; //left child
	int right = i * 2 + 2; //right child

	if (left<n && arr[left]>arr[largest])
		largest = left;

	if (right<n && arr[right]>arr[largest])
		largest = right;

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

HeapSort::HeapSort(int size)
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
}

HeapSort::~HeapSort()
{
	cout << "생성된 배열 삭제";
	delete[] arr;
}

void HeapSort::print()
{
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

void HeapSort::heapSort()
{
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(arr, size, i);

	for (int i = size - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main() {
	HeapSort arr(20);

	cout << "생성된 배열: ";
	arr.print();

	cout << "배열을 정렬합니다.(Heap Sort)" << endl;
	arr.heapSort();

	cout << "정렬된 배열: ";
	arr.print();
}

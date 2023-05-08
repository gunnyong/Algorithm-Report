#include "MergeSort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void MergeSort::merge(int left, int mid, int right)
{
	int* temp = new int[right - left + 1];
	int i = left, j = mid + 1, k = 0;

	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
		}
	}

	while (i <= mid) {
		temp[k++] = arr[i++];
	}

	while (j <= right) {
		temp[k++] = arr[j++];
	}

	for (int idx = 0; idx < k; idx++) {
		arr[left + idx] = temp[idx];
	}

	delete[] temp;
}

MergeSort::MergeSort(int size)
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

MergeSort::~MergeSort()
{
	cout << "������ �迭 ����";
	delete[] arr;
}

void MergeSort::print()
{
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

void MergeSort::mergeSort(int left, int right)
{
	if (left < right) {
		int mid = (left + right) / 2;

		mergeSort(left, mid);
		mergeSort(mid + 1, right);

		merge(left, mid, right);
	}
}

int main() {
	MergeSort arr(20);

	cout << "������ �迭: ";
	arr.print();

	cout << "�迭�� �����մϴ�.(Merge Sort)" << endl;
	arr.mergeSort(0, 19);

	cout << "���ĵ� �迭: ";
	arr.print();
}

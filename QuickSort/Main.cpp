#include <iostream>
#include "QuickSort.h"

using namespace std;

int main() {
	QuickSort arr(20);

	cout << "������ �迭: ";
	arr.print();

	cout << "�迭�� �����մϴ�.(Quick Sort)" << endl;
	arr.quickSort(0, 19);

	cout << "���ĵ� �迭: ";
	arr.print();
}

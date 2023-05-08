#include "EtcSort.h"
#include <iostream>

using namespace std;

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

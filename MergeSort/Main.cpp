#include "MergeSort.h"
#include <iostream>

using namespace std;

int main() {
	MergeSort arr(20);

	cout << "생성된 배열: ";
	arr.print();

	cout << "배열을 정렬합니다.(Merge Sort)" << endl;
	arr.mergeSort(0, 19);

	cout << "정렬된 배열: ";
	arr.print();
}

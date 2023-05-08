#include <iostream>
#include "QuickSort.h"

using namespace std;

int main() {
	QuickSort arr(20);

	cout << "생성된 배열: ";
	arr.print();

	cout << "배열을 정렬합니다.(Quick Sort)" << endl;
	arr.quickSort(0, 19);

	cout << "정렬된 배열: ";
	arr.print();
}

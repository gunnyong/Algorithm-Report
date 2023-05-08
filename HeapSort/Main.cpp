#include "HeapSort.h"
#include <iostream>

using namespace std;

int main() {
	HeapSort arr(20);

	cout << "생성된 배열: ";
	arr.print();

	cout << "배열을 정렬합니다.(Heap Sort)" << endl;
	arr.heapSort();

	cout << "정렬된 배열: ";
	arr.print();
}

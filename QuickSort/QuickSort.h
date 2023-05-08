#pragma once
#ifndef QUICKSORT_H
#define QUICKSORT_H

//클래스 선언부
class QuickSort
{
private:
	//멤버 변수 선언
	int* arr; //정수형 배열
	int size; //배열 크기
public:
	QuickSort(int size); //생성자
	~QuickSort(); //소멸자
	void print(); //배열 출력 함수
	void quickSort(int l, int r); //퀵 정렬 함수
};

#endif // !QUICKSORT_H




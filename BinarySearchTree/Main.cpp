#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    BinarySearchTree bst;
    srand((unsigned)time(nullptr));
    int randomNumbers[20];
    for (int i = 0; i < 20; i++) {
        randomNumbers[i] = rand() % 100 + 1;
    } //1 ~ 100까지 랜덤 상수 20개 생성

    cout << "생성된 배열: [ ";
    for (int i = 0; i < 20; i++) {
        cout << randomNumbers[i] << " ";
    }
    cout << "]" << endl;

    //배열을 이진 트리에 삽입하여 이진 트리 생성
    for (int i = 0; i < 20; i++) {
        bst.insert(randomNumbers[i]);
    }
    
    //이진 트리에서 값 검색
    int valueToSearch;
    cout << "검색할 값을 입력하시오: ";
    cin >> valueToSearch;
    if (bst.search(valueToSearch)) {
        cout << valueToSearch << "은(는) 트리 안에 있는 값입니다." << endl;
    } else {
        cout << valueToSearch << "은(는) 트리 안에 없습니다." << endl;
    }

    //이진 트리에서 값 삭제
    int valueToDelete;
    cout << "삭제할 값을 입력하시오: ";
    cin >> valueToDelete;
    bst.remove(valueToDelete);
    cout << valueToDelete << "를 삭제했습니다: " << endl;
    if (bst.search(valueToDelete)) {
        cout << valueToDelete << "가 여전히 트리에 있습니다." << endl;
    } else {
        cout << valueToDelete << "가 트리에 없습니다." << endl;
    }

    return 0;
}

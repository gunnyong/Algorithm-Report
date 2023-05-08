#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand((unsigned)time(nullptr));

    // Generate 20 random numbers and insert them into the binary search tree
    BinarySearchTree bst;
    int randomNumbers[20];
    for (int i = 0; i < 20; i++) {
        randomNumbers[i] = rand() % 100 + 1;
    }

    cout << "New Array: [ ";
    for (int i = 0; i < 20; i++) {
        cout << randomNumbers[i] << " ";
    }
    cout << "]" << endl;

    for (int i = 0; i < 20; i++) {
        bst.insert(randomNumbers[i]);
    }

    // Search for some values in the tree
    int valueToSearch = 10;
    if (bst.search(valueToSearch)) {
        cout << valueToSearch << " is in the tree" << endl;
    } else {
        cout << valueToSearch << " is not in the tree" << endl;
    }

    // Delete some values from the tree
    int valueToDelete = 7;
    bst.remove(valueToDelete);
    cout << "After deleting " << valueToDelete << ": " << endl;
    if (bst.search(valueToDelete)) {
        cout << valueToDelete << " is still in the tree" << endl;
    } else {
        cout << valueToDelete << " is no longer in the tree" << endl;
    }

    return 0;
}

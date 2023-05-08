#pragma once
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class BinarySearchTree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int value) : data(value), left(nullptr), right(nullptr) {}
    };
    Node* root;

public:
    BinarySearchTree();
    ~BinarySearchTree();
    bool search(int value);
    void insert(int value);
    void remove(int value);

private:
    void destroySubtree(Node* node);
    bool searchHelper(Node* node, int value);
    void insertHelper(Node*& node, int value);
    void removeHelper(Node*& node, int value);
    Node* findMinNode(Node* node);
};

#endif // !BINARYSEARCHTREE_H


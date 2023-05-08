#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree() {
    destroySubtree(root);
}

void BinarySearchTree::destroySubtree(Node* node) {
    if (node != nullptr) {
        destroySubtree(node->left);
        destroySubtree(node->right);
        delete node;
    }
}

bool BinarySearchTree::search(int value) {
    return searchHelper(root, value);
}

bool BinarySearchTree::searchHelper(Node* node, int value) {
    if (node == nullptr) {
        return false;
    }
    else if (node->data == value) {
        return true;
    }
    else if (value < node->data) {
        return searchHelper(node->left, value);
    }
    else {
        return searchHelper(node->right, value);
    }
}

void BinarySearchTree::insert(int value) {
    insertHelper(root, value);
}

void BinarySearchTree::insertHelper(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    }
    else if (value < node->data) {
        insertHelper(node->left, value);
    }
    else {
        insertHelper(node->right, value);
    }
}

void BinarySearchTree::remove(int value) {
    removeHelper(root, value);
}

void BinarySearchTree::removeHelper(Node*& node, int value) {
    if (node == nullptr) {
        return;
    }
    else if (value < node->data) {
        removeHelper(node->left, value);
    }
    else if (value > node->data) {
        removeHelper(node->right, value);
    }
    else {
        if (node->left == nullptr && node->right == nullptr) {
            delete node;
            node = nullptr;
        }
        else if (node->left == nullptr) {
            Node* temp = node;
            node = node->right;
            delete temp;
        }
        else if (node->right == nullptr) {
            Node* temp = node;
            node = node->left;
            delete temp;
        }
        else {
            Node* minRightNode = findMinNode(node->right);
            node->data = minRightNode->data;
            removeHelper(node->right, minRightNode->data);
        }
    }
}

BinarySearchTree::Node* BinarySearchTree::findMinNode(Node* node) {
    if (node->left == nullptr) {
        return node;
    }
    else {
        return findMinNode(node->left);
    }
}
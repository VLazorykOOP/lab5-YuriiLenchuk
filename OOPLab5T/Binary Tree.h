#pragma once
#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (root == nullptr) {
            root = newNode;
            return;
        }

        Node* current = root;
        while (true) {
            if (val == current->value) {
                cout << "Value already exists in the tree." << endl;
                return;
            }
            if (val < current->value) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    return;
                }
                else {
                    current = current->left;
                }
            }
            else {
                if (current->right == nullptr) {
                    current->right = newNode;
                    return;
                }
                else {
                    current = current->right;
                }
            }
        }
    }

    void inorderTraversal(Node* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->value << " ";
            inorderTraversal(node->right);
        }
    }

    void preorderTraversal(Node* node) {
        if (node != nullptr) {
            cout << node->value << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    void postorderTraversal(Node* node) {
        if (node != nullptr) {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->value << " ";
        }
    }
};
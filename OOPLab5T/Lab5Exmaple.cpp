#include <iostream>
#include "Point.h"
#include "Binary Tree.h"
#include "String.h"
#include "Pair.h"
using namespace std;

void Task1() {
    Point p(1.0, 2.0);
    p.print();

    Ellipse e(3.0, 4.0, 5.0, 6.0);
    e.print();
    cout << "Area: " << e.area() << endl;

    Circle c(7.0, 8.0, 9.0);
    c.print();
    cout << "Area: " << c.area() << endl;

    return;
}

void Task2() {
        BinaryTree tree;
        tree.insert(5);
        tree.insert(3);
        tree.insert(7);
        tree.insert(2);
        tree.insert(4);
        tree.insert(6);
        tree.insert(8);

        cout << "Inorder Traversal: ";
        tree.inorderTraversal(tree.root);
        cout << endl;

        cout << "Preorder Traversal: ";
        tree.preorderTraversal(tree.root);
        cout << endl;

        cout << "Postorder Traversal: ";
        tree.postorderTraversal(tree.root);
        cout << endl;

        return;
}

void Task3() {
    String str("Hello world!");
    cout << str << endl;

    DigitString digitStr("12345");
    cout << digitStr << endl;

    DigitString digitStr2("abcde");
    cout << digitStr2 << endl;

    DigitString digitStr3(digitStr);
    cout << digitStr3 << endl;

    DigitString digitStr4;
    cin >> digitStr4;
    cout << digitStr4 << endl;

    digitStr4 = digitStr3;
    cout << digitStr4 << endl;

    return;
}

void Task4() {
    Rational a(1, 2);
    Rational b(3, 4);
    Rational c = a + b;
    Rational d = a - b;
    Rational e = a * b;
    Rational f = a / b;
    Rational g(c);

    cout << "a = ";
    a.print();
    cout << endl;

    cout << "b = ";
    b.print();
    cout << endl;

    cout << "a + b = ";
    c.print();
    cout << endl;

    cout << "a - b = ";
    d.print();
    cout << endl;

    cout << "a * b = ";
    e.print();
    cout << endl;

    cout << "a / b = ";
    f.print();
    cout << endl;

    cout << "g = ";
    g.print();
    cout << endl;

    Rational h(5, 6);
    g = move(h);

    cout << "g = ";
    g.print();
    cout << endl;

    return;
}

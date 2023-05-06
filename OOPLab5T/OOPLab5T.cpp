// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

// Ваші файли загловки 
//
#include "Lab5Exmaple.h"
int main()
{
    std::cout << " Lab #5  !\n";

    char ch = '5';
    do {
        system("cls");
        cout << "1 Task1\n";
        cout << "2 Task2\n";
        cout << "3 Task3\n";

        ch = cin.get();

        cin.get();

        switch (ch) {
        case '1': Task1();   break;
        case '2': Task2();   break;
        case '3': Task3();   break;
        case '4': return 0;
        }
        cout << " Press any key and enter\n";
        ch = cin.get();
    } while (ch != '4');

    return 0;
}

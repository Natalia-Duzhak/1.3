//Source.cpp
#include <Windows.h> 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double N;
    Money a, b, c;
   

    cout << "Ввід першої кількості номіналів:" << endl;
    a.Read();
    a.toString();
    cout << "Ввід другої кількості номіналів:" << endl;
    b.Read();
    b.toString();
    cout << "Вивід сум i номіналів:" << endl;
    a.Display();
    cout << "Додавання сум." << endl;
    a.Add(b);
    a.toString();
    cout << "Вивід результату додавання сум:" << endl;
    a.Display();
    cout << "Віднімання сум." << endl;
    a.Sub(b);
    a.toString();
    cout << "Вивід результату віднімання сум:" << endl;
    a.Display();
    cout << "множник = ";
    cin >> N;
    cout << "Множення суми на дробове число." << endl;
    a.Dob(b, N);
    a.toString();
    cout << "Вивід результату множення суми на дробове число:" << endl;
    a.Display();
    return 0;
}
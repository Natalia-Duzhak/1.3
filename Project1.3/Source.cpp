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
   

    cout << "��� ����� ������� �������:" << endl;
    a.Read();
    a.toString();
    cout << "��� ����� ������� �������:" << endl;
    b.Read();
    b.toString();
    cout << "���� ��� i �������:" << endl;
    a.Display();
    cout << "��������� ���." << endl;
    a.Add(b);
    a.toString();
    cout << "���� ���������� ��������� ���:" << endl;
    a.Display();
    cout << "³������� ���." << endl;
    a.Sub(b);
    a.toString();
    cout << "���� ���������� �������� ���:" << endl;
    a.Display();
    cout << "������� = ";
    cin >> N;
    cout << "�������� ���� �� ������� �����." << endl;
    a.Dob(b, N);
    a.toString();
    cout << "���� ���������� �������� ���� �� ������� �����:" << endl;
    a.Display();
    return 0;
}
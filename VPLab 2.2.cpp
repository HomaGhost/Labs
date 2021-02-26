#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "Введите значения длин сторон треугольника "<< endl;
	cout << "Введите значение стороны a: ";
	cin >> a;
	cout << "Введите значение стороны b: ";
	cin >> b;
	cout << "Введите значение стороны c: ";
	cin >> c;
	if (a == b && b == c)
		cout << "Треугольник является равностороонним " << endl;
	else
		cout << "Треугольник не является равносторонним "<<endl;
	system("pause");
    return 0;
}


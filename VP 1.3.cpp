#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int Xnum;
	cout << "Введите трёхзначное число: ";
	cin >> Xnum;
	int Lastnum = Xnum % 10;
	Xnum = Xnum - Lastnum;
	Xnum = Xnum / 10;
	Xnum += Lastnum * 100;
	cout << "Конечное число N= " << Xnum << endl;
	Lastnum = 0;
	int Nnum;
	cout << "Введите число N в промежутке от числа 10 до числа 999 включительно, при том, что число десятков не рано 0: ";
	cin >> Nnum;
	if (Nnum > 999 || Nnum < 10)
	{
		cout << "Ваше число не подходит по условию";
		return 0;
	}
	bool lever=true;
	if (Nnum / 100 != 0)
	{
		cout << "Ваше число:" << Nnum << "Трёхзначное " << endl;
		lever = false;
	}
	else
	
		cout << "Ваше число:" << Nnum << " Двузначное" << endl;
	
	if (lever == false)
	{
		Lastnum = Nnum % 10;
		cout << Lastnum<<endl;
		Nnum=Nnum / 10;
		cout << Nnum<<endl;
	}
	Nnum = Lastnum * 100 + Nnum;
	cout << Nnum<<endl;


	system("pause");
	return 0;
}
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int HundrednumX;
	cout << "Введите трёхзначное число: ";
	cin >> HundrednumX;
	int Lastnum = HundrednumX % 10;
	HundrednumX = HundrednumX / 10;
	HundrednumX += Lastnum * 100;
	cout << "Конечное число N= " << HundrednumX << endl;
	Lastnum = 0;
	int numN;
	cout << "Введите число N в промежутке от числа 10 до числа 999 включительно, при том, что число десятков не рано 0: ";
	cin >> numN;
	if (numN > 999 || numN < 10)
	{
		cout << "Ваше число не подходит по условию";
		return 0;
	}
	bool lever = true;
	int Firstnum=0;
	if (numN / 100 != 0)
	{
		cout << "Ваше число:" << numN << " Трёхзначное " << endl;
		lever = false;
	}
	else

		cout << "Ваше число:" << numN << " Двузначное" << endl;

	if (lever == false)
	{
		Firstnum = numN /100;
		numN = (numN % 100)* 10 + Firstnum;
		
	}
	cout <<"Обратный результат: "<< numN << endl;


	system("pause");
	return 0;
}
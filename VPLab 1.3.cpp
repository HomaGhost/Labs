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
	cout << "������� ���������� �����: ";
	cin >> HundrednumX;
	int Lastnum = HundrednumX % 10;
	HundrednumX = HundrednumX / 10;
	HundrednumX += Lastnum * 100;
	cout << "�������� ����� N= " << HundrednumX << endl;
	Lastnum = 0;
	int numN;
	cout << "������� ����� N � ���������� �� ����� 10 �� ����� 999 ������������, ��� ���, ��� ����� �������� �� ���� 0: ";
	cin >> numN;
	if (numN > 999 || numN < 10)
	{
		cout << "���� ����� �� �������� �� �������";
		return 0;
	}
	bool lever = true;
	int Firstnum=0;
	if (numN / 100 != 0)
	{
		cout << "���� �����:" << numN << " ���������� " << endl;
		lever = false;
	}
	else

		cout << "���� �����:" << numN << " ����������" << endl;

	if (lever == false)
	{
		Firstnum = numN /100;
		numN = (numN % 100)* 10 + Firstnum;
		
	}
	cout <<"�������� ���������: "<< numN << endl;


	system("pause");
	return 0;
}
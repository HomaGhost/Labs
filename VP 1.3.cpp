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
	cout << "������� ���������� �����: ";
	cin >> Xnum;
	int Lastnum = Xnum % 10;
	Xnum = Xnum - Lastnum;
	Xnum = Xnum / 10;
	Xnum += Lastnum * 100;
	cout << "�������� ����� N= " << Xnum << endl;
	Lastnum = 0;
	int Nnum;
	cout << "������� ����� N � ���������� �� ����� 10 �� ����� 999 ������������, ��� ���, ��� ����� �������� �� ���� 0: ";
	cin >> Nnum;
	if (Nnum > 999 || Nnum < 10)
	{
		cout << "���� ����� �� �������� �� �������";
		return 0;
	}
	bool lever=true;
	if (Nnum / 100 != 0)
	{
		cout << "���� �����:" << Nnum << "���������� " << endl;
		lever = false;
	}
	else
	
		cout << "���� �����:" << Nnum << " ����������" << endl;
	
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
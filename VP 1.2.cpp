// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int const A = 40, B = 3.5, rangeS = 87;
	int rangeRev, Time;
	int FlowSpeed = A + B;
	int FlowSpeedRev = A - B;
	Time = rangeS / (A + B);
	rangeRev = (A - B)*Time;
	cout << "����������, ���������� ������ ������� " << rangeRev<< endl;
	system("pause");
	return 0;
}


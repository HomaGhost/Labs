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
	double const BoatSpeed = 40, StreamSpeed = 3.5, MaxRange = 87;
	double MinRange, Time;
	double WithStreamSpeed = BoatSpeed + StreamSpeed;
	double AgainstStream = BoatSpeed - StreamSpeed;
	Time = MaxRange / (BoatSpeed + StreamSpeed);
	MinRange = (BoatSpeed - StreamSpeed)*Time;
	cout << "����������, ���������� ������ ������� " << MinRange << endl;
	system("pause");
	return 0;
}


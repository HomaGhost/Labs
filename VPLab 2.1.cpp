


#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double Time;
	cout << "������� ����� ����� ���� � �������: ";
	cin >> Time;
	if (Time < 2)
		cout << "���� �� �������" << endl;
	if (Time >= 2 && Time < 3)
		cout << "���� ������� �������"<< endl;
	if (Time >= 3 && Time < 5)
		cout << "���� ������� � �������"<< endl;
	if (Time >= 5 &&Time <= 8)
		cout << "���� ������� �������"<<endl;
	if (Time > 8)
		cout << "���� ����������"<<endl;
	system("pause");
    return 0;
}


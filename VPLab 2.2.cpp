#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "������� �������� ���� ������ ������������ "<< endl;
	cout << "������� �������� ������� a: ";
	cin >> a;
	cout << "������� �������� ������� b: ";
	cin >> b;
	cout << "������� �������� ������� c: ";
	cin >> c;
	if (a == b && b == c)
		cout << "����������� �������� ��������������� " << endl;
	else
		cout << "����������� �� �������� �������������� "<<endl;
	system("pause");
    return 0;
}


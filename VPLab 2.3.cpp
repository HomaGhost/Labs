#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int birthyear, birthmonth, birthday, year, month, day;
	cout << "������� ���� "<<endl;
	cout << "������� ����: ";
	cin >> day;
	cout << "������� �����: ";
	cin >> month;
	cout << "������� ���: ";
	cin >> year;
	cout << "������� ���� �������� ��������: ";
	cin >> birthday;
	cout << "������� ����� �������� ��������: ";
	cin >> birthmonth;
	cout << "������� ��� �������� ��������: ";
	cin >> birthyear;
	int personAge = year-birthyear;
	cout << month << endl;
	if (day< birthday)
		month = month - 1;
	cout << month << endl;
	if (month < birthmonth)
		personAge = personAge - 1;
	
	cout << "�������� "<<personAge<< " ���"<<endl;
	system("pause");
    return 0;
}


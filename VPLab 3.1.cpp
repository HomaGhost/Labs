#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num,buf,begin;
	bool compositenum = false;
	cout <<"������� �����: " <<endl;
	cin >> num;
	if (num == 1 || num == -1 || num==0)
	{
		cout << "����� " << num << " �� �������� �� �������, �� ��������� " << endl;
		system("pause");
		return 0;
	}
	buf = num;
	if (num > 0)
	{
		begin = 2;
		while (begin < num)
		{
			if (num%begin == 0)
			{
				compositenum = true;
				break;
			}
			begin++;
		}
	}
	else
	{
		begin = -2;
		while (begin > num)
		{
			if (num%begin == 0)
			{
				compositenum = true;
				break;
			}
			
			begin--;
		}
	}
	if (compositenum == true)
		cout << "����� " << num << " �������� ��������� " << endl;
	else
		cout << "����� " << num <<" �������� ������� "<<endl;
	system("pause");
	return 0;
}


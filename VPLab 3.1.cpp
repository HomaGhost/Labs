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
	cout <<"Введите число: " <<endl;
	cin >> num;
	if (num == 1 || num == -1 || num==0)
	{
		cout << "Число " << num << " не является ни простым, ни составным " << endl;
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
		cout << "Число " << num << " является составным " << endl;
	else
		cout << "Число " << num <<" является простым "<<endl;
	system("pause");
	return 0;
}


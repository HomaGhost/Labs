#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int FullNum;
	cout << "¬ведите трЄхзначное число: ";
	cin >> FullNum;
	int FirstUnit = FullNum / 100;
	int LastUnit = FullNum % 100;
	int FullNumEdited = (LastUnit * 10) + FirstUnit;
	cout << FullNumEdited << endl;
	system("pause");
	return 0;
}


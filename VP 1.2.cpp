
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
	cout << "Ââåäèòå òð¸õçíà÷íîå ÷èñëî: ";
	cin >> FullNum;
	int FirstNum = FullNum / 100;
	int SecondNum= FullNum % 100;
	int FullNumEdited = (SecondNum * 10) + FirstNum;
	cout << FullNumEdited<<endl;
	system("pause");
    return 0;
}


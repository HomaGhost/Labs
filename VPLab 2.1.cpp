


#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double Time;
	cout << "¬ведите врем€ варки €йца в минутах: ";
	cin >> Time;
	if (Time < 2)
		cout << "яйцо не сварено" << endl;
	if (Time >= 2 && Time < 3)
		cout << "яйцо сварено всм€тку"<< endl;
	if (Time >= 3 && Time < 5)
		cout << "яйцо сварено в мешочек"<< endl;
	if (Time >= 5 &&Time <= 8)
		cout << "яйцо сварено вкрутую"<<endl;
	if (Time > 8)
		cout << "яйцо несъедобно"<<endl;
	system("pause");
    return 0;
}


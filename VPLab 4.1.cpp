// VPLab 5.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int carcount=0, motocount=0, carprice=0, motoprice=0, carsum=0, motosum=0, counter=1;
	cout << "Введите количество автомобилей:" << endl;
	cin >> carcount;
	cout << "Введите стоимость автомобилей(не ниже 5000)"<<endl;
	while (counter <= carcount)
	{
		cout << "Стоимость " << counter << "-го автомобиля"<<endl;
		cin >> carprice;
		if (carprice < 5000)
		{
			cout << "Стоимость автомобиля не может быть ниже 5000"<<endl;
			system("pause");
			return 0;
		}
		carsum += carprice;
		++counter;
	}
	cout << "Введите количество мотоциклов:" << endl;
	counter = 1;
	cin >> motocount;
	cout << "Введите стоимость мотоциклов(не выше 5000)" << endl;

	while (counter <= motocount)
	{
		cout << "Стоимость " << counter << "-го мотоцикла"<<endl;
		cin >> motoprice;
		if (motoprice > 5000)
		{
			cout << "Стоимость мотоцикла не может быть выше 5000" << endl;
			system("pause");
			return 0;
		}
		motosum += motoprice;
		++counter;
	}
	carsum=carsum / carcount;
	motosum = (motosum / motocount);
	cout <<"Средняя стоимость автомобилей: "<< carsum<<endl;
	cout <<"Средняя стоимость мотоциклов: "<< motosum << endl;
	motosum = motosum * 3;
	if (carsum > motosum)
		cout << "Верно. Средняя стоимость авто превышает стоимость мотоциклов в 3 раза"<<endl;
	else
		cout<< "Неверно. Средняя стоимость авто не превышает стоимость мотоциклов в 3 раза"<<endl;
	system("pause");
    return 0;
}


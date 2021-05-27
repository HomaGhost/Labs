#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;


int main()
{
	srand(time(0)); // автоматическая рандомизация
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 30, m = 2;
	int sum = 0;

	int** Mas = new int* [n];
	for (int i = 0; i < n; ++i) {
		Mas[i] = new int[m];
	}

	//объём
	for (int i = 0; i < n; i++)
	{
		Mas[i][0] = rand() % 120;
	}

	//цена
	for (int i = 0; i < n; i++)
	{
		Mas[i][1] = rand() % 10;
	}

	cout << "Таблица: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4); cout << Mas[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		if (Mas[i][0] > 100) sum += Mas[i][1];
	}

	if (sum == 0) {
		cout << "Нет авто с объёмом >100";
		exit(1);
	}

	cout << "Сумма всех авто объёмом >100: " << sum;

	for (int i = 0; i < n; i++) {
		delete[] Mas[i];
	}
	delete[] Mas;
	return 0;
}
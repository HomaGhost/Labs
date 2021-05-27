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

	int n, m, z;
	bool flag1 = false, flag2 = false;

	cout << "Введите количество строк и столбцов\n";
	cin >> n >> m;


	int** arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[m];
	}

	cout << "Введите массив" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "\nТаблица: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(3); cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] % 7 == 0) {
				flag1 = true;
				cout << "Координаты 1го числа кратного 7: " << i + 1 << " " << j + 1;				
				break;
			}

		}
	}

	if (flag1 == false) {
		cout << "Нет чисел делящихся на 7" << endl;
	}
	cout << "\n";

	cout << "Введите z: ";
	cin >> z;

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = m - 1; j > 0; j--)
		{
			if (arr[i][j] > z) {
				cout << i + 1 << " " << j + 1;
				flag2 = true;
				break;
			}
		}
	}

	if (flag2 == false) {
		cout << "Нет чисел больше z" << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
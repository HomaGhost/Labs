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
	int n, size2 = 0;
	int m = 0;
	cout << "Bведите размер массива: ";
	cin >> n;

	//находим размер 2го массива
	for (int i = 1; i < n; i++) {
		size2 += i;
	}

	int* arr2 = new int[size2];

	int** arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[n];
	}

	//cout << "Введите массив" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	cout << "\nМассив: \n";

	//вывод
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(2); cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "Получаем следующую последовательность: ";
	for (int i = 1; i < n; i++) {

		for (int j = 0; j < i; j++)
		{
			arr2[m] = arr[i][j];
			cout << arr2[m] << " ";
			++m;

		}

	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	delete[] arr2;
	return 0;
}
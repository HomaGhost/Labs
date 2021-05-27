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

	int n = 20;
	int max1 = 0, max2 = 0, max3 = 0;
	int num1, num2, num3;

	//cin >> n;

	int* arr = new int[n];
	int* arr2 = new int[n];

	//cout << "Введите массив" << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << "\nРезультаты команд: \n";

	//вывод
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max1) {
			max1 = arr[i];
			num1 = i;
		}
	}

	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[num1] = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr2[i] > max2) {
			max2 = arr2[i];
			num2 = i;
		}
	}
	arr2[num2] = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr2[i] > max3) {
			max3 = arr2[i];
			num3 = i;
		}
	}
	arr2[num3] = 0;
	cout << "\n1st " << num1 + 1 << " team " << endl;
	cout << "2nd " << num2 + 1 << " team " << endl;
	cout << "3rd " << num3 + 1 << " team " << endl;
	return 0;
}
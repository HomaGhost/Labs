#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* arr, size, buf = 0, a, index = -1;
	cout << "Введите размер: ";
	cin >> size;
	arr = new int[size];
	cout << "Введите числа: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "Наш массив: \n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < size - 1; i++) {
		for (int k = 0; k < size - 1; k++)
			if (arr[k] < arr[k + 1])
			{
				buf = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = buf;
			}
	}
	cout << "Упорядоченный массив: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "Введите число а: ";
	cin >> a;
	for (int i = 0; i < size; i++) {
		if (arr[i] < a) {
			index = i; break;
		}
	}
	if (index == -1) {
		cout << "Нет чисел меньше а!";
		exit(1);
	}
	for (int i = index; i < size; i++) {
		if (arr[i] < a) cout << arr[i] << " ";
	}
	return 0;
}
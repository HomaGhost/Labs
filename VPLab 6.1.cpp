#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* arr, size, sum = 0, sumkv = 0, sumopr = 0, ot, ido;
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
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	for (int i = 0; i < size; i++) {
		sumkv += pow(arr[i], 2);
	}
	cout << "\nВведите с какого и по какой элемент находить сумму (k1 и k2):\n";
	cin >> ot >> ido;
	for (int i = ot - 1; i < ido; i++) {
		sumopr += arr[i];
	}
	cout << "Сумма всех элементов массива равна " << sum << endl;
	cout << "Сумма квадратов всех элементов массива равна " << sumkv << endl;
	cout << "Сумма от k1 до k2 элементов массива равна " << sumopr << endl;;
	delete[] arr;
}
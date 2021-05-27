#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;


int maxch(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) { max = arr[i]; }
	}
	return max;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* arr, size;
	cout << "Введите размер: ";
	cin >> size;
	arr = new int[size];
	cout << "Введите числа: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "Макимальное число: ";
	cout << maxch(arr, size);
	delete[] arr;
}
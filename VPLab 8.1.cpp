#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	int arr[20];
	ifstream find("info.txt");
	for (int i = 0; i < 20; i++) {
		find >> arr[i];
	}
	find.close();
	cout << "array ";
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nSet new numbers: \n";
	for (int i = 2; i < 20; i += 3) {
		cin >> arr[i];
	}
	cout << "new array ";
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

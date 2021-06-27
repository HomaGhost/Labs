#include <iostream>
#include <Windows.h>

using namespace std;

#include "Header.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	House street;
	cin >> street;
	cout << endl << street << endl;
	street.search(street);
	street.sort(street);
	cout << street;

	cin.get();
	return 0;
}
#include <windows.h>

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "homes.h"
#include "iohomes.h"

int main(int argc, char* argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char FileName[100];
	cout << "From which file to enter data?" << endl;
	cin.getline(FileName, sizeof(FileName));

	HOUSE House;

	ifstream fin(FileName);

	if (fin.is_open()) {
		fin >> House;
		fin.close();
		House.sort();
		cout << House;
	}
	else {
		cout << "File " << FileName << " not found" << endl;
	}
	system("pause");
	return 0;
}
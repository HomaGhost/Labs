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
	//int a1, a2;
	cout << "From which file to enter data?" << endl;
	cin.getline(FileName, sizeof(FileName));

	STREET Street;

	ifstream fin(FileName);

	if (fin.is_open()) {
		fin >> Street;
		fin.close();
		Street.sort();
		//cout << Street;
	//n:
		cout << Street;
		//cout << "What file should the data be output to?" << endl;
		//cin.getline(FileName, sizeof(FileName));
		//ofstream fout(FileName);
		//if (fout.is_open()) {
		//	fout << Street;
		//	fout.close();
		//	cout << "Data output to file " << FileName << endl;
		//}
		//else {
		//	cout << "Error writing to file " << FileName << endl;
		//	
		//}
		//goto n; // XZ why
	}
	else {
		cout << "File " << FileName << " not found" << endl;
	}
	system("pause");
	return 0;
}
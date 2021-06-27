#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	string str;
	int buf[7];
	int size = 7;
	bool flag = 0;

	ifstream fin("info2.txt");

	for (int i = 0; i < size; i++) {
		fin >> buf[i];
	}
	fin.close();

	for (int i = 0; i < size; i++) {
		cout << buf[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size - 1; i++) {
		if (buf[i] == 100) {
			buf[i + 1] = 100;
			flag = 1;
			break;
		}

	}
	for (int i = 0; i < size; i++) {
		cout << buf[i] << " ";
	}
	if (flag == 0) {
		cout << "There are no 100 elements";
	}

	ofstream fout("SomeText.txt");

	for (int i = 0; i < size; i++) {
		fout << buf[i] << " ";
	}

	return 0;
}

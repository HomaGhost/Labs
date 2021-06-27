#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int kolvostrok = 0, numstr=0;
	bool flag = 0;

	ifstream fin("info3.txt");

	if (!fin)
	{
		cerr << "File could not be opened for reading!" << endl;
		exit(1);
	}

	while (fin)
	{
		string str;
		getline(fin, str);
		cout << str << endl;
		kolvostrok++;
		if (str[0] == 'T' && flag == 0) {
			numstr = kolvostrok;
			flag = 1;
		}
	}
	cout << "Первый раз элемент Т в " << numstr << "-ой строке";

	return 0;
}

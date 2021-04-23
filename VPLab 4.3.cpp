#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str1, str2;
	int symbolcount1 = 0, symbolcount2 = 0;
	cout << "Введите первую строку: " << endl;
	cin >> str1;
	cout << "Введите вторую строку: " << endl;
	cin >> str2;
	symbolcount1 = str1.length();
	symbolcount2 = str2.length();
	cout << str1 << endl;
	cout << str2 << endl;
	str2.replace(0, symbolcount1, str1, 0, symbolcount2);
	cout << str2 << endl;
	system("pause");
	return 0;
}
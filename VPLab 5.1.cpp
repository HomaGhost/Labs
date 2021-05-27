#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
//1 задача

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str1, str2;
	cout << "Введите первую строку:" << endl;
	getline(cin, str1);
	cout << "Введите вторую строку:" << endl;
	getline(cin, str2);
	if (str1 == str2) {
		cout << "Строки одинаковые";
		exit(1);
	}

	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] == str2[i]) {
			continue;
		}
		cout << "Количество одинаковых первых символов: " << i;
		break;
	}


	return 0;
}
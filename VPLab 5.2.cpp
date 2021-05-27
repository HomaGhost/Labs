#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;


int main() {
	string predlojenie;
	int fprob = 0, lprob = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите предложение:" << endl;
	getline(cin, predlojenie);

	for (int i = 0; i < predlojenie.size(); i++) {
		if (predlojenie[i] == ' ') {
			fprob = i;
			break;
		}
	}
	//первый пробел

	for (int i = predlojenie.size(); i > 0; i--) {
		if (predlojenie[i] == ' ') {
			lprob = i;
			break;
		}
	}
	//последний пробел
	if (lprob == 0) {
		cout << "Введено только одно слово";
		exit(1);
	}

	for (int i = lprob + 1; i < predlojenie.size(); i++) {
		cout << predlojenie[i];
	}
	for (int i = fprob; i < lprob + 1; i++) {
		cout << predlojenie[i];
	}
	for (int i = 0; i < fprob; i++) {
		cout << predlojenie[i];
	}
	return 0;
}
﻿#include <iostream>
#include <Windows.h>


using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	int PID;
	cout << "Введите PID процесса:  " << endl;
	cin >> PID;

	HANDLE pr = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);
	cout << "Введите код приоритета процесса, на который хотите изменить:\n 1 - низкий\n 2 - ниже среднего\n 3 - выше среднего\n 4 - высокий\n";
	int code;
	cin >> code;
	switch (code) {

	default:
		if (SetPriorityClass(pr, IDLE_PRIORITY_CLASS) == TRUE) {
			cout << "Приоритет процесса изменён" << endl;
		}
		else cout << "Приоритет процесса изменить не удалось" << endl;
		break;

	case 1:
		if (SetPriorityClass(pr, BELOW_NORMAL_PRIORITY_CLASS) == TRUE) {
			cout << "Приоритет процесса изменён" << endl;
		}
		else cout << "Приоритет процесса изменить не удалось" << endl;
		break;

	case 2:
		if (SetPriorityClass(pr, NORMAL_PRIORITY_CLASS) == TRUE) {
			cout << "Приоритет процесса изменён" << endl;
		}
		else cout << "Приоритет процесса изменить не удалось" << endl;
		break;

	case 3:
		if (SetPriorityClass(pr, ABOVE_NORMAL_PRIORITY_CLASS) == TRUE) {
			cout << "Приоритет процесса изменён" << endl;
		}
		else cout << "Приоритет процесса изменить не удалось" << endl;
		break;

	case 4:
		if (SetPriorityClass(pr, REALTIME_PRIORITY_CLASS) == TRUE) {
			cout << "Приоритет процесса изменён" << endl;
		}
		else cout << "Приоритет процесса изменить не удалось" << endl;
		break;
	}

	system("pause");
	return 0;
}
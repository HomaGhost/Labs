#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int birthyear, birthmonth, birthday, year, month, day;
	cout << "¬ведите дату "<<endl;
	cout << "¬ведите день: ";
	cin >> day;
	cout << "¬ведите мес€ц: ";
	cin >> month;
	cout << "¬ведите год: ";
	cin >> year;
	cout << "¬ведите день рождени€ человека: ";
	cin >> birthday;
	cout << "¬ведите мес€ц рождени€ человека: ";
	cin >> birthmonth;
	cout << "¬ведите год рождени€ человека: ";
	cin >> birthyear;
	int personAge = year-birthyear;
	cout << month << endl;
	if (day< birthday)
		month = month - 1;
	cout << month << endl;
	if (month < birthmonth)
		personAge = personAge - 1;
	
	cout << "„еловеку "<<personAge<< " лет"<<endl;
	system("pause");
    return 0;
}


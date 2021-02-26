// ConsoleApplication4.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int const A = 40, B = 3.5, rangeS = 87;
	int rangeRev, Time;
	int FlowSpeed = A + B;
	int FlowSpeedRev = A - B;
	Time = rangeS / (A + B);
	rangeRev = (A - B)*Time;
	cout << "Ðàññòîÿíèå, ïðîéäåííîå ïðîòèâ òå÷åíèÿ " << rangeRev<< endl;
	system("pause");
	return 0;
}


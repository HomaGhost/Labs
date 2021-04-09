#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double sportsmensprogram1pts=0, sportsmensprogram2pts=0, sportsmensprogram3pts=0, sportmenspts =0, allprogram1pts=0, allprogram2pts=0,allprogram3pts=0, middlesportsmenspts=0;
	int sportsmenscount, counter=1;
	cout << "¬ведите кол-во спортсменов: "<<endl;
	cin >> sportsmenscount;
	cout << "¬ведите через пробел количество баллов, которые спортсмен набрал за 3 дисциплины:"<<endl;
	while (counter <= sportsmenscount)
	{
		cin >> sportsmensprogram1pts >> sportsmensprogram2pts >> sportsmensprogram3pts;
		sportmenspts += sportsmensprogram1pts + sportsmensprogram2pts + sportsmensprogram3pts;
		middlesportsmenspts = sportmenspts / 3;
		sportmenspts = 0;
		cout << "—реднее кол-во баллов спортсмена є"<< counter<<" = "<< middlesportsmenspts <<endl;
		middlesportsmenspts = 0;
		allprogram1pts += sportsmensprogram1pts;
		allprogram2pts += sportsmensprogram2pts;
		allprogram3pts += sportsmensprogram3pts;
		counter++;
	}
	allprogram1pts = allprogram1pts / sportsmenscount;
	allprogram2pts = allprogram2pts / sportsmenscount;
	allprogram3pts = allprogram3pts / sportsmenscount;
	cout << "—реднее кол-во баллов набранных по каждой из трЄх дисциплин: "<< allprogram1pts<<" : " << allprogram2pts<<" : " << allprogram3pts <<endl;

	system("pause");
    return 0;
}


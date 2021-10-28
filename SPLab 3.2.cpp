
#include <iostream>
#include <windows.h>

using namespace std;
struct ForBeep {
	DWORD Freq;
	DWORD Duration;
	DWORD Pause;
};

DWORD WINAPI BeepMusic(LPVOID param)
{
	while (true)
	{
		ForBeep* forbeep = (ForBeep*)param;
		Beep(forbeep->Freq, forbeep->Duration);
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	ForBeep forbeep;
	HANDLE hThread;
	DWORD ThreadID;

	int menu;
	bool exitcheck = true, pausecheck = true;
	cout << "Ввод частоты произведения" << endl;
	cin >> forbeep.Freq;
	cout << "Длительность произведения звуков" << endl;
	cin >> forbeep.Duration;

	hThread = CreateThread(NULL, 0, BeepMusic, (void*)&forbeep, NULL, &ThreadID);
	if (hThread == NULL)
	{
		cout << "error" << GetLastError()<<endl;
		return 1;
	}
	system("cls");
	while (exitcheck)
	{
		cout << "Пауза" << endl;
			cout << "Выход" << endl;
			cin >> menu;
			if (menu == 1 && pausecheck == true)
			{
				SuspendThread(hThread);
				pausecheck = false;
			}
			else if (pausecheck == false && menu == 1)
			{
				ResumeThread(hThread);
				pausecheck = true;
			}
			else
			{
				return 0;
			}
			system("cls");
	}
	return 0;
}


// Lab 3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;
DWORD WINAPI WorkerThread(LPVOID param)
{
    short u = 1;
    while (u<=30)
    {
        cout << u << " ";
        u++;
    }
    return -1;
}

int main()
{
    HANDLE hThread;
    DWORD ThreadID;
    DWORD Num = 1;  
        hThread = CreateThread(NULL, 0, WorkerThread, (void*)&Num, NULL, &ThreadID);
        if (!CreateThread(NULL, 0, WorkerThread, (void*)&Num, NULL, &ThreadID))
        {
            cerr << ERROR;
            return -1;
        }

    system("pause");
    return 0;
}

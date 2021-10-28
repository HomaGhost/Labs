// Lab 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;
DWORD WINAPI WorkerThread(LPVOID param)
{
    while (true)
    {
        cout << *((int*)param) << " ";
    }
}

int main()
{
    HANDLE hThread, hThread2, hThread3;
    DWORD ThreadID, ThreadID2, ThreadID3;
    DWORD Num = 1, Num2 = 2, Num3 = 3;
    hThread = CreateThread(NULL, 0, WorkerThread, (void*)&Num, NULL, &ThreadID);
    if (hThread == NULL)
    {
        cout << "Error" << GetLastError() << endl;
        return -1;
    }
  
    hThread2 = CreateThread(NULL, 0, WorkerThread, (void*)&Num2, NULL, &ThreadID2);
        if (hThread2 == NULL)
        {
            cout << "Error2" << GetLastError() << endl;
            return -2;
        }
       
        hThread3 = CreateThread(NULL, 0, WorkerThread, (void*)&Num3, NULL, &ThreadID3);
        if (hThread3 == NULL)
        {
            cout << "Error3" << GetLastError() << endl;
            return -3;
        }
        
        system("pause");
        return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

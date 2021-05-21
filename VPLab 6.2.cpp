
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    cout << "Вветите размерность массива" << endl;
    cin >> N;
    int* mas = new int[N];
    //задание массива
    for (int i = 0; i < N; ++i)
    {
        cout << "arr[" << i << "]= ";
        cin >> mas[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (mas[j] < mas[j + 1]) {
                // меняем элементы местами
                swap(mas[j], mas[j + 1]);
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        cout << mas[i]<<" ";
    }
    '\n';
    int a, counter=0;
    cout << "Введите заданное число a: " << endl;
    cin >> a;
    cout << "Числа меньшие a: ";
    for (int i = 0; i < N; ++i)
    {
        if(mas[i]<a)
        {
            cout << mas[i] << " ";
            ++counter;
        }
    }
    if (counter == 0)
        cout << "Нет чисел меньших, чем a"<<endl;
    counter = 0;
    cout << "Числа большие a: ";
    for (int i = 0; i < N; ++i)
    {

        if (mas[i] > a)
        {
            cout << mas[i] << " ";
            ++counter;
        }
    }
    if (counter == 0)
        cout << "Нет чисел больших, чем a" << endl;
}

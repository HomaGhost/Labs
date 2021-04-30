#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    cout << "Вветите размерность массива"<<endl;
    cin >> N;
    int *mas= new int [N];
    //задание массива
    for (int i=0; i<=N; ++i) 
    {
        cout << "arr[" <<i<<"]= ";
        cin >> mas[i];
    }
    int sum = 0;
    //подсчёт суммы
    for (int i = 0; i <= N; ++i)
    {
        sum += mas[i];
    }
    cout << "Сумма всех элементов= " << sum << endl;
    sum = 0;
    //сумма квадратов
    for (int i = 0; i <= N; ++i)
    {
      sum+= mas[i]*mas[i];
 
    }
    cout << "Сумма квадратов= " << sum << endl;
    //сумма элементов от k1 до k2
    sum = 0;
    int k1, k2;
    cout << "Введите номера первого и последнего элемента в массиве: "<<endl;
    cin >> k1 >> k2;
    for ( int i=k1; i<= k2; ++i)
    {
            sum += mas[i];
    }
    cout << "Сумма с k1 по k2 элемент= " << sum << endl;

  
}

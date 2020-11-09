#include <iostream>
#include<locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int* arr;
	int N;

	cout << "N =";
	cin >> N;
	// Массив
	arr = new int[N];
	for (int i = 0; i < N; ++i)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
	int k = 0;
	int buf=0;
	//Преобразование
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 0)
		{
			for (int j = i; j > k; j--)
			{
				arr[j] = arr[j - 1];
				arr[j-1] = 0;
			}
			k++;
			
		}
		
	}
	for (int i = 0; i < N; i++) 
	{
	cout << arr[i] << " ";
	}

	return 0;
}

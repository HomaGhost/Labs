// VPLab 5.1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int carcount=0, motocount=0, carprice=0, motoprice=0, carsum=0, motosum=0, counter=1;
	cout << "������� ���������� �����������:" << endl;
	cin >> carcount;
	cout << "������� ��������� �����������(�� ���� 5000)"<<endl;
	while (counter <= carcount)
	{
		cout << "��������� " << counter << "-�� ����������"<<endl;
		cin >> carprice;
		if (carprice < 5000)
		{
			cout << "��������� ���������� �� ����� ���� ���� 5000"<<endl;
			system("pause");
			return 0;
		}
		carsum += carprice;
		++counter;
	}
	cout << "������� ���������� ����������:" << endl;
	counter = 1;
	cin >> motocount;
	cout << "������� ��������� ����������(�� ���� 5000)" << endl;

	while (counter <= motocount)
	{
		cout << "��������� " << counter << "-�� ���������"<<endl;
		cin >> motoprice;
		if (motoprice > 5000)
		{
			cout << "��������� ��������� �� ����� ���� ���� 5000" << endl;
			system("pause");
			return 0;
		}
		motosum += motoprice;
		++counter;
	}
	carsum=carsum / carcount;
	motosum = (motosum / motocount);
	cout <<"������� ��������� �����������: "<< carsum<<endl;
	cout <<"������� ��������� ����������: "<< motosum << endl;
	motosum = motosum * 3;
	if (carsum > motosum)
		cout << "�����. ������� ��������� ���� ��������� ��������� ���������� � 3 ����"<<endl;
	else
		cout<< "�������. ������� ��������� ���� �� ��������� ��������� ���������� � 3 ����"<<endl;
	system("pause");
    return 0;
}


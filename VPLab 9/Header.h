#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Flat {
	int room;
public:
	int number;
	friend istream& operator>>(istream& in, Flat& flat);
	friend ostream& operator<<(ostream& out, Flat& flat);
	friend bool operator >(Flat flat1, int t);
	friend bool operator <(Flat flat1, Flat flat2);
};

class House {
	int N;
	Flat flat[100];
public:
	friend istream& operator>>(istream& in, House& street);
	friend ostream& operator<<(ostream& out, House& street);
	void search(House street);
	void sort(House& street);
};


#include "Header.h"

istream& operator>>(istream& in, House& house) {

	cout << "Введите кол-во квартир в доме: ";
	in >> house.N;

	for (int i = 0; i < house.N; i++) {
		cout << "Введите кол-во комнат в квартире №" << i + 1 << ": ";
		house.flat[i].number = i + 1;
		in >> house.flat[i];
	}
	return in;
}

ostream& operator<<(ostream& out, House& house) {
	cout << "Кол-во квартир в доме: " << house.N << endl;
	for (int i = 0; i < house.N; i++) {
		cout << "Кол-во комнат в квартире №" << house.flat[i].number << ": " << house.flat[i] << endl;
	}
	return out;
}

istream& operator>>(istream& in, Flat& flat) {
	in >> flat.room;
	return in;
}

ostream& operator<<(ostream& out, Flat& flat) {
	out << flat.room;
	return out;
}

bool operator >(Flat flat1, int t) {
	bool bo = (flat1.room > t);
	return bo;
}

bool operator <(Flat flat1, Flat flat2) {
	bool bo = (flat1.room < flat2.room);
	return bo;
}

void House::search(House house) {
	int buf[2];
	cout << "Введите диапазон комнат для поиска: \n"; cin >> buf[0] >> buf[1];
	bool bo = 0, buff = 0;
	for (int i = 0; i < house.N; i++) {
		if (house.flat[i] > buf[0] && !(house.flat[i] > buf[1])				//(a,b) a>b
			|| !(house.flat[i] > buf[0]) && house.flat[i] > buf[1]) {		//(b,a) b>a
			buff = 1;
			if (bo == 0)cout << "Квартиры из заданного диапазона:\n";
			cout << "Дом №" << i + 1 << "\t" << house.flat[i] << endl; bo = 1;
		}
	}
	if (buff == 0)cout << "Квартиры из заданого диапазона не найдены\n";
}

void House::sort(House& house) {
	cout << "			Сортировка: \n";
	for (int i = 0; i < house.N; i++) {
		for (int j = 0; j < house.N - 1; j++) {
			if (house.flat[j] < house.flat[j + 1]) {
				swap(house.flat[j], house.flat[j + 1]);
			}
		}
	}
}
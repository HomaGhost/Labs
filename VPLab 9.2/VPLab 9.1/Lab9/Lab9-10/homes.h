#ifndef HOMES_H
#define HOMES_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class FLAT {
public:
	int Floor;
	int Number;
	int Rooms;
	string type;
	int special_data;
	friend bool operator<(FLAT Home1, FLAT Home2);
	friend ostream& operator<<(ostream& out, FLAT& Home);
	friend istream& operator>>(istream& in, FLAT& Home);
};

class LITTLEFLAT : public FLAT {
public:
	
};

class MEDIUMFLAT : virtual public FLAT {
public:
	
};

class BIGFLAT : virtual public FLAT {
public:
	
};

class VERYBIGFLAT : virtual public FLAT {
public:

};

class HOUSE
{
protected:
	string Name;
	
	vector<FLAT> Flats;
	vector<FLAT> Flatslist = Flats;
public:
	virtual void sort();
	friend ostream& operator<<(ostream& out, HOUSE Street);
	friend istream& operator>>(istream& in, HOUSE& Street);
};

#endif

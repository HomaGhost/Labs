#ifndef HOMES_H
#define HOMES_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class HOME {
public:
	int Corpus;
	int Number;
	int Flats;
	string type;
	int special_data;
	friend bool operator<(HOME Home1, HOME Home2);
	//ostream& print(ostream& out);
	friend ostream& operator<<(ostream& out, HOME& Home);
	friend istream& operator>>(istream& in, HOME& Home);
};

class BLOCK_OF_FLATS : public HOME {
public:
	//int floors;
	//virtual ostream& print(ostream& out) override;
	 //friend ostream& operator<<(ostream& out, BLOCK_OF_FLATS BOF_Home);
	 //friend istream& operator>>(istream& in, BLOCK_OF_FLATS& BOF_Home);
};

class COTTAGE : virtual public HOME {
public:
	//int doors;
	//virtual ostream& print(ostream& out) override;
	 //friend ostream& operator<<(ostream& out, COTTAGE Cottage);
	 //friend istream& operator>>(istream& in, COTTAGE& Cottage);
};

class SKYSCRAPER : virtual public HOME {
public:
	//int lift;
	//virtual ostream& print(ostream& out) override;
	 //friend ostream& operator<<(ostream& out, SKYSCRAPER Skyscraper);
	// friend istream& operator>>(istream& in, SKYSCRAPER& Skyscraper);
};

class TERRACED : virtual public HOME {
public:
	//int windows;
	//virtual ostream& print(ostream& out) override;
	 //friend ostream& operator<<(ostream& out, TERRACED Terraced);
	 //friend istream& operator>>(istream& in, TERRACED& Terraced);
};

class STREET
{
protected:
	string Name;
	//vector<BLOCK_OF_FLATS> BOF_Homes;
	//vector<COTTAGE> Cottages;
	//vector<SKYSCRAPER> Skyscrapers;
	//vector<TERRACED> Terraced_Homes;
	vector<HOME> Homes;
	vector<HOME> HomeList = Homes;
public:
	virtual void sort();
	friend ostream& operator<<(ostream& out, STREET Street);
	friend istream& operator>>(istream& in, STREET& Street);
};

#endif

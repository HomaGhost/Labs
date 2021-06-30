#include <iterator>
#include "iohomes.h"

using namespace std;

istream& operator>>(istream& in, FLAT& Flat) {

	in >> Flat.Floor;
	in >> Flat.Number;
	in >> Flat.Rooms;
	in >> Flat.special_data;
	return in;
}


ostream& operator<<(ostream& out, FLAT& Flat) {


	out << "TYPE: " << Flat.type << " Floor: "
		<< Flat.Floor << "Number: "
		<< Flat.Number << " Rooms: "
		<< Flat.Rooms;
	if (Flat.type == "Bigflat") {
		out << " Toilets: "
			<< Flat.special_data << ".";
	}
	else
		if (Flat.type == "Mediumflat") {
			out << " Tables: "
				<< Flat.special_data << ".";
		}
		else
			if (Flat.type == "Littleflat") {
				out << " Chairs: "
					<< Flat.special_data << ".";
			}
			else
				if (Flat.type == "Verybigflat") {

					out << " Windows: "
						<< Flat.special_data << ".";
				}
	return out;
	
}

istream& operator>>(istream& in, HOUSE& House) {

	int a1, a2;
	cout << "Enter the beginning and end of the range of Rooms :" << endl;
	cin >> a1 >> a2;



	in >> House.Name;
	while (!in.eof()) {
		string type_temp;
		in >> type_temp;

		if (type_temp == "Mediumflat") {
			MEDIUMFLAT temp;
			temp.type = type_temp;
			in >> temp;
			House.Flats.push_back(temp);
			if (temp.Rooms > a1 && temp.Rooms < a2) {
				House.Flatslist.push_back(temp);
			}
		}
		else
			if (type_temp == "Bigflat") {
				BIGFLAT temp;
				temp.type = type_temp;
				in >> temp;
				House.Flats.push_back(temp);
				if (temp.Rooms > a1 && temp.Rooms < a2) {
					House.Flatslist.push_back(temp);
				}
			}
			else
				if (type_temp == "Littleflat") {
					LITTLEFLAT temp;
					temp.type = type_temp;
					in >> temp;
					House.Flats.push_back(temp);
					if (temp.Rooms > a1 && temp.Rooms < a2) {
						House.Flatslist.push_back(temp);
					}
				}
				else
					if (type_temp == "Verybigflat") {
						VERYBIGFLAT temp;
						temp.type = type_temp;
						in >> temp;
						House.Flats.push_back(temp);
						if (temp.Rooms > a1 && temp.Rooms < a2) {
							House.Flatslist.push_back(temp);
						}
					}

	}
	return in;
}

ostream& operator<<(ostream& out, HOUSE House) {
	out << "House List " << House.Name << " :" << endl;

	for (int i = 0; i < House.Flats.size(); i++) {
		out << House.Flats[i] << endl;
	}



	out << "List of Flats in the range:" << endl;

	for (int i = 0; i < House.Flatslist.size(); i++) {
		out << House.Flatslist[i] << endl;
	}

	

	return out;
}
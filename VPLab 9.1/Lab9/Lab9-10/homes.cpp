#include <iterator>
#include "iohomes.h"

using namespace std;

istream& operator>>(istream& in, HOME& Home) {

	in >> Home.Corpus;
	in >> Home.Number;
	in >> Home.Flats;
	in >> Home.special_data;
	return in;
}
//ostream& HOME::print(ostream& out)
//{
//
//	out << "TYPE: " << type << " Adress: "
//		<< Corpus << "-"
//		<< Number << " Flats: "
//		<< Flats;
//			return out;
//}
//
//ostream& TERRACED::print(ostream& out) 
//{
//	out << "TYPE: " << type << " Adress: "
//		<< Corpus << "-"
//		<< Number << " Flats:"
//		<< Flats << " Windows: "
//		<< windows << ".";
//
//	return out;
//}
//
//ostream& SKYSCRAPER::print(ostream& out) 
//{
//	out << "TYPE: " << type << " Adress: "
//		<< Corpus << "-"
//		<< Number << " Flats:"
//		<< Flats << " Lifts: "
//		<< lift << ".";
//
//	return out;
//}
//
//ostream& COTTAGE::print(ostream& out) 
//{
//	out << "TYPE: " << type << " Adress: "
//		<< Corpus << "-"
//		<< Number << " Flats:"
//		<< Flats << " Doors: "
//		<< doors << ".";
//
//	return out;
//}
//
//ostream& BLOCK_OF_FLATS::print(ostream& out)
//{
//	out << "TYPE: " << type << " Adress: "
//		<< Corpus << "-"
//		<< Number << " Flats:"
//		<< Flats << " Floors: "
//		<<floors << ".";
//
//	return out;
//}
//istream& operator>>(istream& in, BLOCK_OF_FLATS& BOF_Home) {
//	
//	in >> BOF_Home.Corpus;
//	in >> BOF_Home.Number;
//	in >> BOF_Home.Flats;
//	in >> BOF_Home.floors;
//	return in;
//}
//
//ostream& operator<<(ostream& out, BLOCK_OF_FLATS BOF_Home) {
//	out << "TYPE: " << BOF_Home.type << " Adress: "
//		<< BOF_Home.Corpus << "-"
//		<< BOF_Home.Number << " Flats:"
//		<< BOF_Home.Flats << " Floors: "
//		<< BOF_Home.floors << ".";
//
//	return out;
//}
//
//istream& operator>>(istream& in, COTTAGE& Cottage) {
//	
//	in >> Cottage.Corpus;
//	in >> Cottage.Number;
//	in >> Cottage.Flats;
//	in >> Cottage.doors;
//	return in;
//}
//
//ostream& operator<<(ostream& out, COTTAGE Cottage) {
//	out << "TYPE: " << Cottage.type << " Adress: "
//		<< Cottage.Corpus << "-"
//		<< Cottage.Number << " Flats:"
//		<< Cottage.Flats << " Doors: "
//		<< Cottage.doors << ".";
//
//	return out;
//}
//
//istream& operator>>(istream& in, SKYSCRAPER& Skyscraper) {
//	
//	in >> Skyscraper.Corpus;
//	in >> Skyscraper.Number;
//	in >> Skyscraper.Flats;
//	in >> Skyscraper.lift;
//	return in;
//}
//
//ostream& operator<<(ostream& out, SKYSCRAPER Skyscraper) {
//	out << "TYPE: " << Skyscraper.type << " Adress: "
//		<< Skyscraper.Corpus << "-"
//		<< Skyscraper.Number << " Flats:"
//		<< Skyscraper.Flats << " Lifts: "
//		<< Skyscraper.lift << ".";
//
//	return out;
//}
//
//istream& operator>>(istream& in, TERRACED& Terraced) {
//	/*in >> Terraced.type;*/
//	in >> Terraced.Corpus;
//	in >> Terraced.Number;
//	in >> Terraced.Flats;
//	in >> Terraced.windows;
//	return in;
//}
//
//ostream& operator<<(ostream& out, TERRACED Terraced) {
//	out << "TYPE: " << Terraced.type << " Adress: "
//		<< Terraced.Corpus << "-"
//		<< Terraced.Number << " Flats:"
//		<< Terraced.Flats << " Windows: "
//		<< Terraced.windows << ".";
//
//	return out;
//}
//
//istream& operator>>(istream& in, HOME Home) {
//	if (Home.type == "Skyscraper") {
//		SKYSCRAPER sky;
//		in >> sky;
//	}
//	if (Home.type == "Block_of_Flats") {
//		BLOCK_OF_FLATS bof;
//		in >> bof;
//	}
//	if (Home.type == "Cottage") {
//		COTTAGE Cottage;
//		in >> Cottage;
//	}
//	if (Home.type == "Terraced") {
//		TERRACED Terraced;
//		in >> Terraced;
//	}
//
//	return in;
//}
//istream& operator>>(istream& in, STREET& Street) {
//	in >> Street.Name;
//	//Street.BOF_Homes.clear();
//	//Street.Cottages.clear();
//	//Street.Skyscrapers.clear();
//	//Street.Terraced_Homes.clear();
//	Street.Homes.clear();
//	Street.HomeList.clear();
//
//	int a1, a2;
//	cout << "Enter the beginning and end of the range of apartments :" << endl;
//	cin >> a1 >> a2;
//
//	istream_iterator<HOME> in_iter(in);
//	istream_iterator<HOME> in_end;
//
//
//	/*while (in_iter != in_end) {
//		HOME iterHome = *in_iter;
//		Street.Homes.push_back(&iterHome);
//		if (iterHome.Flats > a1 && iterHome.Flats < a2) {
//			Street.HomeList.push_back(&iterHome);
//		}
//		in_iter++;*/
//
//	{istream_iterator<BLOCK_OF_FLATS> in_iter(in);
//	istream_iterator<BLOCK_OF_FLATS> in_end;
//
//
//	while (in_iter != in_end) {
//		BLOCK_OF_FLATS iterHome = *in_iter;
//		//Street.BOF_Homes.push_back(iterHome);
//		Street.Homes.push_back(&iterHome);
//		if (iterHome.Flats > a1 && iterHome.Flats < a2) {
//			Street.HomeList.push_back(&iterHome);
//		}
//		in_iter++;
//	}
//	}
//	{
//		istream_iterator<COTTAGE> in_iter(in);
//		istream_iterator<COTTAGE> in_end;
//
//		while (in_iter != in_end) {
//			COTTAGE iterHome = *in_iter;
//			Street.Homes.push_back(&iterHome);
//			if (iterHome.Flats > a1 && iterHome.Flats < a2) {
//				Street.HomeList.push_back(&iterHome);
//			}
//			in_iter++;
//		}
//
//	}
//
//	{
//		istream_iterator<SKYSCRAPER> in_iter(in);
//		istream_iterator<SKYSCRAPER> in_end;
//
//		while (in_iter != in_end) {
//			SKYSCRAPER iterHome = *in_iter;
//			Street.Homes.push_back(&iterHome);
//			if (iterHome.Flats > a1 && iterHome.Flats < a2) {
//				Street.HomeList.push_back(&iterHome);
//			}
//			in_iter++;
//		}
//
//	}
//
//	{
//		istream_iterator<TERRACED> in_iter(in);
//		istream_iterator<TERRACED> in_end;
//
//		while (in_iter != in_end) {
//			TERRACED iterHome = *in_iter;
//			Street.Homes.push_back(&iterHome);
//			if (iterHome.Flats > a1 && iterHome.Flats < a2) {
//				Street.HomeList.push_back(&iterHome);
//			}
//			in_iter++;
//		}
//
//	}
//
//
//	return in;
//}
ostream& operator<<(ostream& out, HOME& Home) {


	out << "TYPE: " << Home.type << " Adress: "
		<< Home.Corpus << "-"
		<< Home.Number << " Flats: "
		<< Home.Flats;
	if (Home.type == "Cottage") {
		out << " Doors: "
			<< Home.special_data << ".";
	}
	else
		if (Home.type == "Skyscraper") {
			out << " Lifts: "
				<< Home.special_data << ".";
		}
		else
			if (Home.type == "Block_of_Flats") {
				out << " Floors: "
					<< Home.special_data << ".";
			}
			else
				if (Home.type == "Terraced") {

					out << " Windows: "
						<< Home.special_data << ".";
				}
	return out;
	//return Home.print(out);
	//if (Home.type == "Skyscraper") {
	//	SKYSCRAPER sky;
	//	out << sky;
	//}
	//if (Home.type == "Block_of_Flats") {
	//	BLOCK_OF_FLATS bof;
	//	out << bof;
	//}
	//if (Home.type == "Cottage") {
	//	COTTAGE Cottage;
	//	out << Cottage;
	//}
	//if (Home.type == "Terraced") {
	//	TERRACED Terraced;
	//	out << Terraced;
	//}
	//return out;
}

istream& operator>>(istream& in, STREET& Street) {

	int a1, a2;
	cout << "Enter the beginning and end of the range of apartments :" << endl;
	cin >> a1 >> a2;



	in >> Street.Name;
	while (!in.eof()) {
		string type_temp;
		in >> type_temp;

		if (type_temp == "Cottage") {
			COTTAGE temp;
			temp.type = type_temp;
			in >> temp;
			Street.Homes.push_back(temp);
			if (temp.Flats > a1 && temp.Flats < a2) {
				Street.HomeList.push_back(temp);
			}
		}
		else
			if (type_temp == "Skyscraper") {
				SKYSCRAPER temp;
				temp.type = type_temp;
				in >> temp;
				Street.Homes.push_back(temp);
				if (temp.Flats > a1 && temp.Flats < a2) {
					Street.HomeList.push_back(temp);
				}
			}
			else
				if (type_temp == "Block_of_Flats") {
					BLOCK_OF_FLATS temp;
					temp.type = type_temp;
					in >> temp;
					Street.Homes.push_back(temp);
					if (temp.Flats > a1 && temp.Flats < a2) {
						Street.HomeList.push_back(temp);
					}
				}
				else
					if (type_temp == "Terraced") {
						TERRACED temp;
						temp.type = type_temp;
						in >> temp;
						Street.Homes.push_back(temp);
						if (temp.Flats > a1 && temp.Flats < a2) {
							Street.HomeList.push_back(temp);
						}
					}

	}
	return in;
}

ostream& operator<<(ostream& out, STREET Street) {
	out << "Street List " << Street.Name << " :" << endl;

	for (int i = 0; i < Street.Homes.size(); i++) {
		out << Street.Homes[i] << endl;
	}

	//vector<HOME*>::iterator iter;
	//iter = Street.Homes.begin();
	//while (iter != Street.Homes.end()) {
	//	if (iter.type == "Skyscraper") {
	//		vector <SKYSCRAPER>::iterator itsk;
	//		out << *itsk << endl;
	//	}
	//	if (iter.type == "Block_of_Flats") {
	//		vector <BLOCK_OF_FLATS>::iterator itbl;
	//		out << *itbl << endl;
	//	}
	//	if (iter.type == "Cottage") {
	//		vector <COTTAGE>::iterator itc;
	//		out << *itc << endl;
	//	}
	//	if (iter.type == "Terraced") {
	//		vector <TERRACED>::iterator itter;
	//		out << *itter << endl;
	//	}
	//	out << *iter << endl;
	//	iter++;
	//}

	out << "List of houses in the range:" << endl;

	for (int i = 0; i < Street.HomeList.size(); i++) {
		out << Street.HomeList[i] << endl;
	}

	//iter = Street.HomeList.begin();
	//while (iter != Street.HomeList.end()) {
	//	if (iter.type == "Skyscraper") {
	//		vector <SKYSCRAPER>::iterator itsk;
	//		out << *itsk << endl;
	//	}
	//	if (iter.type == "Block_of_Flats") {
	//		vector <BLOCK_OF_FLATS>::iterator itbl;
	//		out << *itbl << endl;
	//	}
	//	if (iter.type == "Cottage") {
	//		vector <COTTAGE>::iterator itc;
	//		out << *itc << endl;
	//	}
	//	if (iter.type == "Terraced") {
	//		vector <TERRACED>::iterator itter;
	//		out << *itter << endl;
	//	}
	//	//out << *iter << endl;
	//
	//}

	return out;
}
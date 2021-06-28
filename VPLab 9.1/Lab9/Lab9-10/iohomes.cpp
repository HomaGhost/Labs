
#include <algorithm>
#include <iterator>
#include "homes.h"

bool operator<(HOME Home1, HOME Home2) {
	bool result = Home1.Flats < Home2.Flats;
	return result;
}

void STREET::sort() {
	std::sort(this->Homes.begin(), this->Homes.end());
	std::sort(this->HomeList.begin(), this->HomeList.end());

}
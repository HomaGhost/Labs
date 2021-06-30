
#include <algorithm>
#include <iterator>
#include "homes.h"

bool operator<(FLAT Room1, FLAT Room2) {
	bool result = Room1.Rooms < Room2.Rooms;
	return result;
}

void HOUSE::sort() {
	std::sort(this->Flats.begin(), this->Flats.end());
	std::sort(this->Flatslist.begin(), this->Flatslist.end());

}
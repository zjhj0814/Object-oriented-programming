#include "Date.h"

Date::Date(unsigned int m, unsigned int d, unsigned int y) 
	: year{ y } {
	int dayArr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (m > 0 && m <= 12) { month = m; }
	else { throw invalid_argument("month argument error"); }

	if (d > 0 && dayArr[m] >= d) { day = d; }
	else { throw invalid_argument("day argument error"); }
}

string Date::toString() const {
	ostringstream out;
	out <<" = " << month << "/" << day << "/" << year << endl;
	return out.str();
}
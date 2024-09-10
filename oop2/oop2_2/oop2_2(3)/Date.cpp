#include "Date.h"

Date::Date(unsigned int m, unsigned int d, unsigned int y) {
	if (m > 0 || m <= monthsPerYear) { month = m; }
	else {
		throw invalid_argument("Please check out the months");
	}
	if (checkDay(d) ==d) { day = d; }
	//else { throw invalid_argument("Please check out the day"); }

	if (y > 0) { year = y; }
	else { throw invalid_argument("Please check out the year"); }
}

string Date::toString() const {
	ostringstream oss;
	oss << setfill('0') << setw(2) << month << "/" << setw(2) << day << "/" << setw(4) << year;
	return oss.str();
}

Date::~Date() {

}

unsigned int Date::checkDay(int d) const {
	static int mArr[monthsPerYear] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (mArr[month-1] >= d && d > 0) { return d; }
	else { return 0; }
}
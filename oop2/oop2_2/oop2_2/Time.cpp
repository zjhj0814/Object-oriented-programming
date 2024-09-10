#include "Time.h"

void Time::setTime(int h, int m, int s)
{
	if (h <= 24 && h >= 0 && m <= 60 && m >= 0 && s <= 60 && s >= 0) {
		hour = h;
		minute = m;
		second = s;
	}
	else {
		throw invalid_argument("hour, minute and/or second was out of range.");
	}
}

string Time::toUniversalString() const { //static이나 다른 식별자와는 다르게 const는 정의에서도 써야하는구나
	ostringstream output;
	output << setfill('0')<< setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
	return output.str();
}

string Time::toStandardString() const {
	ostringstream output;
	output << setfill('0') << setw(2) << hour%12 << ":" << setw(2) << minute << ":" << setw(2) << second;
	return output.str();
}
#include "Time.h"

//자바에서는 :: 연산자가 없으므로 안 쓰고 
Time::Time(int h, int m, int s) {
	setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h) {
	if (h >= 0 && h < 24) {
		hour = h;
	}
	else {
		exception e=exception("hour must be 0-23");
		throw e; //도전!!
	}
}

void Time::setMinute(int m) {
	minute = m;
}

void Time::setSecond(int s) {
	second = s;
}

unsigned int Time::getHour() const {
	return hour;
}

unsigned int Time::getMinute() const {
	return minute;
}

unsigned int Time::getSecond() const {
	return second;
}

string Time::toUniversalString() const {
	ostringstream output;
	output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
	return output.str();
}

string Time::toStandardString() const {
	ostringstream output;
	output << setfill('0') << setw(2) << hour % 12 << ":" << setw(2) << minute << ":" << setw(2) << second;
	return output.str();
}
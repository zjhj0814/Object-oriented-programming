#include "Time.h"

Time::Time(int h, int m, int s) {
	this->setTime(h, m, s);
}

Time& Time::setTime(int h, int m, int s) {
	this->setHour(h);
	setMinute(m);
	setSecond(s);
	return *this;
}

Time& Time::setHour(int h) {
	if (h >= 0 && h <= 24) {
		if (h == 24) { hour = 0; }
		hour = h;
	}
	else { cout << "invalid argument, doesn't set hour."; }
	return *this;
}

Time& Time::setMinute(int m) {
	if (m >= 0 && m <= 59) { minute = m; }
	else { cout << "invalid argument, doesn't set minute."; }
	return *this;
}

Time& Time::setSecond(int s) {
	if (s >= 0 && s <= 59) { second = s; }
	else { cout << "invalid argument, doesn't set second"; }
	return *this;
}

unsigned int Time::getHour() const { return hour; }
unsigned int Time::getMinute() const { return minute; }
unsigned int Time::getSecond() const { return second; }

string Time::toUniversalString() const {
	ostringstream oss;
	oss << "Universal time: " << hour << ":" << minute << ":" << second << "\n";
	return oss.str();
}

string Time::toStandardString() const {
	ostringstream oss;
	oss << "Standard time: " << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << minute << ":" << second << ((hour <= 11) ? " AM\n" : " PM\n");
	//예제 확인해보고 oss 중간에 코드 수정한 거ㄴ 코드 잘 돌아가는지 확인
	return oss.str();
}
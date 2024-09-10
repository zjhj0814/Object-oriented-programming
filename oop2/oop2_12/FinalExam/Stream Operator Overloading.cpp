#include<iostream>
#include<iomanip>
using namespace std;

class Date {
	friend istream& operator>>(istream& input, Date& d);
	friend ostream& operator<<(ostream& output,const Date& d);
private: unsigned int _day;
	   unsigned int _month;
	   unsigned int _year;
	   void setDay(int day) {
		   unsigned int const dayArr[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
		   if (dayArr[_month] >= day && day > 0) { _day = day; }
		   else throw invalid_argument("Please check the day argument");
	   }
	   void setMonth(int month) {
		   if (month > 0 && month < 13) { _month = month; }
		   else throw invalid_argument("Please check the month argument");
	   }
	   void setYear(int year) {
		   if (year >= 0) { _year = year; }
		   else throw invalid_argument("Please check the year argument");
	   }

public: Date(int day = 1, int month = 1, int year = 1) {
	setYear(year);
	setMonth(day);
	setDay(month);
}
};

istream& operator>>(istream& input, Date& d) {
	int mm; int dd; int yyyy;
	input >> setw(2) >> mm
		>> setw(2) >> dd
		>> setw(4) >> yyyy;
	d.setMonth(mm);
	d.setDay(dd);
	d.setYear(yyyy);
	return input;
}
ostream& operator<<(ostream& output, const Date& d) {
	output << d._month << "/" << d._day << "/" << d._year;
	return output;
}

int main() {
	try {
		Date d;
		cout << "Enter Date(in dd/mm/yyy): ";
		cin >> d;
		cout << d;
	}
	catch (invalid_argument e) { cout << e.what(); }
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Date {
public: int day, month, year;
	  Date() :year{ 2023 }, month{ 1 }, day{ 1 } {};
	  friend ostream& operator<<(ostream&, const Date&);
	  friend istream& operator>>(istream&, Date&);
};

ostream& operator<<(ostream& ostr, const Date& date) {
	ostr << date.month << "/" << date.day << "/" << date.year;
	return ostr;
}

istream& operator>>(istream& istr, Date& date) {
	istr>>date.month>>date.day>>date.year;
	//istr.ignore();
	return istr;
}

int main() {
	Date d;
	Date d2;

	cout << d << endl;
	cout<<"Enter Date(in dd/mm/yyyy):";
	cin >> d2;
	cout << d2;

}
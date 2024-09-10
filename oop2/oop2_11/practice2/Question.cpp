#include<iostream>
#include<sstream>
using namespace std;

class Base{
public: string f(double a) {
	ostringstream ostr;
	ostr<<"f(int) in base: " << a * 2-0.1;
	return ostr.str();

}
	  string f(int a) {
		  ostringstream ostr;
		  ostr << "f(double) in base: " << a * 2-1;
		  return ostr.str();
	  }
};

class Derived :public Base {
public:Derived() {}
	  string f(double a) {
		  ostringstream ostr;
		  ostr<<"f(int) in derived: " << a * 2;
		  return ostr.str();
	  }
	  string f(int a) {
		  ostringstream ostr;
		  ostr<< "f(double) in derived: " << a * 2+1;
		  return ostr.str();
	  }
};

int main() {
	Derived* dp = new Derived;
	cout << dp->f(3) << endl;
	cout << dp->f(3.3) << endl;

	Base* bp = dp;
	cout << bp->f(4) << endl;
	cout << bp->f(4.4) << endl;

	delete dp;
	return 0;
}
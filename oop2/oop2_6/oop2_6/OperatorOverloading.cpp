#include<iostream>
using namespace std;

class Tmp {
	friend ostream& operator<<(ostream& out, Tmp& right) { out << right._a; return out; }
	friend Tmp operator-(const Tmp& left, const Tmp& right) { return Tmp{ left._a + right._a }; } //t1-t2
	friend Tmp operator+(const int& i, const Tmp& right) { return Tmp{ i + right._a }; } //1+t1
public: Tmp(int a = 0) :_a{ a } {}
	  Tmp operator+(const Tmp& t) { //t1+t2
		  return Tmp{ _a + t._a };
	  }
	  Tmp operator+(const int& i) { //t1+3
		  return Tmp{ _a + i };
	  }
	  Tmp operator-(const int& i) { //t1-2
		  return Tmp{ _a - i };
	  }
	  bool operator==(const Tmp& right) {
		  return _a == right._a;
	  }
	  bool operator!=(const Tmp& right) {
		  return !((*this) == right);
	  }
	  Tmp& operator+=(int num) {
		  for (int i = 0; i < num; i++) {
			  increment();
		  }
		  //_a+= num;
		  return *this;
	  }
	  Tmp& operator++() { //prefix
		  _a++;
		  return *this;
	  }
	  Tmp operator++(int) {
		  Tmp t{ _a };
		  _a++;
		  return t;
	  }

	void display() const { cout << _a << endl; }
private: int _a;
	   void increment() { ++_a; }
	   //int _b;
};


int main() {
	Tmp t{ 3 };
	cout << t;
}
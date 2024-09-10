#include<iostream>
using namespace std;

class Tmp {
private: int _a;
public:Tmp(int a) :_a{ a } {}
	  void display() { cout << _a << endl; }
	  operator int() const { return _a; }
};

int main() {
	Tmp t{ 1000 };
	t.display();

	Tmp t2 = 2000;
	t2.display();

	static_cast<Tmp>(2000).display();
	cout << static_cast<int>(t) << endl;
}
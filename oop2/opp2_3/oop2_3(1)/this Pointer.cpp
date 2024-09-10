#include<iostream>
using namespace std;

class Test {
public: Test(int a) { this->a = a; }
	  void print() {
		  cout << "\tx=" << a << endl;
		  cout << "\tthis->x=" << a << endl;
		  cout << "\t(*this).x=" << a;
	  }
private: int a;
};

int main() {
	Test testObject{ 12 };
	testObject.print();
}
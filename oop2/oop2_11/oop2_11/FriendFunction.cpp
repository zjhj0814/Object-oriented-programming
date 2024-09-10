#include<iostream>
using namespace std;

class Derived;
void swap(Derived* d);

class Base {
	//friend void swap(*Derived d);
protected: int num1;
public: Base() :num1{10} {}
	  void baseShow() { cout << "Value of Number 1: " << num1 << endl; }
};

class Derived :public Base {
	friend void swap(Derived* d);
protected: int num2;
public: Derived() :num2{ 20 } {}
	  void show() {
		  baseShow();
		  cout << "Value of Number 2: " << num2 << endl;
	  }
};

void swap(Derived* d) {
	int temp = (*d).num2;
	(*d).num2 = (*d).num1;
	(*d).num1 = temp;
}

int main() {
	Derived d;
	d.show();

	swap(&d);

	d.show();
	return 0;
}
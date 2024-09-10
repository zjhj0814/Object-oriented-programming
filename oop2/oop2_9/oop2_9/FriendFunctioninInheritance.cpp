#include<iostream>
using namespace std;

class Derived;
//void swap(Base* b, Derived* d);
//뒤에 클래스에서 이미 friend 선언이 됨 

class Base {
	friend void swap(Base* b, Derived* d);
	//4행에 Derived 클래스를 선언해야 실행 가능!
	//forward reference 미리 프로토 타입을 써놓아서 
	// 컴파일러가 못찾고 헤메는 오류를 방지한다
protected: int num1;
public: Base() :num1{ 10 } {}
	  void show() { cout << "\n Value of Number 1 : " << num1; }
};

class Derived {
	friend void swap(Base* b, Derived* d);
protected: int num2;
public: Derived() :num2{ 20 } {}
	  void show() { cout << "\n Value of Number 2 : " << num2; }
};

void swap(Base* b, Derived* d) {
	int temp = (*b).num1; //10
	(*b).num1 = (*d).num2; //20 
	(*d).num2 = temp; //10
}

int main() {
	Base b;
	Derived d;
	b.show();
	d.show();

	swap(&b, &d);
	cout << "\n";

	b.show();
	d.show();
	return 0;
}
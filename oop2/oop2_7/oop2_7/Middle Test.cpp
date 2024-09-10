#include<iostream>
using namespace std;

class Parent {
private:int _a{ 0 };
public: virtual void print() { cout << "Parent Class:"<<_a<<endl; }
};

class Child :public Parent {
private: int _a{ 1 };
public: virtual void print() override { cout <<"Child Class:"<< _a<<endl; }
};

class GrandChild :public Child {
private: int _a{ 2 };
public: virtual void print() final { cout << "GrandChild:" << _a<<endl; }
	  GrandChild(int a) :_a{ a } {}
	  GrandChild() {}
};

int main() {
	GrandChild grand{ 3 };
	Child& c = grand;
	Parent& p = grand;

	grand.print();
	c.print();
	p.print();
	cout << endl;

	Child* cptr = &grand; //먼저 & 기호로 주소를 넣어줘야한다
	Parent* pptr = &grand;

	grand.print();
	cptr->Child::print(); //print()하면 Child 타입이더라도 오버라이딩된 GrandChild클래스의 print 호출한다
	pptr->Parent::print(); //타입으로 상위 클래스의 print()에 접근한다..
}
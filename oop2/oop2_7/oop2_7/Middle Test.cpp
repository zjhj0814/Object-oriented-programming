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

	Child* cptr = &grand; //���� & ��ȣ�� �ּҸ� �־�����Ѵ�
	Parent* pptr = &grand;

	grand.print();
	cptr->Child::print(); //print()�ϸ� Child Ÿ���̴��� �������̵��� GrandChildŬ������ print ȣ���Ѵ�
	pptr->Parent::print(); //Ÿ������ ���� Ŭ������ print()�� �����Ѵ�..
}
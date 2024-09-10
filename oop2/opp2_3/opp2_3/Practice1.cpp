#include "Practice1.h"
#include<iostream>
using namespace std;

Practice1::Practice1()
{
	ptr = new int[3]; //{1,2,3,}
	*ptr = 1;
	*(ptr+1) = 2;
	*(ptr+2) = 3;
	cout << "I am a default constructor\n";
}

Practice1::Practice1(int a, int b, int c)
	:i1{ a }, i2{ b }, i3{ c }
{
	cout << "I am a parameter constructor.\n";

}

Practice1::Practice1(const Practice1& pr)
	:i1{pr.i1}, i2{pr.i2}, i3{pr.i3}
{
	cout <<"I am a copy constructor.\n";
}

Practice1::~Practice1()
{
	cout << "I am a destructor.\n";
	delete[] ptr; //default constructor만 포인터 해제하도록 if(ptr!=nullptr)
}

void Practice1::print()
{
	cout << i1 << " " << i2 << " " << i3<<endl;
}
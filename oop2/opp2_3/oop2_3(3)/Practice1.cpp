#include"Practice1.h"
#include<iostream>
using namespace std;

Practice1::Practice1()
	:i1{ 1 }, i2{ 2 }, i3{ 3 }
{
	ptr = new int[3] {i1, i2, i3};
	cout << "I am a default constructor.\n";
} 

Practice1::Practice1(int ii1, int ii2, int ii3)
	:i1{ii1}, i2{ii2}, i3{ii3}
{cout << "I am a parameter constructor.\n"; }


Practice1::Practice1(Practice1& p)
	:i1{ p.i1 }, i2{ p.i2 }, i3{ p.i3 } //가능한가
{
	cout << "I am a copy constructor.\n";
}

void Practice1::print()
{
	cout << "three private member variables:" << i1 << " " << i2 << " " << i3 << endl;
}

Practice1::~Practice1() {
	if (ptr != nullptr) { delete ptr; }
	cout << "I am destructor.\n";
}
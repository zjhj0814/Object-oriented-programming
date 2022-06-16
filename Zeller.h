#pragma once
#ifndef ZELLER_H
#define ZELLER_H
#include<iostream>
#include<cassert>
using namespace std;

class Zeller
{
private: int year;
	   int month;
	   int day;
public: Zeller() = delete;
	Zeller(int y, int m, int d);
	Zeller(const Zeller& zeller) = delete;
	~Zeller();
	string DayWeek();
};
#endif



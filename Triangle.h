#pragma once

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<iostream>
#include<iomanip>
#include<cassert>
#include<cmath>
using namespace std;


class Triangle
{
private: int firstSide;
	   int secondSide;
	   int thirdSide;
public: Triangle() = delete;
	  Triangle(int a, int b, int c);
	  Triangle(const Triangle& triangle);
	  ~Triangle();
	  void getSides();
	  int getPerimeter()const;
	  double getArea() const;
public:int Arr[3];
};

#endif // !TRIANGLE_H


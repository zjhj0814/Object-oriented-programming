#pragma once
#ifndef FRACTIOM_H
#define FRACTIOM_H
#include<iostream>
using namespace std;

class Fraction
{
private: int numer;
	   int denom;

public: Fraction(int num, int den);
	  Fraction();
	  Fraction(const Fraction& fract);
	  ~Fraction();

	  int getNumer() const;
	  int getDenom() const;
	  void print() const;

	  void setNumer(int num);
	  void setDenom(int den);

private: void normalize();
	   int gcd(int n, int m);
};
#endif // !FRACTIOM_H



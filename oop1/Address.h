#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<iomanip>
using namespace std;

class Address
{
private: int houseNo;
	   string streetName;
	   string cityName;
	   string stateName;
	   int zipcode;
public: Address() = delete;
	  Address(int hnum, string street, string city, string state, int code);
	  Address(const Address& address) = delete;
	  ~Address();
	  void print() const;

};

#endif

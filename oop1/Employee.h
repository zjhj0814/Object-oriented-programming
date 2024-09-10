#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
#include<iomanip>
#include<cassert>
using namespace std;

class Employee
{
private: string firstName;
	   char initial;
	   string lastName;
protected: virtual bool IsValid() const = 0;
public:	virtual int getTotalSalary() const=0;
	  virtual void print() const = 0;
};

#endif
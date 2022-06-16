#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
using namespace std;


class Employee
{
private: string name;
	   unsigned int age;
	   unsigned int serviceYear;
	   int salary;
public: Employee() = delete;
	  Employee(string nm, unsigned int ag, unsigned int year, int sal);
	  Employee(const Employee& employee) = delete;
	  ~Employee();
	  string getName() const;
	  unsigned int getAge() const;
	  unsigned int getServiceYear() const;
	  int getSalary() const;
};
#endif // !


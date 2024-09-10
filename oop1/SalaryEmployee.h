#pragma 
#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include "Employee.h"

class SalaryEmployee : public Employee
{
private: string firstName;
	   char initial;
	   string lastName;
	   int salary;
protected:bool IsValid() const;
public: SalaryEmployee(string fst, char i, string lst, int sal);
	  ~SalaryEmployee();
	  int getTotalSalary() const;
	  void print() const;

};
#endif // !SALARYEMPLOYEE_H



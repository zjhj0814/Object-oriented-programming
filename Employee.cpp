#include "Employee.h"

Employee::Employee(string nm, unsigned int ag, unsigned int year, int sal)
	:name(nm), age(ag), serviceYear(year), salary(sal)
{

}

Employee::~Employee()
{

}

string Employee::getName() const
{
	return name;
}

unsigned int Employee::getAge() const
{
	return age;
}

unsigned int Employee::getServiceYear() const
{
	return serviceYear;
}

int Employee::getSalary() const
{
	return salary;
}

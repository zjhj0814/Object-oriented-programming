#include"Person.h"

Person::Person(string nm, int ag)
	:name(nm), age(ag)
{

}

Person::~Person()
{

}

string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}

void Person::setName(string n)
{
	name = n;
}

void Person::setAge(int a)
{
	age = a;
}
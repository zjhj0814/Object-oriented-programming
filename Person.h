#pragma once
#ifndef PERSON_H
#define PERSON_H

#include<iostream>
using namespace std;

class Person
{
private:string name;
	   int age;
public:Person() = delete;
	  Person(string nm, int ag);
	  Person(const Person& person) = delete;
	  ~Person();
	  string getName() const;
	  int getAge() const;
	  void setName(string n);
	  void setAge(int a);
};

#endif
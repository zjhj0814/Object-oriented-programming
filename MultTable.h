#pragma once
#ifndef MULTTABLE_H
#define MULTTABLE_H
#include<iostream>
using namespace std;

class MultTable
{
private: const int CAPACITY;
	int* arr[CAPACITY];
public: MultTable(int size);
	  MultTable(const MultTable& multtable)=delete;
	  void print();
};

#endif // !MULTTABLE_H


#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
using namespace std;

class Array
{
private: const int capacity;
	   int size;
	   int* pArray;
public: Array()=delete;
	Array(int c, int s);
	Array(const Array& arr);
	~Array();
	void insert(int insert);
	 void print();
};

#endif // !ARRAY_H


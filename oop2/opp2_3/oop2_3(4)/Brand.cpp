#ifndef BRAND_H
#define BRAND_h
#include<string>
#include<iostream>
using namespace std;

class Brand {
private: int* ID = nullptr;
	   string Brand_name;
	   string Model_name;
public:Brand(int id, string brand, string model):Brand_name{ brand }, Model_name{ model } {ID = new int{ id };}
	  Brand(const Brand& brand):Brand_name{ brand.Brand_name }, Model_name{ brand.Model_name } {
		  ID = new int{ *(brand.ID) };
	  }
	  ~Brand() { if (ID != nullptr) { delete ID; } }
	  void print() { cout << "Brand] id:" << *ID << " Brand name:" << Brand_name << " Model_name:" << Model_name << endl; }
};

#endif
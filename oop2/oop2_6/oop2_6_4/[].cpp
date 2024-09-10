#include<iostream>
using namespace std;

class Tmp {
public: Tmp(const int size) :_size{ size }, p { new int[size] } {}
	  Tmp(const Tmp& origin) :p{ new int[origin._size] }, _size{ origin._size } {}
	  int& operator[](int i) { return p[i]; }
	  int operator[](int i) const { return p[i]; }
private: int* p = nullptr;
	   int _size;
};

void fun(const Tmp& arr) { cout << arr[2] << endl; }

int main() {
	Tmp arr{ 5 };
	Tmp a{ 3 };
	arr[2] = 3;
	fun(arr);
	arr= a;
}
#include<iostream>
using namespace std;

template<typename t>
class Array {
public: explicit Array(int size) :arraysize{ size } { ptr = new t[arraysize]; }
	int getsize() const { return arraysize*sizeof t; }
	  ~Array() { delete[] ptr; }
private: t* ptr = nullptr;
	int arraysize;
};

template<typename T, int arraySize>
class Array {
public: explicit Array(){ ptr = new T[arraySize]; }
	  int getSize() const{ return arraySize * sizeof T; }
	  ~Array() { delete[] ptr; }
private: T* ptr = nullptr;
};

int main() {
	Array<int> arr1{ 5 };
	cout << arr1.getsize() << endl;

	Array<double> arr2{ 5 };
	cout << arr2.getsize() << endl;

	Array<int, 5> arr;
	cout << arr.getSize() << endl;
}
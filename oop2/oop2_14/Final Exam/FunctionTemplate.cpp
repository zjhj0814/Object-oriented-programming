#include<iostream>
using namespace std;

template <typename T>
class MyData {
public: MyData(T data) : _data{ data } {}
	  T getData() const { return _data; }
private: T _data;
};

template <>
class MyData<char*> {
public: MyData(const char* origin) :data{ new char[strlen(origin) + 1 ] } 
{
	strncpy(data, origin, data.length());
}
	  char* getData() { return data;}
private: char* data;
	   int dataSize;
};

int main() {
	cout << MyData{ 5 }.getData() << endl;
	cout << MyData<char*>{"dlwlrlma"}.getData() << endl;
}
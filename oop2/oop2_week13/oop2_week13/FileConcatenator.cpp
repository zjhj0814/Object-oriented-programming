#include<iostream>
#include<fstream>
using namespace std;

int main() {
	string str1, str2;
	int size1, size2;

	ifstream test1, test2;
	ofstream result;
	test1.open("test1.txt", ios::in|ios::binary);
	if (!test1) 
	{ cout << "test1.txt could not be opened\n"; }
	test1.seekg(0, ios::end);
	//test1에 엔터가 포함되어 있으면 
	//거기까지가 end pointer가 가리키는 곳!

	size1 = test1.tellg();
	test1.seekg(0, ios::beg);
	
	str1.resize(size1);
	test1.read(&str1[0], size1);
	 
	test2.open("test2.txt", ios::in|ios::binary);
	if (!test2) 
	{ cout << "test2.txt could not be opened\n"; }
	test2.seekg(0, ios::end);
	size2 = test2.tellg();
	test2.seekg(0, ios::beg);
	str2.resize(size2);
	test2.read(&str2[0], size2);

	result.open("test3.txt", ios::out|ios::binary);
	if (!result) 
	{ cout << "test3.txt could not be opened\n"; }
	result.write(&str1[0], size1);
	result.write(&str2[0], size2);
}
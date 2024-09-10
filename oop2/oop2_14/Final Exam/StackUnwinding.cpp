#include<iostream>
using namespace std;

void fun3() {
	cout << "f3 enter" << endl;
	throw 1;
	cout << "f3 exit" << endl;
}

void fun2() {
	cout << "f2 enter" << endl;
	fun3();
	cout << "f2 exit" << endl;
}

void fun1() {
	try {
		cout << "f1 enter" << endl;
		fun2();
	}
	catch (int) { cout << "catch in f1" << endl; }
	cout << "f1 exit" << endl;
}

int main() {
	fun1();
}
#include<iostream>
using namespace std;

void myHandler() {
	cout << "error:myHandler" << endl;
}

int main() {
	int number1{ 5 };
	int number2{ 0 };
	set_terminate(myHandler);
	try {
		if (number2 == 0)throw number2;
		else cout << number1 / number2 << endl;
	}
	catch (char) { cout << "error:division by zero." << endl; }
}
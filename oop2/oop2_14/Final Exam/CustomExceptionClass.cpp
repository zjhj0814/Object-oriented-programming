#include<iostream>
#include<stdexcept>
using namespace std;

class DivideByZeroException:public runtime_error {
public: DivideByZeroException() : runtime_error("Division by 0") {}
};

int main() {
	int number1{ 5 };
	int number2{ 0 };
	try {
		if (number2 == 0) { throw DivideByZeroException(); }
		else cout << static_cast<double>(number1 / number2);
	}
	catch (const DivideByZeroException& e) { cout<<e.what(); }
}
#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
	try {
		throw out_of_range{ "error!" };
	}
	catch (const logic_error& e) { cout << "logic_error: " << e.what() << endl; }
	catch (const out_of_range& e) { cout << "out_of_range: " << e.what() << endl; }
}
#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
	try {
		try { throw invalid_argument("invalid_argument exception arise.\n"); }
		catch (int i) { cout << "error:int\n"; }
		cout << "woo\n";
	}
	catch(invalid_argument & e) {cout << e.what(); }
	cout << "woo\n";
}
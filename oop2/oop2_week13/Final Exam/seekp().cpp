#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;

int main() {
	ofstream output("seekp().txt", ios::out);
	if (!output) {
		cerr << "File doesn't opened.\n";
		exit(EXIT_FAILURE);
	}
	int index{ 0 };

	int account;
	string name; 
	double balance;

	string line;

	cout << "?";
	while (getline(cin,line)) {
		output.seekp(index);
		cerr << "tellp(): "<<output.tellp()<<"\n";
		output << line;
		index += 3;
		line.clear();
		cout << "\n?";
	}
	output.close();

	ifstream input("seekp().txt", ios::in);
	if (!input) {
		cerr << "File doesn't opened.\n";
		exit(EXIT_FAILURE);
	}

	while (getline(input, line)) {
		cout << line;
	}
	input.close();
}

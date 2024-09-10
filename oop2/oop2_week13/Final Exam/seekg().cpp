#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
	ifstream input("test.txt", ios::in);
	if (!input) {
		cerr << "File doesn't opened\n";
		exit(EXIT_FAILURE);
	}

	string line;
	input.seekg(13);
	getline(input, line);
	cout << line;
	input.close();
}
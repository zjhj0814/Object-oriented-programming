#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
	ofstream output("FileOutput.txt", ios::out);
	if (!output) {
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}
	string line;

	cout << "Enter the account, name, and balance.\n"
		<< "Enter end-of-file to end input.\n";

	while (!cin.eof()) {
		cout<< "?";
		getline(cin, line);
		output << line<<"\n";
		line.clear();
	}
	
	output.close();
}
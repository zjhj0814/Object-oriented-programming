#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream inputFile("CodeAnalysisProgram.cpp", ios::in);
	string line;
	int lineCount{ 0 };
	int characterCount{ 0 };

	while (getline(inputFile, line)) {
		cout << line << endl;

		lineCount++;
		characterCount += line.length();

		line.clear();
	}

	cout << "This is its own source code.\n"
		<< "The total number of characters is " << characterCount
		<< "\nThe number of lines: " << lineCount;
}

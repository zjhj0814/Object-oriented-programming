#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream input("CodeAnalysisProgram.cpp", ios::in);
	string line;
	int charCount{ 0 };
	int lineCount{ 0 };

	input.seekg(0,ios::beg);
	while (getline(input, line)) {
		cout << line << endl;
		charCount += line.size();
		++lineCount;
	}
	input.clear();
	input.close();
	cout << "This is the test text file.\n"
		<< "The total number of characters is " << charCount
		<< "\nThe number of lines: " << lineCount;
	return 0;
}

/*int main() {
	ifstream input("code.txt", ios::in);
	if (!input) {
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}

	int charCount{ 0 };
	int lineCount{ 1 };
	int size;
	string str;

	input.seekg(0, ios::end);
	size = input.tellg();
	input.seekg(0, ios::beg);
	str.resize(size);

	input.read(&str[0], size);

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
		if (str[i] == '\n') {
			lineCount++;
		}
	}

	cout << "\nThis is the test text file."
		<< "\nThe total number of characters is " << str.size() - lineCount
		<<"\nThe number of lines: "<<lineCount;
}*/
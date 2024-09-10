#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ofstream output("test2.txt", ios::out);

	string line;

	cout << '?';
	while (getline(cin, line)) {
		cout << "tellp(): " << output.tellp() << "\n\n";
		output << line<<endl;
		cout << '?';
	}
	output.close();
}
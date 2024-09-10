#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
	char countChar;
	string line;
	int count{ 0 };
	char speak[] = "Type a character to count\n";

	cout.write(speak,25);
	cin.get(countChar);
	cin.ignore();
	cout << "Type ant input string.\n";
	getline(cin, line);
	for (int i = 0; i <= line.length(); i++) {
		if (line[i] == countChar) count++;
	}
	cout << "Count: " << count;
}
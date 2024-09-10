#include<iostream>
using namespace std;

int main() {
	char de;
	char str[10];
	int count = 0;
	cout << "Type a character to count." << endl;
	de = cin.get();
	cin.ignore();
	cout << "Type any input string." << endl;
	cin.getline(str,10);
	for (int i = 0; i <= strlen(str); i++) {
		if (str[i] == de) {
			count++;
		}
	}
	cout << count<<endl;
}
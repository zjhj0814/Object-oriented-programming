#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;

void outputLine(int account, const string& name, double balance) {
	cout << left << setw(10) << account << setw(13) << name <<
		setw(7) << setprecision(2) << right << balance << endl;
}

int main() {
	ifstream inClientFile("FileOutput.txt", ios::in);
	cout << left << setw(10) << "Account" << setw(13) <<
		"Name" << "Balance\n" << fixed << showpoint;
	
	int account;
	string name;
	double balance;

	while (inClientFile >> account >> name >> balance) {
		//outputLine(account, name, balance);
		cout << account << name << balance;
	}

	inClientFile.close();
}
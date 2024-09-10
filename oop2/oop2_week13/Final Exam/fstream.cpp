#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include"ClientData.h"
using namespace std;

//string fstreamWrite(unsigned int account, const string& lastname, const string& firstname, double balance) {
//	ostringstream output;
//	output << fixed << showpoint << showbase << setprecision(2);
//	output << account << " " << lastname << " " << firstname << " " << balance;
//	return output.str();
//}

int main() {
	fstream credit("credit.dat", ios::in|ios::out | ios::binary);
	unsigned int account;
	string lastname;
	string firstname;
	double balance;

	cout << "Enter account number(1 to 100, 0 to end input)\n?";
	cin >> account;

	while (account>0&&account<=100) {
		cout << "Enter lastname,firstname and balance\n?";
		
		cin >> lastname >> firstname >> balance;

		ClientData client(account, lastname, firstname, balance);

		credit.seekp((client.getAccountNumber() - 1) * sizeof ClientData);
		credit.write(reinterpret_cast<const char*>(&client), sizeof ClientData);

		cout << "Enter account number(1 to 100, 0 to end input)\n?";
		cin >> account;
	}
	
	//credit.seekg(0);
	//string line;
	//while (!credit.eof()) {
	//	getline(credit, line);
	//	cout << line << endl;
	//	line.clear();
	//}

	credit.close();
}
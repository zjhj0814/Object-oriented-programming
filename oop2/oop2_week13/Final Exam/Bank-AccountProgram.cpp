#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include"ClientData.h"
using namespace std;

enum class Choice{PRINT=1, UPDATE, NEW, DELETE, END};

Choice enterChoice();
void createTextFile(fstream&);
void updateRecord(fstream&);
void newRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const ClientData&);
int getAccount(const char* const);

int main() {
	fstream inOutCredit{ "credit.dat",ios::in | ios::out | ios::binary };
	if (!inOutCredit) {
		cerr << "File could not be opend." << endl;
		exit(EXIT_FAILURE);
	}

	Choice choice;
	while ((choice = enterChoice()) != Choice::END) {
		switch (choice) {
		case Choice::PRINT:
			createTextFile(inOutCredit);
			break;
		case Choice::UPDATE:
			updateRecord(inOutCredit);
			break;
		case Choice::NEW:
			newRecord(inOutCredit);
			break;
		case Choice::DELETE:
			deleteRecord(inOutCredit);
			break;
		default:
			cerr << "Incorrect choice" << endl;
			break;
		}
		inOutCredit.clear();
	}
}

Choice enterChoice() {
	cout << "\nEnter your choice\n"
		<< "1 - store a formatted text file of accounts\n"
		<< "    called \"print.txt\" for printing\n"
		<< "2 - update an account\n"
		<< "3 - add a new account\n"
		<< "4 - delete an account\n"
		<< "5 - end program\n?";
	int number;
	cin >> number;
	return static_cast<Choice>(number);
}

void createTextFile(fstream& readFromFile) {
	//�� ���� inOutCreidt�� binary Ÿ���̶� ���� ��ǻ�Ϳ� ������ �ż� �ӵ��� ��������.
	//������ ����ڰ� �б⿡�� �������� �ʴ�. ���� print.txt��� ���ο� ���Ͽ� ������� ����Ѵ�
	ofstream output("print.txt", ios::out);
	if (!output) {
		cerr << "File could not be created." << endl;
		exit(EXIT_FAILURE);
	}
	output << left << setw(10) << "Account" << setw(15) << "Last Name" << setw(10) << "First Name" << setw(10) << "Balance\n";
	
	readFromFile.seekg(0);
	ClientData client;
	readFromFile.read(reinterpret_cast<char*>(&client), sizeof ClientData);
	//reinterpret_cast�� char*�� ����ȯ�� client..?

	while (!readFromFile.eof()) {
		if (client.getAccountNumber() != 0) {
			outputLine(output, client);
		}

		readFromFile.read(reinterpret_cast<char*>(&client), sizeof ClientData);
	}
	output.close(); //������ createTextFile�� ȣ���ص� ���� �� �����?
}

void updateRecord(fstream& updateFile) {
	size_t index;
	double updateBalance;
	ClientData client;
	cerr << "Enter account to update (1-100): ";
	cin >> index;
	if (index > 0 && index <= 100) {
		updateFile.seekg((index - 1) * sizeof ClientData);
		updateFile.read(reinterpret_cast<char*>(&client), sizeof ClientData);
		outputLine(cout, client);
		cout<<"\nEnter charge (+) or payment (-): ";
		cin >> updateBalance;
		client.setBalance(client.getBalance() + updateBalance);
		updateFile.seekp((index - 1) * sizeof ClientData);
		updateFile. write(reinterpret_cast<const char*>(&client), sizeof ClientData);
		outputLine(cout, client);
	}
	else {
		cerr << "Account #" << index
			<< " has no information." << endl;
	}
}

void newRecord(fstream& appendFile) {
	int account;
	string lastname;
	string firstname;
	double balance;

	cerr << "Enter new account number(1-100): ";
	cin >> account;
	if (account > 0 || account <= 100) {
		cerr << "\nEnter lastname, firstname, balance\n?";
		cin >> lastname >> firstname >> balance;
		ClientData client{ account,lastname,firstname,balance };
		appendFile.seekp((account - 1) * sizeof ClientData);
		appendFile.write(reinterpret_cast<const char*>(&client), sizeof ClientData);
	}
}

void deleteRecord(fstream& deleteFromFile) {
	int accountNumber{ getAccount("Enter account to delete") };
	deleteFromFile.seekg((accountNumber - 1) * sizeof ClientData);

	ClientData client;
	deleteFromFile.read(reinterpret_cast<char*>(&client), sizeof ClientData);

	if (client.getAccountNumber() != 0) {
		ClientData blankClient;
		deleteFromFile.seekp((accountNumber - 1) * sizeof ClientData);
		deleteFromFile.write(reinterpret_cast<const char*>(&blankClient), sizeof ClientData);
		cout<<"Account *"<<accountNumber<< "deleted.\n";
	}
	else {
		cerr << "Account #" << accountNumber << "is empty.\n";
	}
}

void outputLine(ostream& outputFile, const ClientData& client) {
	outputFile<< left << setw(10) << client.getAccountNumber() << setw(15) << client.getLastName()
		<< setw(10) << client.getFirstName() <<fixed<< setw(10)<<showpoint<<showbase<< client.getBalance()<<endl;
}

int getAccount(const char* const prompt) {
	int accountNumber;

	do {
		cout << prompt << "( 1-100): ";
		cin >> accountNumber;
	} while (accountNumber < 1 || accountNumber>100);
	return accountNumber;
}
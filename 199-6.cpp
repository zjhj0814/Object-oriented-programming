#include<iostream>
using namespace std;

int main()
{
	int credit, tution, total;
	int registraionfee = 10;
	do {
		cout << "학점:";
		cin >> credit;
	} while (credit <= 0);
	if (credit > 12) {
		tution = 10 * 12;
	}
	else {
		tution = 10 * credit;
	}
	total = registraionfee + tution;
	cout << "총 수업료:" << total;

}

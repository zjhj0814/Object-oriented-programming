#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int Celsius;
	double Fahrenheit;
	do {
		cout << "0~99 ������ ���� �µ�:";
		cin >> Celsius;
	} while (Celsius < 0 || Celsius>99);

	Fahrenheit = static_cast<double>(Celsius) * 1800 / 100.0 + 32;

	cout << fixed << setfill(' ')<< setw(13);
	cout << "���� �µ�";
	cout << "|";
	cout<<"ȭ�� �µ�" << endl;
	cout << "---------------------------" << endl;
	cout << setw(13) << Celsius;
	cout << "|";
	cout << setw(13) << Fahrenheit;
}
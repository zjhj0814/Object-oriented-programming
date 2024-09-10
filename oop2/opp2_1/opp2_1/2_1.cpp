#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	for (int n = 1; n <= 9; n++)
	{
		for (int m = 2; m <= 5; m++)
		{
			cout << setw(6) << m << " ¡¿ " << n << " = ";
			cout << setw(2) << m * n;
		}
		cout << endl;
	}
	cout << endl;
	for (int n = 1; n <= 9; n++)
	{
		for (int m = 6; m <= 9; m++)
		{
			cout << setw(6) << m << " ¡¿ " << n << " = ";
			cout << setw(2) << m * n;
		}
		cout << endl;
	}
}
#include<iostream>
#include<cmath>
using namespace std;

int checkr(double);

int main()
{
	cout << checkr(23.2) << endl;
	cout << checkr(23.8) << endl;
	cout << checkr(-23.2) << endl;
	cout << checkr(-23.8) << endl;
}

int checkr(double x)
{
	return round(x);
}
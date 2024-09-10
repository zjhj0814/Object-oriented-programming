#include<iostream>
using namespace std;

double convert(double x)
{
	x = (x - 32) * (100.0 / 180.0);
	return x;
}

int main()
{
	cout << convert(32) << endl;
	cout << convert(98.6) << endl;
	cout << convert(104) << endl;
	cout << convert(212);
}
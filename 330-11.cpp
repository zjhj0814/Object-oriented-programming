#include<iostream>
using namespace std;

double convert(double);

int main()
{
	double num;
	cout << convert(0)<<endl;
	cout << convert(37) << endl;
	cout << convert(40) << endl;
	cout << convert(100);
}

double convert(double x)
{
	x = x * 180.0 / 100.0 + 32;
	return x;
}
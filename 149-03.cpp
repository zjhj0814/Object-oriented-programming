#include<iostream>
#include<limits>
using namespace std;

int main()
{
	float num1 = +numeric_limits<float>::max();
	float num2 = -numeric_limits<float>::max();
	float num3 = numeric_limits<float>::min();
	cout << "float 자료형의 양의 최대값:" << num1 << endl;
	cout << "float 자료형의 음의 최대값:" << num2 << endl;
	cout << "float 자료형의 최소값:" << num3 << endl;

	double num4 = +numeric_limits<double>::max();
	double num5 = -numeric_limits<double>::max();
	double num6 = numeric_limits<double>::min();
	cout << "double 자료형의 양의 최대값:" << num4 << endl;
	cout << "double 자료형의 음의 최대값:" << num5 << endl;
	cout << "double 자료형의 최소값:" << num6 << endl;
}
#include<iostream>
#include<limits>
using namespace std;

int main()
{
	float num1 = +numeric_limits<float>::max();
	float num2 = -numeric_limits<float>::max();
	float num3 = numeric_limits<float>::min();
	cout << "float �ڷ����� ���� �ִ밪:" << num1 << endl;
	cout << "float �ڷ����� ���� �ִ밪:" << num2 << endl;
	cout << "float �ڷ����� �ּҰ�:" << num3 << endl;

	double num4 = +numeric_limits<double>::max();
	double num5 = -numeric_limits<double>::max();
	double num6 = numeric_limits<double>::min();
	cout << "double �ڷ����� ���� �ִ밪:" << num4 << endl;
	cout << "double �ڷ����� ���� �ִ밪:" << num5 << endl;
	cout << "double �ڷ����� �ּҰ�:" << num6 << endl;
}
//long long int�� ���������� ���� �ϰ� ���� int �ڷ����� �Ȱ��� �ִ��ּҰ��� ���Ѵ�.

#include<iostream>
#include<limits>
using namespace std;

int main()
{
	long num1= numeric_limits<long>::max();
	long num2 = numeric_limits<long>::min();
	cout << "long int�ڷ����� �ִ밪:" << num1 << endl;
	cout << "long int�ڷ����� �ּҰ�:" << num2 << endl;

	long long num3 = numeric_limits<long long>::max();
	long long num4 = numeric_limits<long long>::min();
	cout << "long long int �ڷ����� �ִ밪:" << num3 << endl;
	cout << "long long int �ڷ����� �ּҰ�:" << num4 << endl;
}
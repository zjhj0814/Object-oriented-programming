#include<iostream>
using namespace std;

int main()
{
	int smaller,num1, num2, num3;
	cout << "3���� ������ �Է��ϼ���:";
	cin >> num1 >> num2 >> num3;
	smaller = num1 <= num2 ? num1 : num2;
	smaller = smaller <= num3 ? smaller : num3;
	cout << "���� ���� ��:" << smaller;
}
#include<iostream>
using namespace std;

int main()
{
	int num, sum=0;
	do {
		cout << "���� ����:";
		cin >> num;
	} while (num <= 0);

	sum += num % 10;

	do {
		num = num / 10;
		sum += num % 10;
	} while (num >= 10);

	cout << "��� �ڸ����� ��: " << sum;
}
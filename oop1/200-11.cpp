#include<iostream>
using namespace std;

int main()
{
	int dollar,count100=0,count50=0,count20=0,count10=0,count5=0,count1=0;
	do {
		cout << "�޷� ��:";
		cin >> dollar;
	} while (dollar < 0);
	if (dollar / 100 > 0)
	{
		count100 += (dollar / 100);
		dollar = dollar % 100;
		cout << "100�޷�" << count100 << "��  ";
	}
	if (dollar / 50 > 0)
	{
		count50 += (dollar / 50);
		dollar = dollar % 50;
		cout << "50�޷�" << count50 << "��  ";
	}
	if (dollar / 20 > 0)
	{
		count20 += (dollar / 20);
		dollar = dollar % 20;
		cout << "20�޷�" << count20 << "��  ";
	}
	if (dollar / 10 > 0)
	{
		count10 += (dollar / 10);
		dollar = dollar % 10;
		cout << "10�޷�" << count10 << "��  ";
	}
	if (dollar / 5 > 0)
	{
		count5 += (dollar / 5);
		dollar = dollar % 5;
		cout << "5�޷�" << count5 << "��  ";
	}
	if (dollar / 1 > 0)
	{
		count1 += (dollar /1);
		dollar = dollar % 1;
		cout << "1�޷�" << count1 << "��  ";
	}
}
#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	do {
		cout << "1~100 ������ ���� ����:";
		cin >> num1;
	} while (num1 < 1 || num1>100);
	do {
		cout << "1~100 ������ ���� ����:";
		cin >> num2;
	} while (num2 < 1 || num2>100);

	if (num1 >= num2)
	{
		for (int i = 1; i <= num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				cout << i << endl;
			}
		}
	}
	else
	{
		for (int i = 1; i <= num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				cout << i << endl;
			}
		}
	}

}
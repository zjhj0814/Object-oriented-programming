#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num;

	do {
		cout << "1~100 ������ ���� ������ �Է��ϼ���.:";
		cin >> num;
	} while (num < 1 || num>100);

	cout << num << "�� ���:";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << " "<<i;
		}
	}
}
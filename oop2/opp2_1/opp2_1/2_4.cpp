#include<iostream>
using namespace std;

int main()
{
	int num1, num2, GCD = 0;
	do {
		cout << "�� ���ڸ� �Է��Ͻÿ�.";
		cin >> num1 >> num2;
	} while (num1 <= 0 || num2 <= 0);

	while (GCD < 1)
	{
		if (num1 == num2)
		{
			GCD = num1;
		}
		else if (num1 > num2)
		{
			num1 = num1 - num2;
		}
		else
		{
			num2 = num2 - num1;
		}
	}
	cout << GCD << "�� �ִ������̴�.";
}
#include<iostream>
using namespace std;

int main()
{
	int num1, num2, GCD = 0;
	do {
		cout << "두 숫자를 입력하시오.";
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
	cout << GCD << "은 최대공약수이다.";
}
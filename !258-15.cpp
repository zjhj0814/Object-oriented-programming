#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int original;
	int num;
	int num1, num2;
	int count = 1;
	bool isPalindrome=true;
	do {
		cout << "양의정수:";
		cin >> original;
	} while (original <= 0);

	num = original;
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}

	while (isPalindrome)
	{
		for (int i = 1; (i<=count/2)&&(isPalindrome==true); i++)
		{
			if (original / pow(10, count - i) != (original / pow(10, i - 1) % 10))
			{
				isPalindrome=false;
			}
		}
	}

	if (isPalindrome)
	{
		cout << "이 숫자는 회문숫자가 맞습니다.";
	}
	else
	{
		cout << "이 숫자는 회문숫자가 아닙니다.";
	}
}
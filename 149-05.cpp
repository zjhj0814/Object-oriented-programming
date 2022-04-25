#include<iostream>
using namespace std;

int main()
{
	int num,firstDigit,secondDigit,thirdDigit;
	cout << "정수를 입력하시오:";
	cin >> num;
	thirdDigit = num / 100;
	if (thirdDigit >= 10) 
	{
			thirdDigit = thirdDigit % 10;
	}

	secondDigit = num / 10;
	if (secondDigit >= 10) 
	{
		secondDigit = secondDigit % 10;
	}

	firstDigit = num % 10;

	cout << "정수의 첫번째 자릿수:" << firstDigit << endl;
	cout << "정수의 두번째 자릿수:" << secondDigit << endl;
	cout << "정수의 세번째 자릿수:" << thirdDigit << endl;
}
#include<iostream>
using namespace std;

int main()
{
	int num,firstDigit,secondDigit,thirdDigit;
	cout << "������ �Է��Ͻÿ�:";
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

	cout << "������ ù��° �ڸ���:" << firstDigit << endl;
	cout << "������ �ι�° �ڸ���:" << secondDigit << endl;
	cout << "������ ����° �ڸ���:" << thirdDigit << endl;
}
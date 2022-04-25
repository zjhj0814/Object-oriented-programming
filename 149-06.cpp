#include <iostream>
using namespace std;

int main()
{
	int num,firstDigit,secondDigit,thirdDigit;
	do {
		cout << "세 자릿수의 정수:";
		cin >> num;
	} while (num <100||num>=1000);
	thirdDigit = num / 100;
	secondDigit = (num / 10) % 10;
	firstDigit = num %10;
	cout << firstDigit << secondDigit << thirdDigit;
}
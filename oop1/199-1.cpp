#include <iostream>
using namespace std;

int main()
{
	unsigned int num, num1, num2;
	do {
		cout << "��ȣ���� ���ڸ� ����:";
		cin >> num;
	} while (num < 10 || num>99);
	num1 = num / 10;
	num2 = num % 10;
	cout << num2 << num1;
}
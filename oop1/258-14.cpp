#include<iostream>
using namespace std;

int main()
{
	int num;
	do {
		cout << "��������:";
		cin >> num;
	} while (num <= 0);

	cout << num << "�� �ڸ����� �ݴ�� �ؼ� ����ϰڽ��ϴ�."<<endl;
	cout << num % 10;

	do {
		num = num / 10;
		cout << num % 10;
	} while (num >= 10);
}
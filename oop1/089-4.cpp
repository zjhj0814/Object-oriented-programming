#include<iostream>
using namespace std;

int main()
{
	unsigned int hour, minute, second, conversion;
	cout << "�ð�:" << endl;
	cin >> hour;
	cout << "��:" << endl;
	cin >> minute;
	cout << "��:" << endl;
	cin >> second;
	conversion = hour * 60 * 60 + minute * 60 + second;
	cout << "�� ������ ȯ���� ��:" << conversion;
}
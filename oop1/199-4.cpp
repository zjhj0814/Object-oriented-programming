#include<iostream>
using namespace std;

int main()
{
	char type;
	int hour, fee;
	do
	{
		cout << "������ ����(�Ϲ� �¿����� c, ������ b, Ʈ���� t�� �Է��Ͻÿ�):";
		cin >> type;
	} while (type != 'c' && type != 'b' && type != 't');
	cout << "�����忡 ������ �ִ� �ð�:";
	cin >> hour;
	if (type == 'c') {
		fee = hour * 2;
	}
	else if (type == 'b') {
		fee = hour * 3;
	}
	else {
		fee = hour * 4;
	}
	cout << "���� ���:" << fee << "$�Դϴ�.";
}
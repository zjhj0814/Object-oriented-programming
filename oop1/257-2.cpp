//�̷��� break;�� ���� �ʾƼ� �𷡽ð� ���¸� ����ϴ� �͸��� ���� for() �ȿ� �𷡽ð踦 ����ϴ� ����� ������?

#include<iostream>
using namespace std;

int main()
{
	int type, size, opp;

	do
	{
		cout << "������ ����(1~2):";
		cin >> type;
	} while (type < 1 || type>2);
	do
	{
		cout << "������ ũ��(�� ��):";
		cin >> size;
	} while (size < 0);

	switch (type)
	{
		case 1: for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= i - 1; j++)
			{
				cout << " ";
			}
			opp = size - i + 1;
			for (int k =1; k <= 2*opp-1; k++)
			{
				cout << '*';
			}
			cout << endl;
		}
			  break;
		case 2:for (int i = size; i >= 1; i--)
		{
			for (int j = i - 1; j >= 1; j--)
			{
				cout << " ";
			}
			opp = size - i + 1;
			for (int k = 2*opp-1; k >= 1; k--)
			{
				cout << '*';
			}
			cout << endl;
		}
			 break;
	}
}
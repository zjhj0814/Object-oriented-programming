//����, �Ѱ��� ��ǰ�� �ƴ϶� �������� ��ǰ�� ����� ��쿡�� ��� �߰� ��ǰ�� �Է��� �� ������?

#include<iostream>
using namespace std;

int main()
{
	double price, total;
	int quantity;
	do {
		cout << "���� �ϳ��� ����:";
		cin >> price;
	}while (price <= 0);
	do {
		cout << "���� ����:";
		cin >> quantity;
	} while (quantity < 1);
	switch (quantity / 10)
	{
	case 0: total = price * quantity;
		break;
	case 1:total = price * quantity * 0.97;
		break;
	case 2:total = price * quantity * 0.97;
		break;
	case 3:total = price * quantity * 0.97;
		break;
	case 4:total = price * quantity * 0.97;
		break;
	case 5:total = price * quantity * 0.95;
		break;
	case 6:total = price * quantity * 0.95;
		break;
	case 7:total = price * quantity * 0.95;
		break;
	case 8:total = price * quantity * 0.95;
		break;
	case 9:total = price * quantity * 0.95;
		break;
	default: total = price * quantity * 0.9;
	}
	cout << "��ü ����:" << total;
}
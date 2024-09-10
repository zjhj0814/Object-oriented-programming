//만약, 한가지 물품이 아니라 여러가지 물품을 사려는 경우에는 어떻게 추가 물품을 입력할 수 있을까?

#include<iostream>
using namespace std;

int main()
{
	double price, total;
	int quantity;
	do {
		cout << "물건 하나의 가격:";
		cin >> price;
	}while (price <= 0);
	do {
		cout << "구매 수량:";
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
	cout << "전체 가격:" << total;
}
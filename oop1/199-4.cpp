#include<iostream>
using namespace std;

int main()
{
	char type;
	int hour, fee;
	do
	{
		cout << "차량의 종류(일반 승용차는 c, 버스는 b, 트럭은 t를 입력하시오):";
		cin >> type;
	} while (type != 'c' && type != 'b' && type != 't');
	cout << "주차장에 차량이 있던 시간:";
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
	cout << "주차 요금:" << fee << "$입니다.";
}
#include<iostream>
using namespace std;

int main()
{
	int num;
	do {
		cout << "양의정수:";
		cin >> num;
	} while (num <= 0);

	cout << num << "의 자릿수를 반대로 해서 출력하겠습니다."<<endl;
	cout << num % 10;

	do {
		num = num / 10;
		cout << num % 10;
	} while (num >= 10);
}
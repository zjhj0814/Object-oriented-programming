#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num;

	do {
		cout << "1~100 사이의 양의 정수를 입력하세요.:";
		cin >> num;
	} while (num < 1 || num>100);

	cout << num << "의 약수:";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << " "<<i;
		}
	}
}
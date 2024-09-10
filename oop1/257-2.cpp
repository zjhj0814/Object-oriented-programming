//이렇게 break;를 쓰지 않아서 모래시계 형태를 출력하는 것말고 같은 for() 안에 모래시계를 출력하는 방법은 없을까?

#include<iostream>
using namespace std;

int main()
{
	int type, size, opp;

	do
	{
		cout << "패턴의 종류(1~2):";
		cin >> type;
	} while (type < 1 || type>2);
	do
	{
		cout << "패턴의 크기(줄 수):";
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
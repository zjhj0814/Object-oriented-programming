#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int type, size;

	do {
		cout << "패턴의 종류(1~4):";
		cin >> type;
	} while (type < 1 || type>4);
	do {
		cout << "패턴의 크기(1~9):";
		cin >> size;
	} while (size < 1 || size>9);

	switch (type) 
	{
		case 1: for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << '*';
			}
			cout << endl;
		}
			  break;
		case 2: for (int i = 1; i <= size; i++)
		{
			for (int j = size + 1 - i; j >= 1; j--)
			{
				cout << '*';
			}
			cout << endl;
		}
			  break;
	/* case2 다른 풀이법
		case 2: for (int i = size; i >=1; i--)
		{
			for (int j = i; j >= 1; j--)
			{
				cout << '*';
			}
			cout << endl;
		}
			  break; */
		case 3: for (int i = 1; i <= size; i++)
		{
			for (int j =1; j < i; j++)
			{
				cout << " ";
			}
			for (int k = size + 1 - i; k >= 1; k--)
			{
				cout << '*';
			}
			cout << endl;
		}
			  break;
		case 4: for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size - i; j++)
			{
				cout << " ";
			}
			for (int k = 1; k <= i; k++)
			{
				cout <<'*';
			}
			cout << endl;
		}
			  break;
	}
}
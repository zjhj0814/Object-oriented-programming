#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1, num2;
	int col = 1;
	do {
		cout << "���� ������ �ΰ� �Է��Ͻÿ�.";
		cin >> num1 >> num2;
	} while (num1 <= 0 || num2 <=0);
	if (num1 >= num2)
	{
		for (int i = num2+1; i <num1; i++)
		{
			cout << i<<" ";
			col++;
			if (col> 7)
			{
				cout << endl;
				col = 1;
			}
		}
	}
	else
	{
		for (int i = num1+1; i < num2; i++)
		{
			cout << i<<" ";
			col++;
			if (col> 7)
			{
				cout << endl;
				col = 1;
			}
		}
	}
}
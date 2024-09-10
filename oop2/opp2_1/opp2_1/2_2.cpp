#include<iostream>
using namespace std;

int main()
{
	int size;
	do
	{
		cout << "Please input one number:";
		cin >> size;
	} while (size < 1);

	while (size >= 1)
	{
		for (int i = 1; i <= size; i++)
		{
			cout << '*';
		}
		size--;
		cout << endl;
	}
}
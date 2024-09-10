#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void print(const int original[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << original[i] << " ";
	}
	cout << endl;
}

void roundShift(const int original[], int round[], int size)
{
	int num = original[size - 1];
	for (int i = size - 2; i >= 0; i--)
	{
		round[i + 1] = original[i];
	}
	round[0] = num;
}

int main()
{
	int high = 100;
	int low = 1;
	int original[10];
	int round[10];

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		int temp = rand();
		original[i] = temp % (high - low + 1) + low;
	}
	roundShift(original, round, 10);
	print(original, 10);
	print(round, 10);
}
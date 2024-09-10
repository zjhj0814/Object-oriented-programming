#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int Arr[10];
	int high = 10;
	int low = 1;
	int num, large=-100, small=100;

	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		int temp = rand();
		int num = temp % (high - low + 1) + low;
		Arr[i] = num;
	}

	for (int i = 0; i < 10; i++)
	{
		if (Arr[i] < small)
		{
			small = Arr[i];
		}
		if (Arr[i] > large)
		{
			large = Arr[i];
		}
	}

	cout << "최소값: " << small << " 최대값: " << large;
}
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random(int hh, int lw)
{
	int temp = rand();
	int num = temp % (hh - lw + 1) + lw;
	return num;
}

int sum_random(int high, int low)
{
	int sum= 0;
	for (int i = 1; i <= 10; i++)
	{
		int num = random(high, low);
		cout << num << " ";
		sum += num;
	}
	return sum;
}

int main()
{
	int low = 10;
	int high = 99;
	srand(time(0));

	for (int j = 1; j <= 5; j++)
	{
		cout << j << "번째 세트의 합: " << sum_random(high,low) << endl;
	}
}
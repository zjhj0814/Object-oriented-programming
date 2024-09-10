#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int random(int hh, int lw)
{
	int temp = rand();
	int num=temp % (hh - lw + 1) + lw;
	return num;
}

int main()
{
	int high = 1;
	int low = 0;
	int count0 = 0, count1 = 0;

	srand(time(0));
	
	for (int i = 1; i <= 1000000; i++)
	{
		if (random(high, low) == 0)
		{
			count0++;
		}
		else
		{
			count1++;
		}
	}

	cout << "동전의 앞면이 나온 횟수: " << count0 << endl;
	cout << "동전의 뒷면이 나온 횟수: " << count1 << endl;
}
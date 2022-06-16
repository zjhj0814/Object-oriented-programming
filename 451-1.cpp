#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void print(const int arr[], int size)
{
	int col = 1;

	for (int i = 0; i < size; i++)
	{
		cout << setw(3) << arr[i] << " ";
		col++;
		
		if (col > 10)
		{
			cout << endl;
			col = 1;
		}
	}
}

int main()
{
	int Arr[100];
	int high = 200;
	int low = 100;

	srand(time(0));

	for (int i = 0; i < 100; i++)
	{
		int temp = rand();
		int num = temp % (high - low + 1) + low;
		Arr[i] = num;
	}

	print(Arr, 100);
}
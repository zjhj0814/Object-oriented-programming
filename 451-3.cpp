#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main()
{
	int high = 100;
	int low = 1;
	int arr[10];
	int sum1 = 0;
	double sum2 = 0;
	double average, stde;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		int temp = rand();
		arr[i] = temp % (high - low + 1) + low;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < 10; i++)
	{
		sum1 += arr[i];
	}

	average = static_cast<double>(sum1) / 10;
	cout << endl;
	cout<<fixed << setprecision(2) << "요소의 평균: " << average << endl;
	
	for (int i = 0; i < 10; i++)
	{
		sum2 += pow(arr[i] - average, 2);
	}

	stde = sqrt(sum2) / 10.0;
	cout << "요소의 표준편차: " << stde;
}
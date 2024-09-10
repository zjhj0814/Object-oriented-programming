#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

int random(int high, int low)
{
	int temp = rand();
	int num = temp % (high - low + 1) + low;
	return num;
}

int main()
{
	int high = 9;
	int low = 1;
	srand(time(0));

	for (int i = 1; i <= 10; i++)
	{
		int integer = random(high, low);
		double point=static_cast<double>(random(high, low)) / 10.0;
		cout << integer + point << endl;
	}

}
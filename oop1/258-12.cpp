#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int col=1;
	bool leapYear;
	
	for (int year = 2000; year <= 2099; year++)
	{
		leapYear = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
		if (leapYear)
		{
			cout << setw(6) << year;
			col++;
			if (col > 5)
			{
				cout << endl;
				col = 1;
			}
		}
	}
}
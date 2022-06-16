#include "Zeller.h"

int main()
{
	Zeller oneday(2002, 8, 14);
	cout << "해당 요일: " << oneday.DayWeek();
}
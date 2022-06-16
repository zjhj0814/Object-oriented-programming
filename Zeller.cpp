#include "Zeller.h"

Zeller::Zeller(int y, int m, int d)
	:year(y), month(m), day(d)
{
	if (year < 1 || month < 1 || month>12 || day < 1 || day>31)
	{
		cout << "잘못된 날짜를 입력하셨습니다." << endl;
		cout << "프로그램이 종료됩니다." << endl;
		assert(false);
	}
}

Zeller::~Zeller()
{

}

string Zeller::DayWeek()
{
	int weekday = (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;
	string dayweek;
	switch (weekday)
	{
	case 0: dayweek="토";
		break;
	case 1: dayweek="일";
		break;
	case 2: dayweek = "월";
		break;
	case 3: dayweek ="화";
		break;
	case 4: dayweek = "수";
		break;
	case 5: dayweek = "목";
		break;
	case 6: dayweek = "금";
		break;
	}

	return dayweek;
}

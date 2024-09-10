#include<iostream>
using namespace std;

int main()
{
	int weekday, year, month, day;
	do {
		cout << "연도:";
		cin >> year;
		cout << "월:";
		cin >> month;
		cout << "일:";
		cin >> day;
	} while (year < 1 || month < 1 || month>12 || day < 1 || day>31);
	weekday = (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;
	switch (weekday)
	{
	case 0: cout << "토요일";
		break;
	case 1: cout << "일요일";
		break;
	case 2: cout << "월요일";
		break;
	case 3: cout << "화요일";
		break;
	case 4: cout << "수요일";
		break;
	case 5: cout << "목요일";
		break;
	case 6: cout << "금요일";
		break;
	}
}
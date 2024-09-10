#include<iostream>
using namespace std;

int main()
{
	int year;
	bool leapYear;
	int month;
	int day;
	int totalDays = 0;
	do {
		cout << "연도:";
		cin >> year;
	} while (year <= 0);
	leapYear = (year % 400==0) || (year % 4==0 && !(year % 100==0));
	do {
		cout << "몇월인지 입력하세요:";
		cin >> month;
	} while (month < 1 || month>12);
	int m01 = 31;
	int m03 = 31;
	int m04 = 30;
	int m05 = 31;
	int m06 = 30;
	int m07 = 31;
	int m08 = 31;
	int m09 = 30;
	int m10 = 31;
	int m11 = 30;
	do {
		cout << "며칠인지 입력하세요:";
		cin >> day;
	} while (day < 1 || day>31); //음 해당 월의 최대 날짜로 계산하는 방법은 없을까?
	if (leapYear)
	{
		int m02 = 29;
		if (month >= 3)
		{
			totalDays += m02;
		}
	}
	else
	{
		int m02 = 28;
		if (month >= 3)
		{
			totalDays += m02;
		}
	}
	switch (month)
	{
	case 12: totalDays += m11;
	case 11: totalDays += m10;
	case 10: totalDays += m09;
	case 9: totalDays += m08;
	case 8: totalDays += m07;
	case 7: totalDays += m06;
	case 6: totalDays += m05;
	case 5: totalDays += m04;
	case 4: totalDays += m03;
	case 2: totalDays += m01;
	case 1: totalDays += 0;
	}
	totalDays += day;
	cout << year << "년도의" << totalDays << "번째 날입니다.";
}
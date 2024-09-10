#include "Zeller.h"

Zeller::Zeller(int y, int m, int d)
	:year(y), month(m), day(d)
{
	if (year < 1 || month < 1 || month>12 || day < 1 || day>31)
	{
		cout << "�߸��� ��¥�� �Է��ϼ̽��ϴ�." << endl;
		cout << "���α׷��� ����˴ϴ�." << endl;
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
	case 0: dayweek="��";
		break;
	case 1: dayweek="��";
		break;
	case 2: dayweek = "��";
		break;
	case 3: dayweek ="ȭ";
		break;
	case 4: dayweek = "��";
		break;
	case 5: dayweek = "��";
		break;
	case 6: dayweek = "��";
		break;
	}

	return dayweek;
}

#include<iostream>
using namespace std;

int main()
{
	int weekday, year, month, day;
	do {
		cout << "����:";
		cin >> year;
		cout << "��:";
		cin >> month;
		cout << "��:";
		cin >> day;
	} while (year < 1 || month < 1 || month>12 || day < 1 || day>31);
	weekday = (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;
	switch (weekday)
	{
	case 0: cout << "�����";
		break;
	case 1: cout << "�Ͽ���";
		break;
	case 2: cout << "������";
		break;
	case 3: cout << "ȭ����";
		break;
	case 4: cout << "������";
		break;
	case 5: cout << "�����";
		break;
	case 6: cout << "�ݿ���";
		break;
	}
}
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int startDay;
	int daysinMonth;
	int col = 1;

	for(int month=1;month<=12;month++)
	{
		do
		{
			cout << "�� ���� ��¥ ���� �Է��Ͻÿ�(28,29,30,31):";
			cin >> daysinMonth;
		} while (daysinMonth < 28 || daysinMonth > 31);
		do
		{
			cout << "ù ���� ������ �Է��Ͻÿ�(0~6):";
			cin >> startDay;
		} while (startDay < 0 || startDay > 6);
		cout << endl;
		cout << month << endl;
		cout << "SUN MON TUE WED THR FRI SAT" << endl;
		cout << "--- --- --- --- --- --- ---" << endl;
		for (int space = 0; space < startDay; space++)
		{
			cout << "    ";
			col++;
		}
		for (int day = 1; day <= daysinMonth; day++)
		{
			cout << setw(3) << day << " ";
			col++;
			if (col > 7)
			{
				cout << endl;
				col = 1;
			}
		}
		cout << endl << endl;
	}
	return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score;
	int sum = 0;
	double average;
	int counter = 0;
	while (counter < 4)
	{
		do
		{
			cout << "������ �ϳ� �Է��ϼ���(0~100����):";
			cin >> score;
		} while (score < 0 || score>100);
		sum += score;
		counter++;
	}
	average = static_cast<double>(sum) / 4;
	cout << fixed << setprecision(2);
	cout << "��� ����:" << average;
}
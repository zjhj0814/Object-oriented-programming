#include<iostream>
using namespace std;

int main()
{
	int score1, score2, score3, avg;
	do {
		cout << "점수(0~100점 기준) 3개를 입력하시오:";
		cin >> score1>> score2>> score3;
	} while (score1 < 0 || score1>100 || score2 < 0 || score2>100 || score3 < 0 || score3>100);
	avg = (score1 + score2 + score3) / 3;
	
	switch (avg / 10)
	{
	case 10: cout << "a";
		break;
	case 9: cout << "a";
		break;
	case 8:
		if (score3 > 90)
		{
			cout << "a";
		}
		else
		{
			cout << "b";
		}
		break;
	case 7:
		if (score3 > 80)
		{
			cout << "b";
		}
		else
		{
			cout << "c";
		}
		break;
	case 6:
		if (score3 > 70)
		{
			cout << "c";
		}
		else
		{
			cout << "d";
		}
		break;
	default:
		if (score3 > 60)
		{
			cout << "d";
		}
		else
		{
			cout << "f";
		}
		break;
	}
}
/*피연산자 정수>정수, 피연산자 부동소수점>부동소수점
즉, /는 몫이 아니라(물론, 정수자료형에서는 몫처럼 보인다) 나누는 것이다!*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int score1, score2, score3, score4;
	double average, decimal;
	cout << "점수1:";
	cin >> score1;
	cout << "점수2:";
	cin >> score2;
	cout << "점수3:";
	cin >> score3;
	cout << "점수4:";
	cin >> score4;

	average = static_cast<double>(score1 + score2 + score3 + score4) / 4;
	cout << fixed << showpoint<<setprecision(2);
	cout << "평균 점수=" << average;
}

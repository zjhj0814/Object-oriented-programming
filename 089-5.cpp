//setprecision 같은 경우 <iomanip> 헤더파일 불러오기

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1, num2, num3, num4, sum;
	cout << "첫번째 숫자:";
	cin >> num1;
	cout << "두번째 숫자:";
	cin >> num2;
	cout << "세번째 숫자:";
	cin >> num3;
	cout << "네번째 숫자:";
	cin >> num4;
	sum = num1 + num2 + num3 + num4;
	cout << "네 숫자의 합:" << sum << endl;
}
//showpoint, fixed, setprecision 모두 부동소수점 자료형의 출력 조정자이다!(부동소수점만 가능함, int xx)

#include<iostream>
using namespace std;

int main()
{	
	int num;
	cout << "정수를 입력하시오:";
	cin >> num;
	num = (num / 10) % 10;
	cout << num;
}
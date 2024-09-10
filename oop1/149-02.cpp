//long long int가 존재하지만 참고만 하고 차피 int 자료형과 똑같이 최대최소값을 구한다.

#include<iostream>
#include<limits>
using namespace std;

int main()
{
	long num1= numeric_limits<long>::max();
	long num2 = numeric_limits<long>::min();
	cout << "long int자료형의 최대값:" << num1 << endl;
	cout << "long int자료형의 최소값:" << num2 << endl;

	long long num3 = numeric_limits<long long>::max();
	long long num4 = numeric_limits<long long>::min();
	cout << "long long int 자료형의 최대값:" << num3 << endl;
	cout << "long long int 자료형의 최소값:" << num4 << endl;
}
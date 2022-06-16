#include<iostream>
using namespace std;

int main()
{
	int smaller,num1, num2, num3;
	cout << "3개의 정수를 입력하세요:";
	cin >> num1 >> num2 >> num3;
	smaller = num1 <= num2 ? num1 : num2;
	smaller = smaller <= num3 ? smaller : num3;
	cout << "가장 작은 수:" << smaller;
}
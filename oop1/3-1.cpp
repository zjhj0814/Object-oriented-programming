#include<iostream>
using namespace std;

//main()함수 안에 return0;을 넣지 않았을 경우
int main()
{
	int num1;
	int num2;
	int sum;
	cout << "첫 번째 숫자 입력:";
	cin >> num1;
	cout << "두 번쨰 숫자 입력:";
	cin >> num2;
	sum = num1 + num2;
	cout << "두 숫자의 합:" << sum;
}
/*main() 함수 안에 return0; 을 넣지 않았을 경우, 
에러 비 발생, 정상작동하는 것을 알 수 있었다!*/

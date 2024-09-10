//( , )형태로 입력했을때도 컴퓨터가 x, y에 저장할 수 있는 방법이 있나 고민해보자

#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "좌표값(좌표값만 x띄어쓰기 y순으로 넣어주세요)";
	cin >> x>>y;
	if (x > 0) {
		if (y > 0)
		{
			cout << "제 1사분면에 위치합니다.";
		}
		else if (y == 0)
		{
			cout << "x축 위에 있습니다.";
		}
		else {
			cout << "제 4사분면에 위치합니다.";
		}
	}
	else if (x == 0) {
		if (y == 0) 
		{
			cout << "원점입니다.";
		}
		else {
			cout << "y축 위에 있습니다.";
		}
	}
	else {
		if (y > 0)
		{
			cout << "제 2사분면에 위치합니다.";
		}
		else if (y == 0)
		{
			cout << "x축 위에 있습니다.";
		}
		else {
			cout << "제 3사분면에 위치합니다.";
		}
	}
}
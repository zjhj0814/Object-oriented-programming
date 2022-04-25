#include<iostream>
using namespace std;

//cout에 <<(출력한다)라는 동작대신 >>(입력한다)라는 동작을 사용하는 경우
int main()
{
	cout << "가" << endl;
	cout << "나" << endl;
	cout >> "다";
}

/*cout에 <<대신 >>을 사용하는 경우, 에러가 발생하는 것을 볼 수 있었다
이러한 경우 cin에는 <<를, cout에는 >>을 입력해야 해결된다*/

int main()
{
	cout << "가" << endl;
	cout << "나" << endl;
	cout << "다";
}

//대상에 올바른 동작을 입력하니 정상작동하는 것을 알 수 있었다.
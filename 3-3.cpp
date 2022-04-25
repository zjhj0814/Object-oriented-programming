#include<iostream>
using namespace std;

//중괄호를 열고 닫지는 않는 경우
int main()
{
	int x = -1245;
	unsigned int y = 2378;
	cout << x << endl;
	cout << y << endl;
	return 0;

/*중괄호를 열고 닫지는 않는 경우, 오류가 발생했다.
함수 정의에는 열고 닫는 중괄호가 있어야 한다.
즉, 이와 같은 경우는 중괄호를 닫아주면 해결된다*/

//중괄호를 열고 닫는 경우
int main()
{
	int x = -1245;
	unsigned int y = 2378;
	cout << x << endl;
	cout << y << endl;
	return 0;
:

//정상 작동된다.
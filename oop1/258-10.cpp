#include<iostream>
using namespace std;

int main()
{
	int m, n, swap;
	cout << "두 정수 m과 n의 최대 공약수를 구하는 프로그램입니다." << endl;
	cout << "m을 입력하세요.";
	cin >> m;
	cout << "n을 입력하세요.";
	cin >> n;

	if (m < n) //m<n이면 m-n<0이 나오므로 계속 n!=0이 되어 값이 출력되지 않는다.
	{
		swap = n;
		n = m;
		m = swap;
	}

	while (n != 0)
	{
		m = m - n;
		if (m < n)
		{
			swap = n;
			n = m;
			m = swap;
		}
	}

	cout << "m과 n의 최대공약수는 " << m << " 입니다.";
}
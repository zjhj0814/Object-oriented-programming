#include<iostream>
using namespace std;

int main()
{
	int m, n, swap;
	cout << "�� ���� m�� n�� �ִ� ������� ���ϴ� ���α׷��Դϴ�." << endl;
	cout << "m�� �Է��ϼ���.";
	cin >> m;
	cout << "n�� �Է��ϼ���.";
	cin >> n;

	if (m < n) //m<n�̸� m-n<0�� �����Ƿ� ��� n!=0�� �Ǿ� ���� ��µ��� �ʴ´�.
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

	cout << "m�� n�� �ִ������� " << m << " �Դϴ�.";
}
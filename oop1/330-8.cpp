//srand �Լ��� �ݺ��� ���ο� ������ ������ ���� 10�� ��µȴ�. �� ����� �����ϱ�?
//����� ���� �Լ��� ���鶧, ������ ���� �ϴ� main()�� ����� �и�?��Ű��!

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void random(int hh, int lw)
{
	int num;
	srand(time(0));
	for (int i = 1; i <= 10; i++)
	{
		int temp = rand();
		num = 2 * (temp % (hh - lw + 1) + lw);
		cout << num << " ";
	}

}

int main()
{
	int high=5, low=1;
	random(high, low);
}

//showpoint, fixed, setprecision ��� �ε��Ҽ��� �ڷ����� ��� �������̴�!(�ε��Ҽ����� ������, int xx)

#include<iostream>
using namespace std;

int main()
{	
	int num;
	cout << "������ �Է��Ͻÿ�:";
	cin >> num;
	num = (num / 10) % 10;
	cout << num;
}
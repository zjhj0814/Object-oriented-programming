//setprecision ���� ��� <iomanip> ������� �ҷ�����

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1, num2, num3, num4, sum;
	cout << "ù��° ����:";
	cin >> num1;
	cout << "�ι�° ����:";
	cin >> num2;
	cout << "����° ����:";
	cin >> num3;
	cout << "�׹�° ����:";
	cin >> num4;
	sum = num1 + num2 + num3 + num4;
	cout << "�� ������ ��:" << sum << endl;
}
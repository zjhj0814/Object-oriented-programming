//( , )���·� �Է��������� ��ǻ�Ͱ� x, y�� ������ �� �ִ� ����� �ֳ� ����غ���

#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "��ǥ��(��ǥ���� x���� y������ �־��ּ���)";
	cin >> x>>y;
	if (x > 0) {
		if (y > 0)
		{
			cout << "�� 1��и鿡 ��ġ�մϴ�.";
		}
		else if (y == 0)
		{
			cout << "x�� ���� �ֽ��ϴ�.";
		}
		else {
			cout << "�� 4��и鿡 ��ġ�մϴ�.";
		}
	}
	else if (x == 0) {
		if (y == 0) 
		{
			cout << "�����Դϴ�.";
		}
		else {
			cout << "y�� ���� �ֽ��ϴ�.";
		}
	}
	else {
		if (y > 0)
		{
			cout << "�� 2��и鿡 ��ġ�մϴ�.";
		}
		else if (y == 0)
		{
			cout << "x�� ���� �ֽ��ϴ�.";
		}
		else {
			cout << "�� 3��и鿡 ��ġ�մϴ�.";
		}
	}
}
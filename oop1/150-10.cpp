/*�ǿ����� ����>����, �ǿ����� �ε��Ҽ���>�ε��Ҽ���
��, /�� ���� �ƴ϶�(����, �����ڷ��������� ��ó�� ���δ�) ������ ���̴�!*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int score1, score2, score3, score4;
	double average, decimal;
	cout << "����1:";
	cin >> score1;
	cout << "����2:";
	cin >> score2;
	cout << "����3:";
	cin >> score3;
	cout << "����4:";
	cin >> score4;

	average = static_cast<double>(score1 + score2 + score3 + score4) / 4;
	cout << fixed << showpoint<<setprecision(2);
	cout << "��� ����=" << average;
}

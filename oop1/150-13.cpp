//�� �� ���� ������� �ʾҴ��� �����ض�!

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double basepay,extrapay,totalpay;
	int extrahour;
	cout << "�������� �⺻�޿�:";
	cin >> basepay;
	cout << "�߰��� ���� �ð�:";
	cin >> extrahour;
	extrapay = static_cast<double>(extrahour) * basepay*1.6;
	basepay*=40;
	totalpay = basepay + extrapay;
	cout << fixed << showpoint << setprecision(2);
	cout << basepay << endl;
	cout << extrapay << endl;
	cout << "��ü �޿�=" << totalpay;	
}
/*************************************************
1)�ڷ����� �ִ밪,�ּҰ� ���ϱ� numeric_limits<>::
2)<limits>������� �߰��ϱ�
3)<>���� �ڷ����� ���� ���߱� �ظ����� �ʴ��� ������ �� ������, ���� �̻��ϰ� ��µ�
*************************************************/

#include<Iostream>
#include<limits>
using namespace std;

int main()
{
	short int num1 = numeric_limits<short>::max();
	short int num2 = numeric_limits<short>::min();
	cout << "short �ڷ����� �ִ밪:" << num1 << endl;
	cout << "short �ڷ����� �ּҰ�:" << num2 << endl;

	unsigned int num3 = numeric_limits<unsigned int>::max();
	unsigned int num4 = numeric_limits<unsigned int>::min();
	cout << "unsigned int �ڷ����� �ִ밪:" << num3 << endl;
	cout << "unsigned int �ڷ����� �ּҰ�:" << num4 << endl;

}
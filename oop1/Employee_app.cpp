#include "Employee.h"

int main()
{
	Employee em1("��ȿ��", 21, 1, 240000);
	cout << "�̸�: "<<em1.getName() << endl;
	cout << "����: " << em1.getAge() << endl;
	cout << "�ٹ����: " << em1.getServiceYear() << endl;
	cout << "�޿�: " << em1.getSalary() << endl;
}
#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee(string fst, char i, string lst, int sal)
	:firstName(fst), initial(i), lastName(lst), salary(sal)
{
	if (!IsValid)
	{
		cout << "��ȿ���� ���� �����Դϴ�." << endl;
		assert(false);
	}
}

SalaryEmployee::~SalaryEmployee()
{

}

bool SalaryEmployee::IsValid() const
{
	if (salary <= 0)
	{
		return false;
	}
	return true;
}

int SalaryEmployee::getTotalSalary() const
{
	return salary;
}
void SalaryEmployee::print() const
{
	cout << "������ �̸�:" << firstName << initial << lastName << endl;
	cout << "������ ����:" << salary;
}
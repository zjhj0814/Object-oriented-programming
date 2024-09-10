#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee(string fst, char i, string lst, int sal)
	:firstName(fst), initial(i), lastName(lst), salary(sal)
{
	if (!IsValid)
	{
		cout << "유효하지 않은 월급입니다." << endl;
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
	cout << "직원의 이름:" << firstName << initial << lastName << endl;
	cout << "직원의 월급:" << salary;
}
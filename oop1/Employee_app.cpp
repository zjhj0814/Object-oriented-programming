#include "Employee.h"

int main()
{
	Employee em1("정효정", 21, 1, 240000);
	cout << "이름: "<<em1.getName() << endl;
	cout << "나이: " << em1.getAge() << endl;
	cout << "근무년수: " << em1.getServiceYear() << endl;
	cout << "급여: " << em1.getSalary() << endl;
}
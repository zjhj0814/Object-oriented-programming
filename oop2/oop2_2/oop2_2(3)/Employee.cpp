#include "Employee.h"

Employee::Employee(const string& f, const string& l, const Date& b, const Date& h) 
	:firstName{f}, lastName{l}, birthDate{b}, hireDate{h}
{
	//���� birth�� hiredate�� ���� �����ڷ� �����ǰڱ���!
}

string Employee::toString() const{
	ostringstream oss;
	oss << lastName << " " << firstName << "(" << birthDate.toString() << ") : " << hireDate.toString();
	return oss.str();
}

Employee::~Employee(){}
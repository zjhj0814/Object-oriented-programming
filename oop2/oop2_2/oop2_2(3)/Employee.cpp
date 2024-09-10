#include "Employee.h"

Employee::Employee(const string& f, const string& l, const Date& b, const Date& h) 
	:firstName{f}, lastName{l}, birthDate{b}, hireDate{h}
{
	//위에 birth랑 hiredate는 복사 생성자로 생성되겠구나!
}

string Employee::toString() const{
	ostringstream oss;
	oss << lastName << " " << firstName << "(" << birthDate.toString() << ") : " << hireDate.toString();
	return oss.str();
}

Employee::~Employee(){}
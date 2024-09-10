#include"Car.h"
#include"Brand.h"
#include"Information.h"

Car::Car(const Brand& br, const Information& in)
	:brand{ br }, information{ in }
{

}

Car::Car(const Car& c)
	:brand{c.brand}, information{c.information}
{

}

Car::~Car()
{
	/*brand.~Brand();
	information.~Information();
	�̹� �������� ������ ������ brand�� informaiton �Ҹ��ڸ� �ҷ���! �ϰ� �ҷ��� �ʿ� ����*/
}

void Car::print()
{
	brand.print();
	information.print();
}
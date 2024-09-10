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
	이미 스코프가 끝나면 저절로 brand와 informaiton 소멸자를 불러옴! 니가 불러올 필요 없다*/
}

void Car::print()
{
	brand.print();
	information.print();
}
#include "Address.h"

Address::Address(int hnum, string street, string city, string state, int code)
	:houseNo(hnum),streetName(street),cityName(city),stateName(state),zipcode(code)
{

}

Address::~Address()
{

}

void Address::print() const
{
	cout << "집 번호" << houseNo<<" ";
	cout << "길 이름:" << streetName<<" ";
	cout << "도시 이름:" << cityName<<" ";
	cout << "나라 이름:" << stateName << " ";
	cout << "우편 번호:" << zipcode << " ";
}
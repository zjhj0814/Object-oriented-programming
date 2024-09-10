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
	cout << "�� ��ȣ" << houseNo<<" ";
	cout << "�� �̸�:" << streetName<<" ";
	cout << "���� �̸�:" << cityName<<" ";
	cout << "���� �̸�:" << stateName << " ";
	cout << "���� ��ȣ:" << zipcode << " ";
}
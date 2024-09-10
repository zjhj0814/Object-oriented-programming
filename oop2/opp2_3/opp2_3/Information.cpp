#include "Information.h"
#include <stdio.h> //printf

Information::Information(int a, int b, int c)
	:Year{ a }, Kilometers{ b }
{
	Price = new int{ c };
}

Information::Information(const Information& in)
	:Year{ in.Year }, Kilometers{ in.Kilometers }
{
	Price = new int{ *(in.Price) };
}
Information::~Information()
{
	delete Price; //똑같이 nullptr로 해제!!!!!!!!!!
}

void Information::print()
{
	printf("Year:%d Kilometers:%d Price:%d", Year, Kilometers, (*Price));
}
#include "Triangle.h"

Triangle::Triangle(int a, int b, int c)
	:firstSide(a), secondSide(b), thirdSide(c)
{
	bool fst = (firstSide >= secondSide + thirdSide);
	bool snd = (secondSide >= firstSide + thirdSide);
	bool trd = (thirdSide >= firstSide + secondSide);
	
	if(fst || snd || trd)
	{
		cout << "삼각형 성립 조건을 만족하지 않습니다." << endl;
		cout << "프로그램을 종료합니다."<<endl;
		assert(false);
	}
}

Triangle::Triangle(const Triangle& triangle)
	:firstSide(triangle.firstSide), secondSide(triangle.secondSide), thirdSide(triangle.thirdSide)
{

}

Triangle::~Triangle()
{

}

void Triangle::getSides()
{
	Arr[0] = firstSide;
	Arr[1] = secondSide;
	Arr[2] = thirdSide;
}

int Triangle::getPerimeter() const
{
	return (firstSide + secondSide + thirdSide);
}

double Triangle::getArea() const
{
	double p = static_cast<double>(firstSide + secondSide + thirdSide) / 2;
	double area=static_cast<double>(sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide)));
	return area;
}

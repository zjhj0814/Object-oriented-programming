//getㅁ는 { return ㅁ } 느낌으로 출력하고, 리턴자료형+(class 이름::)+멤버 함수 이름+(const); 기억해라!

#include<iostream>
using namespace std;

class One
{
private:
	int x;
	int y;

public:
	One(int i,int j);
	~One();
	int getX() const;
	int getY() const;
};

One::One(int i, int j)
	:x(i), y(j)
{

}

One::~One()
{

}

int One::getX() const
{
	return x;
}

int One::getY() const
{
	return y;
}

int main()
{
	One One1(1,3);
	cout << One1.getX() << endl;
	cout << One1.getY() << endl;
}
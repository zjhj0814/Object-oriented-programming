//get���� { return �� } �������� ����ϰ�, �����ڷ���+(class �̸�::)+��� �Լ� �̸�+(const); ����ض�!

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
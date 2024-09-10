//�Ű������� ���޵� ��ü!�� �Ű������� �������� �Է����� ���,,

#include<iostream>
#include<cmath>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int X, int Y);
	~Point();
	Point(const Point& point) = delete;
	int getPointX(); //distance �Լ����� ���� ���� ��ǥ����
	int getPointY();
	void print() const; //��ǥ�� ���
	void where(int a, int b); //��ǥ�� �ٸ� ��ǥ�� ����, ������, ��, �Ʒ� ��� �ִ��� ����ϴ� �Լ�
	void distance(int a, int b); //ȣ��Ʈ ��ü�� �Ű������� ���޵� ��ü�� �Ÿ��� ���ϴ� �Լ�
};

Point::Point(int X, int Y)
	:x(X), y(Y)
{

}

Point::~Point()
{

}

int Point::getPointX()
{
	return x;
}

int Point::getPointY()
{
	return y;
}

void Point::print() const
{
	cout << "��ǥ:(" << x << "," << y << ")" << endl;
}

void Point::where(int a, int b)
{
	if (x > a)
	{
		cout << "(3,7)��ǥ�� �����ʿ� �ְ�,";
	}
	else if (x < a)
	{
		cout << "(3,7)��ǥ�� ���ʿ� �ְ�, ";
	}
	else {
		cout << "x��ǥ�� ��ġ�ϰ�,";
	}

	if (y > b)
	{
		cout << "���� �ִ�." << endl;
	}
	else if (y < b)
	{
		cout << "�Ʒ��� �ִ�." << endl;
	}
	else {
		cout << "y��ǥ�� ��ġ�Ѵ�." << endl;
	}
}

void Point::distance(int a, int b)
{
	cout << sqrt(pow(x-a,2)+pow(y-b,2));
}

int main()
{
	Point Point1(7, 9);
	Point1.print();
	Point1.where(3, 7);
	Point1.distance(10,10);
}
//매개변수로 전달된 객체!

#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int X, int Y);
	~Point();
	Point(const Point& point);
	int getPointX(); //distance 함수에서 쓰기 위한 좌표추출
	int getPointY();
	void print() const; //좌표를 출력
	void where(int a, int b); //좌표가 다른 좌표의 왼쪽, 오른쪽, 위, 아래 어디에 있는지 출력하는 함수
	void distance(Point point); //호스트 객체와 매개변수로 전달된 객체의 거리를 구하는 함수
};

Point::Point(int X, int Y)
	:x(X), y(Y)
{

}

Point::~Point()
{

}

Point::Point(const Point& point)
	:x(point.x), y(point.y)
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
	cout << "좌표:(" << x << "," << y << ")" << endl;
}

void Point::where(int a, int b)
{
	if (x > a)
	{
		cout << "(3,7)좌표의 오른쪽에 있고,";
	}
	else if (x < a)
	{
		cout <<"(3,7)좌표의 왼쪽에 있고, ";
	}
	else {
		cout << "x좌표는 일치하고,";
	}

	if (y > b)
	{
		cout <<"위에 있다." << endl;
	}
	else if (y < b)
	{
		cout << "아래에 있다." << endl;
	}
	else {
		cout << "y좌표는 일치한다." << endl;
	}
}

void Point::distance(Point point)
{
	int x1 = point.x;
	int y1 = point.y;
	cout<< sqrt(pow(x - x1,2) + pow(y - y1,2));
}

int main()
{
	Point Point1(7, 9);
	Point1.print();
	Point1.where(3, 7);
	Point Point2(7,10);
	Point1.distance(Point2);
}
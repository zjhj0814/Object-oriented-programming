//매개변수로 전달된 객체!가 매개변수에 정수값을 입력했을 경우,,

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
	int getPointX(); //distance 함수에서 쓰기 위한 좌표추출
	int getPointY();
	void print() const; //좌표를 출력
	void where(int a, int b); //좌표가 다른 좌표의 왼쪽, 오른쪽, 위, 아래 어디에 있는지 출력하는 함수
	void distance(int a, int b); //호스트 객체와 매개변수로 전달된 객체의 거리를 구하는 함수
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
		cout << "(3,7)좌표의 왼쪽에 있고, ";
	}
	else {
		cout << "x좌표는 일치하고,";
	}

	if (y > b)
	{
		cout << "위에 있다." << endl;
	}
	else if (y < b)
	{
		cout << "아래에 있다." << endl;
	}
	else {
		cout << "y좌표는 일치한다." << endl;
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
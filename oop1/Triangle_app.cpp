#include "Triangle.h"

int main()
{
	Triangle triangle(3, 7, 9);
	cout << setprecision(2) << showpoint;
	triangle.getSides();
	cout << "세변의 길이:";
	for (int i = 0; i <= 2; i++)
	{
		cout << triangle.Arr[i] << " ";
	}
	cout << endl<<"삼각형의 둘레:" << triangle.getPerimeter() << endl;
	cout << "삼각형의 넓이:" << triangle.getArea() << endl;

	Triangle tri1(triangle);
	tri1.getSides();
	cout << "세변의 길이:";
	for (int i = 0; i <= 2; i++)
	{
		cout << tri1.Arr[i] << " ";
	}
	cout << "삼각형의 둘레:" << tri1.getPerimeter() << endl;
	cout << "삼각형의 넓이:" << tri1.getArea() << endl;
}
#include "Triangle.h"

int main()
{
	Triangle triangle(3, 7, 9);
	cout << setprecision(2) << showpoint;
	triangle.getSides();
	cout << "������ ����:";
	for (int i = 0; i <= 2; i++)
	{
		cout << triangle.Arr[i] << " ";
	}
	cout << endl<<"�ﰢ���� �ѷ�:" << triangle.getPerimeter() << endl;
	cout << "�ﰢ���� ����:" << triangle.getArea() << endl;

	Triangle tri1(triangle);
	tri1.getSides();
	cout << "������ ����:";
	for (int i = 0; i <= 2; i++)
	{
		cout << tri1.Arr[i] << " ";
	}
	cout << "�ﰢ���� �ѷ�:" << tri1.getPerimeter() << endl;
	cout << "�ﰢ���� ����:" << tri1.getArea() << endl;
}
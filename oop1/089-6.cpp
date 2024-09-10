#include<iostream>
using namespace std;

int main()
{
	double length, area, perimeter;
	cout << "정사각형 변의 길이:";
	cin >> length;
	area = length * length;
	perimeter = 4 * length;
	cout << "정사각형의 면적:" << area << endl;
	cout << "정사각형의 둘레:" << perimeter << endl;
}
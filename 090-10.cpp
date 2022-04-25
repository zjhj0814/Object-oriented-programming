//setw()는 iomanip 헤더파일을 불러올 것

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string province, gu, road, address;
	string comma = ",";
	string space = " ";
	int road_number, postal_code, num;
	cout << "시/도 이름:";
	cin >> province;
	cout << "구 이름:";
	cin >> gu;
	cout << "도로 이름:";
	cin >> road;
	cout << "도로 번호:";
	cin >> road_number;
	cout << "우편 번호:";
	cin >> postal_code;
	address = province + comma + space + gu + comma + space + road + comma + space;
	cout << address;
	cout << setfill('0');
	cout<<setw(3) << road_number<<comma << space;
	cout<< setw(5)<< postal_code;
}
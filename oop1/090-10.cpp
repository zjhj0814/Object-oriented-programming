//setw()�� iomanip ��������� �ҷ��� ��

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
	cout << "��/�� �̸�:";
	cin >> province;
	cout << "�� �̸�:";
	cin >> gu;
	cout << "���� �̸�:";
	cin >> road;
	cout << "���� ��ȣ:";
	cin >> road_number;
	cout << "���� ��ȣ:";
	cin >> postal_code;
	address = province + comma + space + gu + comma + space + road + comma + space;
	cout << address;
	cout << setfill('0');
	cout<<setw(3) << road_number<<comma << space;
	cout<< setw(5)<< postal_code;
}
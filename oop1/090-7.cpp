//string���� ��쿡�� <string>��������� �ҷ��Ͷ�!
//string���̿� ,�� ., ���� �������� string���� �����ϰ� +�� �����ض�!

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string last_name, name, western_name;
	string comma = ",";
	string space = " ";
	cout << "��:";
	cin >> last_name;
	cout << "�̸�:";
	cin >> name;
	western_name = name + comma + space + last_name;
	cout << "����� �̸� ǥ��:" << western_name;
}
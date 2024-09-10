//string같은 경우에는 <string>헤더파일을 불러와라!
//string사이에 ,나 ., 띄어쓰고 싶을때는 string으로 선언하고 +로 연결해라!

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string last_name, name, western_name;
	string comma = ",";
	string space = " ";
	cout << "성:";
	cin >> last_name;
	cout << "이름:";
	cin >> name;
	western_name = name + comma + space + last_name;
	cout << "서양식 이름 표현:" << western_name;
}
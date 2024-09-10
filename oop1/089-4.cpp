#include<iostream>
using namespace std;

int main()
{
	unsigned int hour, minute, second, conversion;
	cout << "시간:" << endl;
	cin >> hour;
	cout << "분:" << endl;
	cin >> minute;
	cout << "초:" << endl;
	cin >> second;
	conversion = hour * 60 * 60 + minute * 60 + second;
	cout << "초 단위로 환산한 값:" << conversion;
}
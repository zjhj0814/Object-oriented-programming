//앞 선 값이 변경되지 않았는지 유의해라!

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double basepay,extrapay,totalpay;
	int extrahour;
	cout << "일주일의 기본급여:";
	cin >> basepay;
	cout << "추가로 일한 시간:";
	cin >> extrahour;
	extrapay = static_cast<double>(extrahour) * basepay*1.6;
	basepay*=40;
	totalpay = basepay + extrapay;
	cout << fixed << showpoint << setprecision(2);
	cout << basepay << endl;
	cout << extrapay << endl;
	cout << "전체 급여=" << totalpay;	
}
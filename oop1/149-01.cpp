/*************************************************
1)자료형의 최대값,최소값 구하기 numeric_limits<>::
2)<limits>헤더파일 추가하기
3)<>안의 자료형에 변수 맞추기 ※맞추지 않더라도 에러는 안 나지만, 값이 이상하게 출력됨
*************************************************/

#include<Iostream>
#include<limits>
using namespace std;

int main()
{
	short int num1 = numeric_limits<short>::max();
	short int num2 = numeric_limits<short>::min();
	cout << "short 자료형의 최대값:" << num1 << endl;
	cout << "short 자료형의 최소값:" << num2 << endl;

	unsigned int num3 = numeric_limits<unsigned int>::max();
	unsigned int num4 = numeric_limits<unsigned int>::min();
	cout << "unsigned int 자료형의 최대값:" << num3 << endl;
	cout << "unsigned int 자료형의 최소값:" << num4 << endl;

}
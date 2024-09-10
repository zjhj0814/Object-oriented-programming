#include "Practice1.h"

int main()
{
	/*char* 로 푸는 법 알아보기!, cstring복습 다시하기
	string 타입은 null 이미 되어 있음 따로 쓸 필요X..? char* char[] string 비교하기*/
	Server s1("server0", 0, 10, 1);
	Server s2("server1", 1, 10, 1); 
	Server s3("server3", 2, 20, 1);

	s1.updateMaintanenceDay(3);
	s3.updateMaintanenceDay(5);
	s3.updateOSUpdateDay(5);
	cout << "The last day OS was updated is "
		<< s1.getOSUpdateDay() << endl;
	return 0;
}
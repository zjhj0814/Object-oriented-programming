#include "Practice1.h"

int main()
{
	/*char* �� Ǫ�� �� �˾ƺ���!, cstring���� �ٽ��ϱ�
	string Ÿ���� null �̹� �Ǿ� ���� ���� �� �ʿ�X..? char* char[] string ���ϱ�*/
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
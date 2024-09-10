//srand 함수를 반복문 내부에 넣으면 동일한 값만 10번 출력된다. 그 까닭은 무엇일까?
//사용자 정의 함수를 만들때, 복잡한 것은 일단 main()에 만들고 분리?시키자!

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void random(int hh, int lw)
{
	int num;
	srand(time(0));
	for (int i = 1; i <= 10; i++)
	{
		int temp = rand();
		num = 2 * (temp % (hh - lw + 1) + lw);
		cout << num << " ";
	}

}

int main()
{
	int high=5, low=1;
	random(high, low);
}

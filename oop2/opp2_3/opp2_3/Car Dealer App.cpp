#include<iostream>
#include<vector> //벡터
#include"Brand.h"
#include"Car.h"
#include"Information.h"
using namespace std;

int main()
{
	static int counter = 0;
	int a;
	int id, year, kilometers, price;
	bool end = true;
	string strb, stri;
	vector<Car> v;
	while (end) {
		do {
			cout << "1. Create a new record.\n";
			cout << "2. Print all the records\n";
			cout << "3. Exit\n>>";
			cin >> a;
		} while (a < 1 || a>3);


		if (a == 1)  //switch 컨트롤 전송으로 다음 초기화를 건너뜀?
		{
			counter++;
			cout << "1. Create a Brand class.\nID, Brand_name, Model_name:";
			cin >> id >> strb >> stri;

			cout << "2. Create an Information class.\n Year, Kilometers, Price:";
			cin >> year >> kilometers >> price;

			Brand brand(id, strb, stri);
			Information information(year, kilometers, price);

			cout << "3. Create a Car class.\n";
			Car c(brand, information); //다른 while문 넘어가면 소멸자 생성-> 참조변수로 막고 그걸 아래처럼 넣는다

			cout << "4. Add it into a vector.\n\n";
			v.push_back(c); 

			//벡터에 집어넣을때 얕은 복사를 써서 집어넣는데 그럴때 반드시 Car의 복사생성자를 만들어야 한다!!
			//기본적으로 벡터에 집어넣는 방법과 복사생성자로 집어넣는 방법?에 대해 알아보자.

			//*(v[counter]) = c; 는 왜 안될까? => c[counter]는 counter번째 원소를 '반환'한다.

			//delete하고나서 null포인터!!!!!! 빈공간 가리키면 에러날 수 있음!!!!!!!!!
		}
		else if (a == 2)
		{
			for (Car& car : v)
			{
				car.print();
			}

			/*for (int i = 1; i <= counter; i++)
			{
				Car& car = v[i];
				car.print();
			}*/
		}

		else {
			v.clear(); //벡터 초기화
			end = false;
		}
	}
}
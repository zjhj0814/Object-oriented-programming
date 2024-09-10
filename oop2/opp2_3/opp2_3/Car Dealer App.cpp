#include<iostream>
#include<vector> //����
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


		if (a == 1)  //switch ��Ʈ�� �������� ���� �ʱ�ȭ�� �ǳʶ�?
		{
			counter++;
			cout << "1. Create a Brand class.\nID, Brand_name, Model_name:";
			cin >> id >> strb >> stri;

			cout << "2. Create an Information class.\n Year, Kilometers, Price:";
			cin >> year >> kilometers >> price;

			Brand brand(id, strb, stri);
			Information information(year, kilometers, price);

			cout << "3. Create a Car class.\n";
			Car c(brand, information); //�ٸ� while�� �Ѿ�� �Ҹ��� ����-> ���������� ���� �װ� �Ʒ�ó�� �ִ´�

			cout << "4. Add it into a vector.\n\n";
			v.push_back(c); 

			//���Ϳ� ��������� ���� ���縦 �Ἥ ����ִµ� �׷��� �ݵ�� Car�� ��������ڸ� ������ �Ѵ�!!
			//�⺻������ ���Ϳ� ����ִ� ����� ��������ڷ� ����ִ� ���?�� ���� �˾ƺ���.

			//*(v[counter]) = c; �� �� �ȵɱ�? => c[counter]�� counter��° ���Ҹ� '��ȯ'�Ѵ�.

			//delete�ϰ��� null������!!!!!! ����� ����Ű�� ������ �� ����!!!!!!!!!
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
			v.clear(); //���� �ʱ�ȭ
			end = false;
		}
	}
}
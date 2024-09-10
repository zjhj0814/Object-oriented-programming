//CarDealerApp.cpp
#include "Car.cpp"
#include<vector>

int main() {

	static int id, year, kilometers, price;
	int input;
	int k = 0;
	static string brand, model;

	vector<Car> v;

	cout << "1.Create a new record.\n2.Print all the records.\n3.Exit\n>>";

	while (k != 1) {
		cin >> input;
		switch (input) {
		case 1:
		{cout << "Create a Brand class. Write down id, brand name, model name.\n";
		cin >> id >> brand >> model;
		Brand BrandC(id, brand, model);

		cout << "Create an Information class. Write down year, kilometers, price\n";
		cin >> year >> kilometers >> price;
		Information InformationC(year, kilometers, price);

		Car car{ BrandC, InformationC };
		//cout << "Create a car class.";

		v.push_back(car); //Car(Car& car)�� �̿��� ������ ���簡 �ǰ���? ���ʿ� �ּҸ� �����ߴٰ��� ������.
		//cout << "Add it into a vector.";

		cout << "\n1.Create a new record.\n2.Print all the records.\n3.Exit\n>>";
		break;
		}
		case 2://���Ϳ� �����ϴ� �� �˾ƺ���
			for (int i = 0; i < v.size(); i++)
			{
				(v[i]).print();
				cout << endl;
			}
			cout << "\n1.Create a new record.\n2.Print all the records.\n3.Exit\n>>";
			break;
		case 3: v.clear();
			k = 1;
		}
	}
}
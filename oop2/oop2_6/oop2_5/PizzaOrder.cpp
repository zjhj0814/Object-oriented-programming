#include<iostream>
#include<vector>
using namespace std;

class order {
private: int cheese{ 0 };
	   int peperoni{ 0 };
	   int sausage{ 0 };
	   int mushroom{ 0 };
	   string customerName;
	   string address;
public:void set(int c, int p, int s, int m, string name, string address);
	  void set(string name, string address);
	  void set(string name, string addresss, int c, int p, int s, int m);
	  void display();
};

class  pizzaOrder {
private: vector<order*> orders;
public: void display();
	void add(class order* o) { orders.push_back(o); }
};

void order::set(int c, int p, int s, int m, string name, string address) {
	cheese = c;
	peperoni = p;
	sausage = s;
	mushroom = m;
	set(name, address);
}

void order::set(string name, string address) {
	customerName = name;
	this -> address = address;
}

void order::set(string name, string address, int c, int p, int s, int m) {
	set(name, address);
	cheese = c;
	peperoni = p;
	sausage = s;
	mushroom = m;
}

void order::display() {
	cout << "Name: " << customerName <<
		" Address: " << address <<
		" chesse: " << cheese <<
		" peperoni: " << peperoni <<
		" sausage: " << sausage <<
		" mushroom: " << mushroom << endl;
}

void pizzaOrder::display() {
	for (order* pizza:orders) {
		pizza->display();
	}
}

int main() {
	pizzaOrder orders;

	order o1, o2, o3;
	o1.set(0, 0, 0, 0, "Bart", "New York");
	orders.add(&o1);

	o2.set("Lisa", "New York");
	orders.add(&o2);

	o3.set("Homer", "New York", 10, 10, 10, 10);
	orders.add(&o3);
	orders.display();
	return 0;
}
#include<iostream>
using namespace std;

class order {
protected: int price;
	   string address;
public: order() = default;
	  order(int p, string addr) :price{ p }, address{ addr } {
		  cout << "An order: $" << price << " to " << address << " has been creadted" << endl;
	  }
	  virtual void changePrice(int newPrice) {
		  cout << "The basic order class does not allow to change the price" << endl;
	  }
	  virtual void display() {
		  cout << "The basic order class does not allow to display the price" << endl;
	  }
};

class chickenOrder :public order {
private:int price;
	   string address;
public: chickenOrder() = default;
	  chickenOrder(int p, string addr) :price{ p }, address{ addr } {
		  cout << "A chicken order:$" << price << " to " << address << " has been created" << endl;
	  }
	  void changePrice(int newPrice) override { price = newPrice;}
	  void display() {
		  cout << "A chicken order:$" << price << " to " << address << endl;
	  }
};

int main() {
	order o1(20, "Seoul");
	chickenOrder c1(50, "New York");
	cout << endl;

	o1.changePrice(100);
	c1.changePrice(200);
	cout << endl;

	o1.display();
	c1.display();
}
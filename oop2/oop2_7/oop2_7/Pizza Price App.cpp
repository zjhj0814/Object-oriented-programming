#include<iostream>
using namespace std;

class order {
private: int price;
	   string address;
public: order() = default;
	  order(int p, string addr) :price{ p }, address{ addr } {
		  cout << "An order:$ " << price << " to " << address << " has been created" << endl;
	  }
	  virtual void changePrice(int newPrice) {
		  cout << "The basic order class does not allow to change the price" << endl;
	  }
	  virtual void display() {
		  cout << "The basic order class does not allow to display the price" << endl;
	  }
	  virtual void changeAddress() = 0;
};

class chickenOrder :public order {
private: int price;
	   string address;
public: chickenOrder() = default;
	  chickenOrder(int p, string addr) :price{ p }, address{ addr } {
		  cout << "A chicken order:$" << price << " to " << address << " has been created" << endl;
	}
	  void changePrice(int newPrice) override { price = newPrice; }
	  void display() override {
		  cout << "A chicken order:$" << price << " to " << address << endl;
	  }
	  void changeAddress() override { address = "Inha University"; }
};

class pizzaOrder :public chickenOrder {
private:int price;
	   string address;
public:
	pizzaOrder(int p, string addr) :price{ p }, address{ addr } {
	cout << "A pizza order:$" << price << " to " << address << " has been created" << endl;
	}
	void changePrice(int newPrice) final{price = newPrice;}
	void display() final {
		cout << "A pizza order:$" << price << " to " << address << endl;
	 }
	void changeAddress() final { address = "Incheon"; }
};

int main() {
	chickenOrder c1{ 10,"New York" };
	pizzaOrder p1(5, "Seoul");
	cout << endl;

	c1.changeAddress();
	p1.changeAddress();

	c1.display();
	p1.display();
}
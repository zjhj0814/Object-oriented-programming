#include<iostream>
using namespace std;

class Count {
	friend void setX(Count&, int);
private: int x{ 0 };
public: int getX() {return x;}
};

void setX(Count& counter, int x) {
	counter.x = x;
}

int main() {
	Count counter;

	cout << "counter.x before instantiaiton : " << counter.getX()<<endl;
	setX(counter, 8);
	cout << "counter.x after call to setX friend function:" << counter.getX() << endl;
}
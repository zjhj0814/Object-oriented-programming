#include<iostream>
using namespace std;

class Engine {
public: Engine(int nc) { cylinder = nc; }
	  void start() { cout << getCylinder() << " cylinder engine started" << endl; }
	  int getCylinder() { return cylinder; }
private: int cylinder;
};

class Car :private Engine {
public:Car(int nc = 4) :Engine(nc) {}
	  void start() {	
		cout << "car with " << getCylinder() << " cylinder engine started\n";
		Engine::start(); 
	  }
};

int main() {
	Car c(8);
	c.start();
	return 0;
}
#include "Brand.cpp"
#include "Information.cpp"
#include<iostream>
using namespace std;

class Car {
private: Brand brand;
	   Information information;
public: Car() = delete;
	Car(const Brand& b, const Information& i) :brand{ b }, information{ i } {}
	  Car(const Car& car) :brand{ car.brand }, information{ car.information } {}
	  ~Car() {} //;붙였었나
	  void print() { brand.print(); information.print(); }
};
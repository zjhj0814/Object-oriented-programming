#ifndef INFORMATION_H
#define INFORMATION_H
#include<iostream>
using namespace std;

class Information {
private: int Year;
	   int Kilometers;
	   int* Price = nullptr;
public:Information(int y, int k, int p)
	:Year{ y }, Kilometers{ k } {
	Price = new int{ p };
}
	  Information(const Information& information)
		  :Year{ information.Year }, Kilometers{ information.Kilometers } {
		  Price = new int{ *(information.Price) };
	  }
	  ~Information() { if (Price != nullptr) { delete Price; } }
	  void print() { cout << "Information] year:" << Year << " kilometers:" << Kilometers << " price:" << *Price << endl; }
};

#endif
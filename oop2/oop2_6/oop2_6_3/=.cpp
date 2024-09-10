#include<iostream>
#include<cstring>
using namespace std;

class Tmp {
public: Tmp(const char* name) {
	_name = new char[strlen(name) + 1];
	for (int i = 0; i < strlen(_name); i++) {
		_name[i] = name[i];
	}
	_name[strlen(_name)] = NULL;
	cout << _name << endl;
	}
	Tmp& operator=(const Tmp& right) {
		  if (!(_name == right._name)) {
			  if (!(strlen(_name) == strlen(right._name))) {
				  delete[] _name;
				  _name = new char[strlen(right._name) + 1];
			  }
			  for (int i = 0; right._name[i] != NULL; ++i) {
				  _name[i] = right._name[i];
			  }
			  _name[strlen(right._name)] = NULL;
		  }
		  cout << "=" << _name;
		  return *this;
	}
	~Tmp() { delete[] _name; }
private: char* _name = nullptr;
};

int main() {
	Tmp t1{ "pby" };
	Tmp t2{ "dlwlrma" };
	t2 = t1;
}
#include<iostream>
using namespace std;

template <typename T>
T add(T t1, T t2) {
	return t1 + t2;
}

template<typename T1, typename T2>
double add(T1 t1, T2 t2) {
	return t1 + t2;
}

int main() {
	cout << add(2, 3) << endl;
	cout << add(2.1, 3.1) << endl;
	cout << add(2.1, 3) << endl;
}
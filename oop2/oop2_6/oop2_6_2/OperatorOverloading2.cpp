#include<iostream>
#include<iomanip>
using namespace std;

class Tmp {
	friend istream& operator>>(istream& input, Tmp& right) {
		input >> right.first;
		input.ignore(3, '-');
		input >> right.second;
		input.ignore(3, '-');
		input >> right.third;
		return input;
	}
	friend ostream& operator<<(ostream& output, Tmp& right) {
		output << setfill('0')<<setw(3) << right.first << "-" << setw(4) << right.second << "-" << setw(4) << right.third;
		return output;
	}
public: Tmp() {}
private: int first;
	   int second;
	   int third;
};

int main() {
	Tmp t;
	cout << "전화번호를 입력하시오." << endl;
	cin >> t;
	cout << t;
}

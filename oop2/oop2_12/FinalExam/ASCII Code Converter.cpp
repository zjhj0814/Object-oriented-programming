#include<iostream>
#include<string>
using namespace std;;

int main() {
	string line;

	cout << "Type ant strings you want to convert." << endl;
	while (getline(cin,line)) {
		if (cin.eof()) { cin.clear(); break; }
		for (int i = 0; i < line.length(); i++) {
			cout << static_cast<int>(line[i])<<" ";
		}
		cout << "\n";
		line.clear(); 
		//clear()과 empty()의 차이점은??
		//empty()는 문자열이 비었는지에 따라 정수값 리턴
		//clear()는 문자열 비워줌.
	}
	return 0;
}
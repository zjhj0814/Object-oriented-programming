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
		//clear()�� empty()�� ��������??
		//empty()�� ���ڿ��� ��������� ���� ������ ����
		//clear()�� ���ڿ� �����.
	}
	return 0;
}
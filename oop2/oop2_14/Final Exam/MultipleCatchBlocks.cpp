#include<iostream>
using namespace std;

int main() {
	int select;
	try {
		cin >> select;
		switch (select) {
		case 1:throw 1;
			break;
		case 2:throw 2.2;
			break;
		default: throw 'a';
			break;
		}
	}
	catch (double) { cout << "error:double\n"; } 
	//������ �ٲ��൵ �ִ��� �ڱ����� �˸´� ������ ����
	catch (int) { cout << "error:int\n"; }
	/*catch (double) { cout << "error:double\n";}*/
	catch (...) { cout << "error\n"; }
}
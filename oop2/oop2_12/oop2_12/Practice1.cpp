#include<iostream>
#include<cstring>
#include<string>
using namespace std;


//EOF ���� �ܼ�â�� �� ���̰� �ؾ� �ϴ� �� �ƴѰ�?

int main() {
	char str[50];

	cout << "Type any strings you want to convert." << endl;

	while (!cin.eof()) {
		//cin >> str; cin�� �̿��ؼ� char[] �ȿ� ���� �� �ְڱ���! ���� ������ �޾ƿ�
		cin.get(str,50);//cin.get()���� char[]�� �ֱ�, ����Ʈ ������ ����, ����Ű
		cin.ignore();
		for (int i = 0; i<strlen(str); i++) { 
			//strlen(str) ���ڿ��� ���� 3�� ��������� 3 ����(�� ������)
			cout << (int)str[i]<<" ";
		}
		cout << "\nConvert what I type into ASCII code." << endl;
		str[0] = '\0'; //���ڿ� ����..?
	}
}

/*int main() {
	string line;
	cout << "Type ant strings you want to convert." << endl;
	while (getline(cin, line)) {
		for (int i = 0; i < line.size(); i++) {
			cout << (int)line[i] << " ";
		}
		cout << "\nConvert what I type into ASCII code." << endl;
	}
}*/
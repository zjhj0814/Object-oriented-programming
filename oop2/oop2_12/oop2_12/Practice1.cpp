#include<iostream>
#include<cstring>
#include<string>
using namespace std;


//EOF 원래 콘솔창에 안 보이게 해야 하는 거 아닌가?

int main() {
	char str[50];

	cout << "Type any strings you want to convert." << endl;

	while (!cin.eof()) {
		//cin >> str; cin을 이용해서 char[] 안에 넣을 수 있겠구나! 띄어쓰기 전까지 받아옴
		cin.get(str,50);//cin.get()으로 char[]에 넣기, 디폴트 사이즈 제한, 엔터키
		cin.ignore();
		for (int i = 0; i<strlen(str); i++) { 
			//strlen(str) 문자열의 길이 3개 들어있으면 3 리턴(널 미포함)
			cout << (int)str[i]<<" ";
		}
		cout << "\nConvert what I type into ASCII code." << endl;
		str[0] = '\0'; //문자열 비우기..?
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
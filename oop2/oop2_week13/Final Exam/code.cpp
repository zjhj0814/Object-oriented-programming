#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ofstream codeFile("final exam code.txt", ios::out);
	string data;
	int position{ 0 };
	while (cin >> data) {
		codeFile.write(&data[0], 2);
	}
}

//헤헤 맞았당!
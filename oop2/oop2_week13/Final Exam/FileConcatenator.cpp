#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//int main() {
//	ifstream test1("test.txt", ios::in|ios::binary);
//	ifstream test2("test2.txt", ios::in|ios::binary);
//	ofstream test3("test3.txt", ios::out|ios::binary);
//	if (!(test1 || test2 || test3)) {
//		cerr << "File could not opened.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	string line1; string line2;
//	int eof1; int eof2;
//
//	test1.seekg(0,ios::end);
//	test2.seekg(0,ios::end);
//
//	eof1 = test1.tellg();
//	eof2 = test2.tellg();
//
//	line1.resize(eof1);
//	line2.resize(eof2);
//
//	test1.seekg(0,ios::beg);
//	test2.seekg(0,ios::beg);
//
//	test1.clear();
//	test2.clear();
//
//	test1.read(&line1[0], eof1); //과연 read line만큼 읽혔을까..?
//
//	cout << line1<<endl<<endl;
//
//	test2.read(&line2[0], eof2);
//
//	cout << line2;
//
//	test3.write(&line1[0], line1.length());
//	test3.write(&line2[0], line2.length());
//
//	test1.close();
//	test2.close();
//	test3.close();
//}

int main() {
	ifstream test1("test.txt", ios::in);
	ifstream test2("test2.txt", ios::in);
	ofstream test3("test3.txt", ios::out);

	string line;
	while (getline(test1, line)) {
		test3 << line << endl;
		line.clear();
	}
	while (getline(test2, line)) {
		test3 << line<<endl;
		line.clear();
	}

	test1.close(); test2.close(); test3.close();
}
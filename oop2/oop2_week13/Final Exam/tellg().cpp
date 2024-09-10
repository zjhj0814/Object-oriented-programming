#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ifstream input("test.txt", ios::in);
	
	int account;
	string name;
	double balance;
	
	while(input>>account>>name>>balance){
		cout<<"tellg(): "<<input.tellg()<<"\n";
		cout<<account<<" "<<name<<" "<<balance<<"\n\n";
	}
		
	input.close();
}

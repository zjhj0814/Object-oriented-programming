#include<iostream>
#include<string>
using namespace std;

int main() {
	string email;

	try {
		cout << "Enter Email Id : ";
		getline(cin,email);
		
		int i = 0;
		while (email[i] != '@') {
			if (i == email.length() && email[i] != '@') {
				throw email;
			}
			i++;
		}
		cout << "\nEmail Id is Valid.";
	}
	catch (string) {
		cout << "Exception Caught...\n"
			<< "Invalid Email Id!!!";
	}
}
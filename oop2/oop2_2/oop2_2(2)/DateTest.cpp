#include "Date.h"

int main() {
	Date date1{ 7,4,2004 };
	Date date2{ 1,1,2000 };
	cout<<date1.toString();
	cout << date2.toString();

	date2 = date1;
	cout << "After default memberwise assignment," << date2.toString();
}
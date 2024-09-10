#include "Employee.h"

int main() {
	try {
		Date birth{ 7,24,1949 };
		Date hire{ 3,12,1988 };
		Employee manager{"Bob", "Blue", birth, hire };
		cout << manager.toString() << endl;
	}
	catch (invalid_argument& i) { cout << i.what(); }

}
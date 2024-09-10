#include"Time.h"

void displayTime(Time& time) {
	cout << "Universal Time: " << time.toUniversalString()
		<< "\nStandard Time: " << time.toStandardString();
	if (time.getHour() < 12)
		cout << "AM"<<endl<<endl;
	else cout << "PM"<<endl<<endl;
}

int main() {
	cout << "Constructed with:\n";
	Time t1;
	cout << "t1: all arguments defaulted";
	displayTime(t1);

	Time t2{2};
	cout << "t2: hour specified: minute and second defaulted";
	displayTime(t2);

	Time t3(21, 34);
	cout << "t3: hour and minute specified; second defaulted";
	displayTime(t3);

	Time t4(12, 25, 42);
	cout << "t4: hour, minute, and second specified";
	displayTime(t4);

	try {
		Time t5(77, 85, 10);
	}
	catch (exception& e) {
		cout << "Exception while initializing t5:" << e.what();
	}
}
#include"Time.h"

int main() {
	Time t;
	
	t.setHour(18).setMinute(30).setSecond(22);

	cout << t.toUniversalString() << t.toStandardString();

	cout << t.setTime(20, 20, 20).toStandardString();
}
#include "Person.h"

int main()
{
	Person person1("정효정", 21);
	cout << person1.getName() << " ";
	cout << person1.getAge() << " ";
	person1.setName("토마토");
	person1.setAge(20);
	cout << person1.getName() << " ";
	cout << person1.getAge() << " ";
}
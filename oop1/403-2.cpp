#include<iostream>
using namespace std;

class Two
{
private:
	int x;
	char a;
public:
	Two(int x1, char a1);
	~Two();
	Two(const Two& two) = delete;
	int getX() const;
	char getA() const;
	void setX(int x2);
	void setA(char a2);
};

Two::Two(int x1, char a1)
	:x(x1), a(a1)
{

}

Two::~Two()
{

}

int Two::getX() const
{
	return x;
}

char Two::getA() const
{
	return a;
}

void Two::setX(int x2)
{
	x = x2;
}

void Two::setA(char a2)
{
	a = a2;
}

int main()
{
	Two Two1(101,'B');
	cout << Two1.getX() << endl;
	cout << Two1.getA() << endl;
	Two1.setX(1);
	Two1.setA('A');
	cout << Two1.getX() << endl;
	cout << Two1.getA() << endl;
}
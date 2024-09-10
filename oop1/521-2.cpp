#include"Fraction.h"
using namespace std;

Fraction& larger(Fraction& fract1, Fraction& fract2)
{
	if (fract1.getNumer() * fract2.getDenom() > fract2.getNumer() * fract1.getDenom())
	{
		return fract1;
	}
	return fract2;
}

Fraction& largerlarger(Fraction& fract1, Fraction& fract2, Fraction& fract3)
{
	if (larger(fract1, fract2).getNumer() * fract3.getDenom() > fract3.getNumer() * larger(fract1, fract2).getDenom())
	{
		return larger(fract1, fract2);
	}
	return fract3;
}

int main()
{
	Fraction fract1(3 , 13);
	Fraction fract2(5 , 17);
	Fraction fract3(1 , 3);
	largerlarger(fract1, fract2, fract3).print();
}
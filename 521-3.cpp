#include"Fraction.h"

Fraction& Multiplication(Fraction& fract1, Fraction& fract2)
{
    int denom = fract1.getDenom() * fract2.getDenom();
    int numer = fract1.getNumer() * fract2.getNumer();

    fract1.setDenom(denom);
    fract1.setNumer(numer);

    return fract1;
}

int main()
{
    Fraction fract1(1 , 13);
    Fraction fract2(13 , 1);
    Multiplication(fract1, fract2).print();

}
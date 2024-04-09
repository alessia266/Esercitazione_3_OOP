#include "ComplexNumber.hpp"
#include <iostream>

namespace ComplexNumberLibrary{
ComplexNumber ComplexNumber::conjugate()
{
    return ComplexNumber(real, -(imag));
}

ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    os << c.real << showpos << c.imag << "i" << noshowpos;
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.real + c2.real, c1.imag + c2.imag);
    return c;
}



bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    return c1.real == c2.real && c1.imag == c2.imag;

}

}

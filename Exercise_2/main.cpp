#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace ComplexNumberLibrary;


int main()
{
    ComplexNumber c(1,2);
    cout << "c = " << c << endl;

    ComplexNumber c_conj = c.conjugate();
    cout << "c_conj = " << c_conj << endl;

    ComplexNumber c1(2,3);
    cout << "c1 = " << c1 << endl;

    ComplexNumber c2(-1,-1);
    cout << "c2 = " << c2 << endl;

    if (c1 == c2)
        cout << "same number c1, c2" << endl;
    else
        cout << "different number c1, c2" << endl;


    ComplexNumber c_sum = c1 + c2;
    cout << "c_sum = c1 + c2 = " << c_sum << endl;

    if (c == c_sum)
        cout << "same number c, c_sum" << endl;
    else
        cout << "different number c, c_sum" << endl;


    return 0;
}

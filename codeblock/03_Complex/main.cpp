#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    cout << "Complex" << endl;

    Complex c1(10,2.5);
    Complex c2(11, 0.5);

    Complex c3, c4, c5, c6, c7, c8;

    c3 = c1+c2;
    c4 = c1-c2;
    c5 = c1*c2;
    c6 = c1/c2;
    c7 = {c1.real(), c1.imag()};
    c8 = {c1.real(), c2.imag()};

    cout << "c1(" << c1.real() << ", " << c1.imag() << ")" << endl;
    cout << "c2(" << c2.real() << ", " << c2.imag() << ")" << endl;
    cout << "+ c3(" << c3.real() << ", " << c3.imag() << ")" << endl;
    cout << "- c4(" << c4.real() << ", " << c4.imag() << ")" << endl;
    cout << "* c5(" << c5.real() << ", " << c5.imag() << ")" << endl;
    cout << "/ c6(" << c6.real() << ", " << c6.imag() << ")" << endl;

    if (c7==c1)
        cout << "c7==c1" << endl;
    else
        cout << "c7!=c1" << endl;

    if (c8!=c1)
        cout << "c8!=c1" << endl;
    else
        cout << "c8==c1" << endl;

    return 0;
}

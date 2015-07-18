#include "Complex.h"

Complex::Complex(): _real{0}, _imag{0}
{

}

Complex::Complex(double real): _real{real}, _imag{0}
{

}

Complex::Complex(double real, double imag): _real{real}, _imag{imag}
{

}

Complex::Complex(Complex& other): _real{other.real()}, _imag{other.imag()}
{

}

double Complex::real()
{
    return _real;
}

double Complex::imag()
{
    return _imag;
}

Complex& Complex::operator+=(Complex other)
{
    _real += other.real();
    _imag += other.imag();

    return *this;
}

Complex& Complex::operator-=(Complex other)
{
    _real -= other.real();
    _imag -= other.imag();

    return *this;
}

Complex& Complex::operator*=(Complex other)
{
    _real *= other.real();
    _imag *= other.imag();

    return *this;
}

Complex& Complex::operator/=(Complex other)
{
    _real /= other.real();
    _imag /= other.imag();

    return *this;
}

bool Complex::operator==(Complex other)
{
    return _real == other.real() && _imag == other.imag();
}

bool Complex::operator!=(Complex other)
{
    return !(*this==other);
}

Complex Complex::operator+(Complex other)
{
    return {_real+other.real(), _imag+other.imag()};
}

Complex Complex::operator-(Complex other)
{
    return {_real-other.real(), _imag-other.imag()};
}

Complex Complex::operator*(Complex other)
{
    return {_real*other.real(), _imag*other.imag()};
}

Complex Complex::operator/(Complex other)
{
    return {_real/other.real(), _imag/other.imag()};
}

Complex::~Complex()
{
    //dtor
}

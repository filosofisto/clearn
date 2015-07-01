#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    Complex();
    Complex(double real);
    Complex(double real, double imag);
    Complex(Complex& other);

    double real();
    double imag();
    void real(double real);
    void imag(double imag);
    Complex& operator+=(Complex other);
    Complex& operator-=(Complex other);
    Complex& operator*=(Complex other);
    Complex& operator/=(Complex other);
    bool operator==(Complex other);
    bool operator!=(Complex other);
    Complex operator+(Complex other);
    Complex operator-(Complex other);
    Complex operator*(Complex other);
    Complex operator/(Complex other);

private:
    double _real, _imag;

};

#endif // COMPLEX_H

#include <stdexcept>
#include "vector.h"

using namespace std;

Vector::Vector(int size)
{
    if (size < 0)
        throw length_error{"Vector::Vector"};

    _elem = new double[size];
    _size = size;
}

double& Vector::operator [](int i)
{
    if (i < 0 || i >= size())
        throw out_of_range{"Vector::operator[]"};

    return _elem[i];
}

int Vector::size()
{
    return _size;
}


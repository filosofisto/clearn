#include "vector.h"

Vector::Vector(int s): _elem{new double[s]}, _size{s}
{
    for (int i = 0; i < s; i++)
        _elem[i] = 0;
}

Vector::~Vector()
{
    delete[] _elem;
}

double& Vector::operator [](int i)
{
    return _elem[i];
}

int Vector::size()
{
    return _size;
}

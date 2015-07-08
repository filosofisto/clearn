#include "vector.h"

Vector::Vector(int size): _elem{new double[size]}, _size{size}
{

}

Vector::Vector(const Vector &source): _elem{new double[source._size]}, _size{source._size}
{
    for (int i = 0; i < _size; i++)
        _elem[i] = source._elem[i];
}

Vector::~Vector()
{
    delete[] _elem;
}

Vector& Vector::operator=(const Vector& source)
{
    double* p = new double[source._size];

    for (int i = 0; i < source._size; i++)
        p[i] = source._elem[i];

    delete[] _elem;
    _elem = p;
    _size = source._size;

    return *this;
}

double& Vector::operator[](int i)
{
    return _elem[i];
}

int Vector::size() const
{
    return _size;
}


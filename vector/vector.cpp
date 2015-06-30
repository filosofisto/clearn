#include "vector.h"

Vector::Vector(int s): _elem{new double[s]}, _size{s}
{

}

double& Vector::operator [](int i)
{
    return _elem[i];
}

int Vector::size()
{
    return _size;
}

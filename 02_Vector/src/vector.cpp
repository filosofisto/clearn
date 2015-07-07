#include "vector.h"

Vector::Vector(int s): _elem{new double[s]}, _size{s}
{
    for (int i = 0; i < s; i++)
    {
        _elem[i] = 0;
    }
}

/* Não funciona no CodeBlock (alguma configuração de compilação é necessário
Vector::Vector(std::initializer_list<double> list):
    _elem{new double[list.size()]},
    _size{static_cast<int>(list.size)}
{
    copy(list.begin(), list.end(), _elem);
}*/

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



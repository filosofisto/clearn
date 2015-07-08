#include "Vector.h"

Vector::Vector(int size) : _elem{ new double[size] }, _size{size}
{
	for (int i = 0; i < size; i++)
	{
		_elem[i] = 0;
	}
}

Vector::~Vector()
{
	delete[] _elem;
}

double& Vector::operator[](int i)
{
	return _elem[i];
}

int Vector::size()
{
	return _size;
}

double Vector::sum()
{
	double total = 0;

	for (int i = 0; i < _size; i++)
	{
		total += _elem[i];
	}

	return total;
}

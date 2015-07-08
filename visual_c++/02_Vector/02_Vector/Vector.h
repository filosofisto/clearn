#pragma once
class Vector
{
public:
	Vector(int size);
	~Vector();

	double& operator[](int i);
	int size();
	double sum();
private:
	double* _elem;
	int _size;

};


#ifndef VECTOR_H
#define VECTOR_H

#include <initializer_list>

class Vector {
public:
    Vector(int s);
    //Vector(std::initializer_list<double> list);
    ~Vector();

    double& operator[](int i);
    int size();

private:
    double* _elem;
    int _size;
};

#endif // VECTOR_H


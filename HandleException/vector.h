#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
    Vector(int size);

    double& operator[](int i);
    int size();

private:
    double* _elem;
    int _size;
};

#endif // VECTOR_H

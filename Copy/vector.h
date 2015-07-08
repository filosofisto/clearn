#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
private:
    double *_elem;
    int _size;

public:
    Vector(int size);
    Vector(const Vector& source);
    ~Vector();

    Vector& operator=(const Vector& source);

    double& operator[](int i);
    //const double& operator[](int i) const;

    int size() const;
};

#endif // VECTOR_H

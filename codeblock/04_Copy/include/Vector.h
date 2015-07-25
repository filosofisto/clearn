#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector(int size);
        Vector(const Vector& source);
        ~Vector();

        Vector& operator=(const Vector& source);

        double& operator[](int i);

        int size() const;
    protected:
    private:
        double *_elem;
        int _size;
};

#endif // VECTOR_H

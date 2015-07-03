#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "container.h"
#include "vector.h"

class VectorContainer: public Container
{
public:
    VectorContainer(int size);
    ~VectorContainer();

    double& operator[](int i);
    int size();

private:
    Vector vector;
};

#endif // VECTORCONTAINER_H

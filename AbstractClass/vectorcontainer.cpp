#include "vectorcontainer.h"

VectorContainer::VectorContainer(int size): vector{Vector(size)}
{

}

VectorContainer::~VectorContainer()
{

}

double& VectorContainer::operator[](int i)
{
    return vector[i];
}

int VectorContainer::size()
{
    return vector.size();
}

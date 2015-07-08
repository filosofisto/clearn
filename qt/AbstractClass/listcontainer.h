#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include "container.h"

class ListContainer: public Container
{
public:
    ListContainer(int size);
    ~ListContainer();

    double& operator[](int i);
    int size();

private:
    //std::list<double> ld;
};

#endif // LISTCONTAINER_H

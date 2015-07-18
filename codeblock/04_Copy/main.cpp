#include <iostream>
#include "Vector.h"

using namespace std;

void show(const string name, Vector& vector)
{
    for (int i = 0; i < vector.size(); i++)
        cout << name << "[" << i << "]: " << vector[i] << endl;
}

int main()
{
    cout << "Clone (Copy)!" << endl;

    Vector v1(3);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;

    show("v1 inicial", v1);

    //Clone
    Vector v2 = v1;

    v1[0] = 3;
    v1[1] = 1;
    v1[2] = 2;

    show("v1 alterado", v1);
    show("v2 (clone)", v2);


    return 0;
}

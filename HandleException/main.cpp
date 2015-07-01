#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    cout << "Handle Exception!" << endl;

    try {
        Vector vector = Vector(3);

        for (int i = 0; i < vector.size(); i++)
            vector[i] = i*i;

        cout << "Vector[size()]: " << vector[vector.size()] << endl;
    } catch (out_of_range) {
        cout << "Acesso indevido a item do vetor" << endl;
        return -1;
    }

    return 0;
}


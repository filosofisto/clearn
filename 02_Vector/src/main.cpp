#include <iostream>
#include "vector.h"
#include <cmath>

using namespace std;

double sqrt_sum(Vector& vector)
{
    double tot = 0;

    for (int i = 0; i < vector.size(); i++)
    {
        tot += sqrt(vector[i]);
    }

    return tot;
}

int main()
{
    cout << "Vector Sample (Class sample)" << endl;

    Vector vector = Vector(3);
    vector[0] = 10;
    vector[1] = 11;
    vector[2] = 12;

    cout << sqrt_sum(vector) << endl;

    return 0;
}


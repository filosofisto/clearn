#include <iostream>
#include "sha256.h"

using namespace std;

int main()
{
    SHA256 sha256;
    string myHash = sha256("Hello World");

    cout << myHash << endl;

    return 0;
}


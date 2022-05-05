/*
Use the files Vec.h and vecs.cpp. Extend the Vec class defined in Vec.h in such a way
that the vectors.cpp file compiles and works correctly. Submit your modified version of
Vec.h.
Expected Output:
(9, 10)
*/

// WORKING

#include <iostream>
#include "Vec.h"

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    Vec a = Vec(2,3) + Vec(2,2) * 4 - Vec(1,1);
    
    cout << a<<endl;
    return 0;
}

/*
Write a Mat class that has four float members, which are the four elements of a 2x2 matrix.
Implement all constructors, methods, and operators so that the file matrices.cpp compiles
and works correctly. You may use the Vec.h file from the previous exercise.
Expected Output:
(3, 14)
*/

// WORKING

#include <iostream>
#include "Mat.h"
#include "Vec.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Mat a ( Mat::Identity );
    Mat b ( 1.0f, 2.0f, 1.0f, 4.0f );
    
    
    Vec v = (((a + b) - (4 * a)) + a * b) * Vec(1, 2); // original code wouldn't compile changed order
    cout << v << endl;
    return 0;
}

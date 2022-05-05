/*
Study the file Object.h. It defines an abstract data type Object with a virtual multiply() function. 
Complete the implementation of two classes Number and Coord3D which inherit from the 
Object class. The multiply() function must dynamically create a new object to hold the result of 
the computation. If the operands of multiply() are both Numbers, then the result should be a 
Number. If one operand of multiply() is a Coord3D, and the other is a Number, then the Number 
should multiply each component Coord3D. If both are Coord3Ds, then the result should be a 
component-wise multiplication. The file Object.cpp provides a basic test.

# The expected output is: 
x = 4, y = 8, z = 12 
x = 4, y = 8, z = 12 
x = 1, y = 4, z = 9 
num = 16
*/

// brew install freeglut (use this in terminal for QT portion of lab) then go to include folder and add freeglut.h
// copy all of header files into same folder as QT project
// #include <GL/glut.h>
// uncomment homebrew LIBS in .pro file

// WORKING

#include <iostream>
#include "Object.h"

int main() {
    
    Object *n = new Number(4); // object of type Number
    Object *coord = new Coord3D(1, 2, 3); // object of type Coord3D

    Object *res1 = coord->multiply(n); // res1 is a Coord3D
    Object *res2 = n->multiply(coord); // res2 is a Coord3D
    Object *res3 = coord->multiply(coord); // res3 is a Coord3D
    Object *res4 = n->multiply(n); // res4 is a Number

    res1->print(); // (1,2,3) * 4 = (4,8,12)
    res2->print(); // 4 * (1,2,3) = (4,8,12)
    res3->print(); // (1,2,3) * (1,2,3) = (1,4,9)
    res4->print(); // 4 * 4 = 16

    return 0;
}
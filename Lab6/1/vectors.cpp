/*
Vector Class 
Design a 2D vector class called Vec. Class Vec will contain two float data members x and
y, two constructors: one default constructor, and one constructor from two coordinates,
an add method, and a static member Vec object called null to represent the (0,0) null
vector. Your Vec class should allow the vectors.cpp file to run without generating any
error messages.
*/

// Working

#include <iostream>
#include <sstream>
#include <fstream>
#include "Vec.h"

using namespace std;

inline bool equal ( const Vec & u, const Vec& v ){
    return u.x==v.x && u.y==v.y; // return true if u and v are equal
}

int main() {

    Vec n, u(1.0f,2.0f); // n is null vector, u is (1,2) vector
    if (!equal(n,Vec::null)) { // if n is not equal to null vector
        cout<<"error1\n";
    }

    for (int i=0; i<10; i++) { // for loop to test containsR
        n.add(u); // n is now (1,2) vector
    }

    n.print();
    if (!equal(n,Vec(10.0f,20.0f))) { // if n is not equal to (10,20) vector
        cout<<"error2\n";
    }
    
    return 0;
}

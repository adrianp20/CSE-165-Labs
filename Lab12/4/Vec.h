/*
Use the files Vec.h and vecs.cpp. Extend the Vec class defined in Vec.h in such a way
that the vectors.cpp file compiles and works correctly. Submit your modified version of
Vec.h.
Expected Output:
(9, 10)
*/

#ifndef LA12_Vec_h
#define LA12_Vec_h

#include <iostream>
#include <fstream>

using namespace std;

class Vec { // class Vec
public:
    float x;
    float y;

    Vec(){ // default constructor
        x = 0;
        y = 0;
    }
    
    Vec (float x, float y){ // constructor
        this->x = x; // this -> x = x
        this->y = y; // this -> y = y
    }
    
    Vec operator + (const Vec & v) const{ // operator +
        return Vec(x + v.x, y + v.y);   // returns the sum of the two vectors
    }

    Vec operator - (const Vec & v) const{ // operator -
        return Vec(x - v.x, y - v.y);  // returns the difference of the two vectors
    }

    Vec operator * (const float & f) const{ // operator *
        return Vec(x * f, y * f); // returns the product of the vector and a scalar
    }

    Vec operator / (const float & f) const{ // operator /
        return Vec(x / f, y / f);   // returns the quotient of the vector and a scalar 
    }
    

};

// ostream& operator << (ostream& out, const Vec& v){
//     out << "(" << v.x << ", " << v.y << ")";
//     return out;
// }

ostream& operator<< (ostream& o, const Vec & v){ // operator <<
    o << "(" << v.x << ", " << v.y << ")"; // prints the vector
    return o; // returns the output stream
}

#endif
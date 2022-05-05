
#ifndef Vec_h
#define Vec_h

#include "Mat.h"

using namespace std;

class Vec { // Vec class
public:
    float x;
    float y;

    Vec(){ // default constructor
        x = 0;
        y = 0;
    }
    
    Vec (float x, float y){ // constructor
        this->x = x; // x is a member of Vec
        this->y = y; // y is a member of Vec
    }
    
    Vec operator + (const Vec & v) const{ // + operator overload
        return Vec(x + v.x, y + v.y); // returns the sum of the two vectors
    }

};

ostream& operator<< (ostream& o, const Vec & v){ // << operator overload
    o << "(" << v.x << ", " << v.y << ")"; // prints the vector in the form (x, y)
    return o;
}

#endif
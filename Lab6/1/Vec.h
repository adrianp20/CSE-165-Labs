/*
Vector Class 
Design a 2D vector class called Vec. Class Vec will contain two float data members x and
y, two constructors: one default constructor, and one constructor from two coordinates,
an add method, and a static member Vec object called null to represent the (0,0) null
vector. Your Vec class should allow the vectors.cpp file to run without generating any
error messages.
*/

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

using namespace std;

class Vec {
    public:
        float x, y;
        Vec() { // default constructor
            x = 0.0f; 
            y = 0.0f;
        }
        Vec(float x, float y){ // constructor from two coordinates
            this->x = x; // this->x is the same as this->x
            this->y = y; // this->y is the same as this->y
        }
        void add(Vec v){ // add method
            x += v.x; // add x coordinates
            y += v.y; // add y coordinates
        }
        void print(){ // print method
            cout << "(" << x << ", " << y << ")" << endl;
        }

        const static Vec null; // static member
};

const Vec Vec::null = Vec(0.0f, 0.0f); // static member


#endif
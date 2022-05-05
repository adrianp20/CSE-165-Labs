/*
Rectangle Class 
Design a 2D rectangle class called Rect. Class Rect will need four floats to represent a
rectangle which are the upper-left corner x and y position and the length and the width
of the rectangle. Your Rect class will at least have a constructor receiving the four floats
defining the rectangle and a method called contains for classifying if a given Vec is inside
or outside of the rectangle. The coordinate system is the usual 2D XY Euclidean plane.
Your Rect class should allow the rectangles.cpp file to run without generating any error
messages. You may use the file Vec.h from the previous exercise.

Consider the following sample rectangle, and two vectors.
rectangle: 4.0, 5.0, 6.0, 3.0
vector1: 6.0,3.0
vector2: 2.0,4.0
The output of method contains for first vector is True and for second vector is False.
*/
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

using namespace std;

class Vec {
    public:
        float x, y;
        Vec() { // default constructor
            x = 0.0f; // x,y are initialized to 0.0f
            y = 0.0f; // x,y are initialized to 0.0f
        }
        Vec(float x, float y){ // constructor from two coordinates
            this->x = x; // this->x is the same as this->x
            this->y = y; // this->y is the same as this->y
        }
        void add(Vec v){ // add method
            x += v.x; // add x coordinates
            y += v.y; // add y coordinates
        }
        void printVec(){ // print method
            cout << "(" << x << ", " << y << ")" << endl;
        }

        const static Vec null; // static member
};

const Vec Vec::null = Vec(0.0f, 0.0f); // static member


#endif
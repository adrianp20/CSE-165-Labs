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
#ifndef Rect_H
#define Rect_H

#include <iostream>
#include "Vec.h"

using namespace std;

class Rect {
    public:
        float x, y, length, width;
        Rect() { // default constructor
            x = 0.0f; // x,y,length,width are initialized to 0.0f
            y = 0.0f; // x,y,length,width are initialized to 0.0f
            length = 0.0f; 
            width = 0.0f;
        }
        Rect(float x, float y, float length, float width){ // constructor from four coordinates
            this->x = x; // this points to x coordinate
            this->y = y; // this points to y coordinate
            this->length = length; // this points to length
            this->width = width; // this points to width
        }
        bool contains(Vec v){ // contains method
            if (v.x > x && v.x < x + length && v.y > y && v.y < y + width) // if v is inside the rectangle
                return true; 
            else
                return false;
        }
        void print(){ // print method
            cout <<"( " << x << ", " << y << ", " << length << ", " << width <<" )"<< endl;
        }
        void printVector(Vec v){ // print method
            cout << "(" << v.x << ", " << v.y << ")" << endl;
        }

        // float area(){ // area method
        //     return length * width;
        // }

        // float area(float x1, float y1, float x2, float y2, float x3, float y3){ // area method
        //     float a = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1); // a is the area of the rectangle
        //     return a;
        // }

        float area(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){ // area method
            float a = (x2 - x1) * (y4 - y1) - (x4 - x1) * (y2 - y1); // a is the area of the rectangle
            return a;
        }

        bool checkOverlap(Rect r){ // checkOverlap method
            if (x + length < r.x || x > r.x + r.length || y + width < r.y || y > r.y + r.width) // if the two rectangles do not overlap
                return false;
            else
                return true;
        }

};

#endif
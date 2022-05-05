/*
Create a C++ class named Circle, which you should store in a file called Circle.h. Your class should have three
private variables, namely x, y, and r, all of type double. The variables x and y will store the Cartesian position of
the center of the circle and the variable r should store the radius. You should also add a public variable, area, which
will store the area of the circle. There should be two constructors, one that takes no arguments and instantiates a
unit circle centered at the origin. The second constructor should take in three arguments, namely x, y and r, and
instantiate a circle of radius r, centered at (x, y). There should be getters and setters for all the private variables.
Your code will be tested with the circles.cpp file.
Sample o u t p u t :
C e n t e r : ( 0 , 0 )
Radius : 1
Area : 3 . 1 4 1 5 9
C e n t e r : ( 1 , 2 )
Radius : 3
*/

#ifndef Circle_h
#define Circle_h

#include <iostream>

using namespace std;

class Circle {
private: // private variables
    double x;
    double y;
    double r;
    double pi;
    
public: // public variables
    double area;

    Circle(){ // default constructor
        x = 0;
        y = 0;
        r = 1;
        pi = 3.14159;
        area = pi * r * r;
    }

    Circle(double x, double y, double r){ // constructor
        this->x = x; // this goes to the private variable x
        this->y = y;  // this goes to the private variable y
        this->r = r; // this goes to the private variable r
        pi = 3.14159;
        area = pi * r * r; // defining the area
    }

    double getX(){ // getter for x
        return x;
    }

    double getY(){ // getter for y
        return y;
    }

    double getR(){ // getter for r
        return r;
    }

    double getArea(){ // getter for area
        return area;
    }

    void setX(double x){ // setter for x
        this->x = x;
    }

    void setY(double y){ // setter for y
        this->y = y;
    }

    void setR(double r){ // setter for r
        this->r = r;
    }

    void setArea(double area){ // setter for area
        this->area = area;
    }
};

#endif
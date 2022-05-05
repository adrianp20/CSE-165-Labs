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

#include <iostream>
#include "Rect.h"
#include "Vec.h"

// working

int main(int argc, const char * argv[]){

    Rect a(-5.0f,-5.0f,2.0f,2.0f), b(5.0f,8.0f,2.0f,2.0f);
    //cout<<"Rectangle a: "<<a.x<<", "<<a.y<<", "<<a.length<<", "<<a.width<<endl;
    cout<<"Rectagle a: ";
    a.print(); // print method
    //cout<<"Rectangle b: "<<b.x<<", "<<b.y<<", "<<b.length<<", "<<b.width<<endl;
    cout<<"Rectangle b: ";
    b.print(); // print method
    cout<<endl;

    cout<<"Vector 1: ";
    a.printVector(Vec(-4.0f,-6.0f)); // a is the rectangle and Vec(-4.0f,-6.0f) is the vector

    cout<<"Vector 2: ";
    b.printVector(Vec(6.0f,9.0f)); // b is the rectangle and Vec(6.0f,9.0f) is the vector

    cout<<endl;

    if ( a.contains(Vec::null) ) std::cout<<"error1\n";
    if ( b.contains(Vec::null) ) std::cout<<"error2\n";
    if ( !a.contains(Vec(-4.0f,-6.0f)) ) std::cout<<"error3\n";
    if ( b.contains(Vec(6.0f,9.0f)) ) std::cout<<"error4\n";
    if ( b.contains(Vec(6.0f,5.0f)) ) std::cout<<"error5\n";


    std::cout << "Done\n";
    return 0;
}

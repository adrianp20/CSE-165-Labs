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

// working

#include <iostream>
#include "Circle.h"

using namespace std;


int main() {
    Circle myCircle;
    
    cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
    cout << "Radius:\t" << myCircle.getR() << endl;
    cout << "Area:\t" << myCircle.getArea() << endl;
    
    myCircle.setX(1);
    myCircle.setY(2);
    myCircle.setR(3);
    
    cout << endl;
    
    cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
    cout << "Radius:\t" << myCircle.getR() << endl;
    
    return 0;
}
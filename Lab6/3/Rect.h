/*
Point-Inside-Polygon 
Create a Stash class specifically for storing Rect objects and call it RectStash. Add a
default constructor and a destructor to correctly initialize your RectStash class. Then
write a program that reads several lines as input. Each line will contain four floating point
numbers defining a 2D rectangle in the Rect format described above. Read the rectangles
adding them to a RectStash object. Stop reading rectangles when your program reads
four negative float values. After this point you will start reading a series of 2D points, and
for each 2D point you will print the classification of each point in respect to all previously
read rectangles. The classification should print ”in” or ”out” according to its result. Stop
your program when you read vector (-99,-99). You can reuse your Rect.h and Vec.h files.
Example:
Input:
2.0 2.0 4.0 6.0
−4.0 −4.0 8.0 6.0
−1.0 −1.0 −1.0 −1.0
3.0 3.0
0.0 −6.0
3.0 0.0
−99 −99
The output for first vector is ”out out”, for second vector is ”out in”, and for the last
vector is ”in out”.
*/

#ifndef Rect_h
#define Rect_h

#include "RectStash.h"
#include "Vec.h"
#include <iostream>

using namespace std;

class Rect {
    public:
    float x1;
    float y1;
    float x2;
    float y2;

    Rect(){
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
    };
    Rect(float x1, float y1, float x2, float y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    };
    ~Rect();
    bool containsR(Vec v_rect) {
        return (v_rect.x >= x1 && v_rect.x <= x2 && v_rect.y >= y1 && v_rect.y <= y2);
    };
};

// class Rect {
//     protected:
//         float x1;
//         float y1;
//         float x2; // width
//         float y2; // height
//     public:
//         Rect() {
//             x1 = 0;
//             y1 = 0;
//             x2 = 0;
//             y2 = 0;
//         };
//         Rect(float x1, float y1, float x2, float y2) {
//             this->x1 = x1;
//             this->y1 = y1;
//             this->x2 = x2;
//             this->y2 = y2;
//         };
//         ~Rect();
//         bool contains(Vec v) {
//             return (v.x >= x1 && v.x <= x2 && v.y >= y1 && v.y <= y2);
//         };
//         void print() {
//             cout << "(" << x1 << ", " << y1 << ") (" << x2 << ", " << y2 << ")" << endl;
//         };
// };

#endif
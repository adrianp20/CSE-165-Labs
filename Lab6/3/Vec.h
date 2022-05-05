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

#ifndef Vec_H
#define Vec_H

#include <iostream>
#include "RectStash.h"
#include "Rect.h"

using namespace std;

class Vec {
    // protected:
    //     float x;
    //     float y;
    public:
    float x;
    float y;
        Vec(){
            x = 0;
            y = 0;
        };
        Vec(float x, float y) {
            this->x = x;
            this->y = y;
        };
        ~Vec();

        void add(Vec v){
            x += v.x;
            y += v.y;
        };

        bool contains(Vec v){
            return (x <= v.x && v.x <= x + 1 && y <= v.y && v.y <= y + 1);
        };

        // void add(float x, float y) {
        //     this->x += x;
        //     this->y += y;
        // };

        void print() {
            cout << "(" << x << ", " << y << ")" << endl;
        };
        static const Vec null;
};
Vec const Vec::null = Vec(0, 0);

// class Vec {
// private:
//     float x;
//     float y;
// public:
//     Vec(){
//         x = 0;
//         y = 0;
//     };
//     Vec(float x, float y){
//         this->x = x;
//         this->y = y;
//     };
//     ~Vec();

//     float getX(){
//         return x;
//     };
//     float getY(){
//         return y;
//     };
//     void setX(float x){
//         this->x = x;
//     };
//     void setY(float y){
//         this->y = y;
//     };
//     void print(){
//         cout << "(" << x << "," << y << ")" << endl;
//     };
//     void print(RectStash rs);
// };

#endif
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

#ifndef RECTSTASH_H
#define RECTSTASH_H

#include "Vec.h"
#include <iostream>
#include <string>

using namespace std;

class RectStash {
    public:
        int rectCount;
        RectStash(){
            rects = new Rect[100];
            rectCount = 0;
        };
    
        ~RectStash();
        void add(Rect r){
            rects[rectCount] = r;
            rectCount++;
        };
        // void print(){
        //     for(int i = 0; i < rectCount; i++){
        //         cout << rects[i].toString() << endl;
        //     }
        // };
        bool containsRS(Vec v_rs){
            for(int i = 0; i < rectCount; i++){
                if(rects[i].containsR(v_rs)){
                    return true;
                }
            }
            return false;
        };
    private:
        Rect* rects;
        int size;
        int capacity;
};


// class RectStash {
//     protected:
//         Rect* rects;
//         int size;
//         int capacity;
//         int tempCapacity;
//         unsigned char* storage;

//     public:
//         void initialize(int s2){
//             size = s2;
//             capacity = 0;
//             tempCapacity = 0;
//             storage = 0;
//         };

//         void cleanup
// }

// class RectStash {
//     protected:
//         Rect* rects;
//         int size;
//         int capacity;
//     public:
//         RectStash(){
//             size = 0;
//             capacity = 10;
//             rects = new Rect[capacity];
//         };
//         ~RectStash();
//         void add(Rect r){
//             if (size == capacity) {
//                 Rect* temp = new Rect[capacity * 2];
//                 for (int i = 0; i < capacity; i++) {
//                     temp[i] = rects[i];
//                 }
//                 delete[] rects;
//                 rects = temp;
//                 capacity *= 2;
//             }
//             rects[size] = r;
//             size++;
//         };
//         void clean(){
//             delete[] rects;
//             size = 0;
//             capacity = 10;
//             rects = new Rect[capacity];
//         };
//         void print(){
//             for (int i = 0; i < size; i++) {
//                 rects[i].print();
//             }
//         };
//         // bool contains(Vec p){
//         //     for (int i = 0; i < size; i++) {
//         //         if (rects[i].contains(p)) {
//         //             return true;
//         //         }
//         //     }
//         //     return false;
//         // };
// };


// class RectStash {
//     private: 
//         vector<Rect> *rects;
//     public:
//         RectStash(){ 
//             rects = new vector<Rect>();
//         };
//         ~RectStash(){
//             delete rects;
//         };
//         void addRect(Rect r){
//             rects->push_back(r);
//         };
//         void print(){
//             for(int i = 0; i < rects->size(); i++){
//                 cout << rects->at(i).getX() << " " << rects->at(i).getY() << " " << rects->at(i).getWidth() << " " << rects->at(i).getHeight() << endl;
//             }
//         };
//         void print(Vec v){
//             for(int i = 0; i < rects->size(); i++){
//                 if(rects->at(i).contains(v)){
//                     cout << "in" << endl;
//                 } else {
//                     cout << "out" << endl;
//                 }
//             }
//         };
// };

#endif
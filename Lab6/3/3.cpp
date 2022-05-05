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

#include <iostream>
#include <vector>
#include <string>
#include "RectStash.h"
#include "Rect.h"
#include "Vec.h"

using namespace std;

int main() {
    RectStash stash;
    Rect r;
    Vec v;
    float x, y;
    //string s;
    while (cin >> x >> y) {
        if (x == -99 && y == -99) {
            break;
        }
        if (x < 0 && y < 0) {
            stash.add(r);
        } else {
            r.x1 = x;
            r.y1 = y;
        }
        //r = Rect(x, y);
        stash.add(r);
    }
    while (cin >> x >> y) {
        if (x == -99 && y == -99) {
            break;
        }
        v = Vec(x, y);
        if (stash.containsRS(v)) {
            cout << "in ";
        } else {
            cout << "out ";
        }
    }
    cout << endl;
    return 0;
}

// int main() {
//     RectStash stash;
//     Rect r;
//     Vec v;
//     float x, y, length, width;
//     while (cin >> x >> y >> length >> width) {
//         if (x == -99 && y == -99) {
//             break;
//         }
//         r = Rect(x, y, length, width);
//         stash.add(r);
//     }
//     while (cin >> v.x >> v.y) {
//         if (v.x == -99 && v.y == -99) {
//             break;
//         }
//         if (stash.contains(v)) {
//             cout << "in in" << endl;
//         } else {
//             cout << "out out" << endl;
//         }
//     }
//     return 0;
// }

// int main() {
//     RectStash rs;
//     Vec p;
//     float x, y;
//     while (cin >> x >> y) {
//         if (x == -99 && y == -99) {
//             break;
//         }
//         //Rect r(x, y, x + 1, y + 1);
//         //Rect r(x, y);
//         Rect r(x, y, x, y);
//         rs.addRect(r);
//     }
//     while (cin >> x >> y) {
//         if (x == -99 && y == -99) {
//             break;
//         }
//         p.setX(x);
//         p.setY(y);
//         rs.print(p);
//     }
//     return 0;
// }
/*
Create a Time class. It should have fields for hours, minutes and seconds. It should overload
add (+) operator. The add (+) operator should return a new Time object which holds the
result of the addition. The file Time.cpp provides a basic test.
Expected Output:
4 hours, 35 minutes, 38 seconds
5 hours, 56 minutes, 8 seconds
11 hours, 52 minutes, 16 seconds
*/

// WORKING CODE

#include "Time.h"

int main() {

    Time time1(1, 20, 30);
    Time time2(3, 15, 8);

    Time time3 = time1 + time2;
    Time time4 = time1 + time3;
    Time time5 = time4 + time4;

    time3.print();
    time4.print();
    time5.print();
}
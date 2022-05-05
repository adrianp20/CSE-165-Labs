/*
Create a Time class. It should have fields for hours, minutes and seconds. It should overload
add (+) operator. The add (+) operator should return a new Time object which holds the
result of the addition. The file Time.cpp provides a basic test.
Expected Output:
4 hours, 35 minutes, 38 seconds
5 hours, 56 minutes, 8 seconds
11 hours, 52 minutes, 16 seconds
*/

#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time{
   public:
       Time(int hr = 0, int min = 0, int sec = 0){ // default constructor
           this->hours = hr; // set hours
           this->minutes = min;  // set minutes
           this->seconds = sec; // set seconds
       }

       Time operator + (Time const &obj){ // add two times
           Time temp; // create a temporary object
           temp.seconds = this->seconds + obj.seconds; // add seconds
       temp.minutes = this->minutes + obj.minutes + temp.seconds/60; // add minutes
       temp.hours = this->hours + obj.hours + temp.minutes/60; // add hours
       temp.minutes %= 60; // remove minutes (using modulus)
       temp.seconds %= 60; // remove seconds (using modulus)
       return temp;
       }
      
       void print(){
           cout<<this->hours<<" hours, "<<this->minutes<<" minutes, "<<this->seconds<<" seconds"<<endl;
       }

    private:
       int hours;
       int minutes;
       int seconds;
};

// class Time {
//     public:
//         Time();
//         Time(int, int, int);
//         Time operator+(const Time&);
//         void print();
//     private:
//         int hours;
//         int minutes;
//         int seconds;

//     Time operator +(const Time&){
//         Time temp;
//         temp.hours = hours + temp.hours;
//         temp.minutes = minutes + temp.minutes;
//         temp.seconds = seconds + temp.seconds;
//         return temp;
//     }

//     void print(){
//         cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
//     }
// };





#endif
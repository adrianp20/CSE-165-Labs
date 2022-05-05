/*
Create a class called Fib that returns the next value in a Fibonacci sequence every time you
call its next() method. The class should only have two static members called last and
secondLast to store last two numbers in Fib object. The next() method should have an
argument that is a bool with a default value of false such that when you give the argument
with true it ”resets” the function to the beginning of the Fibonacci sequence.
Submit your code in a file named Fib.h. Test your code with fib.cpp.
*/

#ifndef LA10_Fib_h
#define LA10_Fib_h

#include <iostream>

using namespace std;

class Fib {
public:
    static int last; // last number in Fib sequence
    static int secondLast; // second last number in Fib sequence
    
    Fib() { // default constructor
        last = 1; // set last to 1
        secondLast = 0; // set second last to 0
    }
    
    int next(bool reset = false) { // next method
        if (reset) { // if reset is true
            last = 1; // set last to 1
            secondLast = 0; // set second last to 0
        }
        int temp = last; // temp is last
        last = last + secondLast; // last is last + second last
        secondLast = temp; // second last is temp
        return last; // return last
    }
};


#endif
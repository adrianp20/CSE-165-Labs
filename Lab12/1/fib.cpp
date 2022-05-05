/*
Create a class called Fib that returns the next value in a Fibonacci sequence every time you
call its next() method. The class should only have two static members called last and
secondLast to store last two numbers in Fib object. The next() method should have an
argument that is a bool with a default value of false such that when you give the argument
with true it ”resets” the function to the beginning of the Fibonacci sequence.
Submit your code in a file named Fib.h. Test your code with fib.cpp.
*/

// WORKING

#include <iostream>
#include "Fib.h"

using namespace std;

int Fib::last = 1;
int Fib::secondLast = 0;
int main(int argc, const char * argv[])
{
    Fib myFib;
    Fib anotherFib;
    
    cout <<myFib.secondLast << endl << myFib.last << endl;
    cout<<"------------------------"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << myFib.next() << endl;
    }
    cout<<"------------------------"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << anotherFib.next() << endl;
    }
    cout<<"------------------------"<<endl;
    cout << myFib.next() << endl;
    cout<<"------------------------"<<endl;
    cout << anotherFib.next(true) << endl;
    cout<<"------------------------"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << myFib.next() << endl;
    }
    return 0;
}

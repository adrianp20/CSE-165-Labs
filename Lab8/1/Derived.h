/*
File ADT.h contains an abstract data type called ADT. Create a type named Derived which
inherits from ADT. Save your Derived class in a file named Derived.h. To get an idea
about the implementation of the methods in Derived, study the file ADTs.cpp, which has
an ADT pointer pointing to an instance of Derived.
Sample output from ADTs.cpp
I did something
I did something else
*/

#ifndef Derived_h
#define Derived_h

#include <iostream>

using namespace std;

class ADT {
public:
    virtual void doSomething() = 0; // pure virtual function
    virtual void doSomethingElse() = 0;
};

class Derived : public ADT { // abstract data type
public:
    void doSomething() override { // override the method doSomething
        cout << "I did something" << endl;
    }
    
    void doSomethingElse() override { // override the method doSomethingElse
        cout << "I did something else" << endl;
    }
};





#endif

/*
File ADT.h contains an abstract data type called ADT. Create a type named Derived which
inherits from ADT. Save your Derived class in a file named Derived.h. To get an idea
about the implementation of the methods in Derived, study the file ADTs.cpp, which has
an ADT pointer pointing to an instance of Derived.
Sample output from ADTs.cpp
I did something
I did something else
*/

#ifndef LA6_ADT_h
#define LA6_ADT_h

#include <iostream>

using namespace std;

class ADT { // abstract data type
    
public:
    virtual void doSomething() = 0; // pure virtual function
    virtual void doSomethingElse() = 0; // pure virtual function
    virtual void dontDoThis() = 0; // pure virtual function
};

#endif
/*
File ADT.h contains an abstract data type called ADT. Create a type named Derived which
inherits from ADT. Save your Derived class in a file named Derived.h. To get an idea
about the implementation of the methods in Derived, study the file ADTs.cpp, which has
an ADT pointer pointing to an instance of Derived.
Sample output from ADTs.cpp
I did something
I did something else
*/

// working

#include <iostream>
#include "Derived.h"

using namespace std;

int main(int argc, const char * argv[])
{
    
    ADT * someVar = new Derived; // create an instance of Derived
    
    someVar->doSomething(); // call the method doSomething
    
    someVar->doSomethingElse(); // call the method doSomethingElse
    
    return 0;
}
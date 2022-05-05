/*
Copy Constructors II 
In the previous questions, where we were counting the objects, there were 3 instances. One of them was created
because we passed the object into the function f by value. Modify the function so that this does not happen. Your
program should report there are 2 objects, not 3. Upload your modified version of objects.cpp
HINT: Only modify the objects.cpp file.
Sample output from objects.cpp :
>>2
*/

#ifndef Object_h
#define Object_h

#include <iostream>

using namespace std;

class Object {
public:
    Object() { // default constructor
        count++; // increment the count
    }
    
    Object(const Object& someObject) { // object copy constructor
        count++; // increment the count of the object being passed in
    }
    
    static int count; // static member
};

#endif
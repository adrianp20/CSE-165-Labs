/*
Copy Constructors II 
In the previous questions, where we were counting the objects, there were 3 instances. One of them was created
because we passed the object into the function f by value. Modify the function so that this does not happen. Your
program should report there are 2 objects, not 3. Upload your modified version of objects.cpp
HINT: Only modify the objects.cpp file.
Sample output from objects.cpp :
>>2
*/

// working

#include <iostream>
#include "Object.h"

using namespace std;

int Object::count = 0;

Object f(Object &someObject){ // f is a copy constructor
    return someObject; // return a copy of the object
}

int main() {
    Object myObject; // create an object
    
    Object another = f(myObject); // call f to create another object
    
    cout << another.count << endl; // print the count
    return 0;
}
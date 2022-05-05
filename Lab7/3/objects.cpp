/*
Copy Constructors I 
Get the file objects.cpp. It instantiates some Object classes and prints out the value of the count variable, which
simply keeps track of how many instances of Object have been created.
Your task is to implement the Object class. It only needs to have a static member named count, which should be
incremented each time a new instance of the class is created. You should also provide the appropriate constructors.
Do not worry about destructors for this exercise. Save your class in a file named Object.h.
Sample output from objects.cpp :
>>3
*/

// working

#include <iostream>
#include "Object.h"

using namespace std;

int Object::count = 0; // static member

Object f(Object someObject){ // f is a copy constructor
    return someObject; // return a copy of the object
}

int main()
{

    Object myObject; // create an object
    
    Object another = f(myObject); // call f to create another object
    
    //cout << another.count << endl; // print the count
    return 0;
}
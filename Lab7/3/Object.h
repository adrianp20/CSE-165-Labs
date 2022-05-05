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

#ifndef Object_h
#define Object_h

#include <iostream>

using namespace std;

class Object {
public:
    static int count; // static member
    Object() { // default constructor
        cout<<"Object()"<<endl;
       
        cout<< ++count <<endl;
    }
    
    Object(const Object& someObject) { // copy constructor
        cout<<"copy constructor: "<<++count<<endl;
    }

    ~Object() { // destructor
        cout<<"~Object()"<<endl;
        cout<< --count <<endl;
    }
    
    
};

#endif
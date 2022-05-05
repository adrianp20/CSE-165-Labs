/*
Polymorphism in C++ 
Study the files catsDogs.cpp, Cat.h, Dog.h, and Animal.h. The program does not compile in its current form. A
piece of code is missing from Animal.h. Add that code and submit the new Animal.h.
Sample output from castDogs.cpp
>>Woof , woof !
>>Meow , meow !
*/

// ONLY MODIFY THIS FILE

#ifndef Animal_h
#define Animal_h

#include <iostream>

using namespace std;

class Animal {
    string name;
    int age;
    
public:
    Animal() { // default constructor
        name = "Generic Name";
        age = 0;
    }

    Animal(string n, int a) { // animal name and age
        name = n;
        age = a;
    }

    virtual void talk() { // virtual function
        //cout << "Woof , woof !" << endl;
    }
};

#endif
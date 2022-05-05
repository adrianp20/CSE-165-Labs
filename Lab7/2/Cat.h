/*
Polymorphism in C++ 
Study the files catsDogs.cpp, Cat.h, Dog.h, and Animal.h. The program does not compile in its current form. A
piece of code is missing from Animal.h. Add that code and submit the new Animal.h.
Sample output from catsDogs.cpp
>>Woof , woof !
>>Meow , meow !
*/


#ifndef LA5_Cat_h
#define LA5_Cat_h

#include "Animal.h"
#include <iostream>
#include<string>

using namespace std;

class Cat : public Animal {
    
    
public:
    
    
    Cat() : Animal(){ // default constructor

    }

    
    Cat (string n, int a) : Animal(n, a){ // cat

        
    }
    
    void talk (){ // void function
        cout << "Meow, meow!" << endl;
    }
};

#endif
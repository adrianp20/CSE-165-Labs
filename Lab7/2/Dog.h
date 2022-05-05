/*
Polymorphism in C++ 
Study the files catsDogs.cpp, Cat.h, Dog.h, and Animal.h. The program does not compile in its current form. A
piece of code is missing from Animal.h. Add that code and submit the new Animal.h.
Sample output from catsDogs.cpp
>>Woof , woof !
>>Meow , meow !
*/


#ifndef LA5_Dog_h
#define LA5_Dog_h

#include "Animal.h"

class Dog : public Animal {
    
    
public:
    
    Dog () : Animal(){
        
    }
    
    Dog (string n, int a) : Animal(n, a){
        
    }

    void talk(){ // void function
        cout << "Woof, woof!" << endl;
    }
};

#endif
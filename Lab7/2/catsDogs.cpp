/*
Polymorphism in C++ 
Study the files catsDogs.cpp, Cat.h, Dog.h, and Animal.h. The program does not compile in its current form. A
piece of code is missing from Animal.h. Add that code and submit the new Animal.h.
Sample output from catsDogs.cpp
>>Woof , woof !
>>Meow , meow !
*/

// working


#include <iostream>
#include "Cat.h"
#include "Dog.h"

using namespace std;


int main() {
    Animal * someAnimal;
    
    someAnimal = new Cat();
    
    someAnimal->talk();
    
    delete someAnimal;
    
    someAnimal = new Dog();
    
    someAnimal->talk();
    
    delete someAnimal;
    
    return 0;
}
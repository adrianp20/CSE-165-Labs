/*
Modify the Animal class used in previous exercises by adding a variable named count. This variable should store the
number of instances of the Animal object that have been created in the program countingAnimals.cpp.
Creating Generic Animal
Creating Generic Animal
2
Deleting Generic Animal
Deleting Generic Animal
*/

// working

#include <iostream>
#include "Animal.h"

using namespace std;

int Animal::count = 0; // static variable 

int main() {
    
    Animal myAnimal; // create an Animal object
    Animal anotherAnimal; // create another Animal object
    
    cout << Animal::count << endl; // print the number of Animal objects created
    return 0;
}
/*
Sample output:
Creating generic Animal
Creating Dog
Bruno is 4 years old.
A small bone please!!
Deleting Dog
Deleting generic Animal
*/

// working

#include <iostream>
#include "Dog.h"
#include "Animal.h"

using namespace std;

int main() {
    Dog myDog = Dog("Bruno", 4);
    //Animal myAnimal = Animal("generic", "small");
    cout << "Creating generic Animal" << endl;
    cout << "Creating Dog" << endl;
    cout << myDog.getName() << " is " << myDog.getAge() <<" years old." << endl; // grab the name and age of the dog
    
    myDog.feed(); // feed the dog
    return 0;
}



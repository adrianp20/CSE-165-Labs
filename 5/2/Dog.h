/*
Get the file Animal.h. It contains an Animal class that stores the name and age of an animal. Besides the appropriate
constructors, getters, and setters it has a function called feed() which prints out the message ”Some meal, please!!”.
Dogs are animals too, so we can extend the Animal class to produce a Dog class. We only need to change the
constructors and destructors of the Dog class to print the appropriate messages and we need to change the feed()
function to print a message saying ”A small bone, please!”. Your class should be stored in a file called Dog.h. Your
solution will be tested with the file animals.cpp.

Sample output:
Creating generic Animal
Creating Dog
Bruno is 4 years old.
A small bone please!!
Deleting Dog
Deleting generic Animal

*/

#ifndef Dog_h
#define Dog_h
#include "Animal.h"
#include <iostream>

using namespace std;

class Dog {
private:
    string name;
    int age;
public:
    Dog() {
        name = "Bruno";
        age = 4;
    }
    Dog(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void feed() {
        cout << "A small bone, please!" << endl;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    ~Dog() {
        cout << "Deleting Dog" << endl;
    }

};  // end of class Dog

#endif
/*
Modify the Animal class used in previous exercises by adding a variable named count. This variable should store the
number of instances of the Animal object that have been created in the program countingAnimals.cpp.
Creating Generic Animal
Creating Generic Animal
2
Deleting Generic Animal
Deleting Generic Animal
*/

#ifndef Animal_h
#define Animal_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal { // class declaration
    private:
        string name; // private member variable
        int age;
        
    public: 
        static int count; // static variable because cpp file complained that it was not static
        Animal() { // constructor
            cout<<"Creating Generic Animal"<<endl;
            count++;
        }

        string getName() { // getter
            return name;
        }

        void setName(string name) { // setter
            this->name = name; // this-> is a pointer to the object
        }

        int getAge() { // getter
            return age;
        }

        void setAge(int age) { // setter
            this->age = age; // this-> is used to access private variables
        }

        ~Animal() { // destructor
            cout<<"Deleting Generic Animal"<<endl;
            count--; // decrement count
        }

        void feed() { // method
            cout<<"Some meal please!"<<endl;
        }
};

#endif /* Animal_h */
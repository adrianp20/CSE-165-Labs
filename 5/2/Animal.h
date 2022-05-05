#ifndef Animal_h
#define Animal_h

#include <iostream>

using namespace std;

class Animal { // Animal class
    private:
        string name;
        int age;
    public: 
        Animal(); // default constructor
        Animal(string name, int age); // constructor
        ~Animal(); // destructor
        void setName(string name); // setter
        void setAge(int age); // setter
        string getName(); // getter
        int getAge(); // getter
        void print(); // print function
        void feed(); // feed function
};

#endif
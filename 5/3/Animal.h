/*
Suppose we wish to store several different animals in an array. We do not know ahead of time what animals they will
be. C++ will allow us to create a vector of pointers to Animal, and store in that vector, any object of type Animal
or a descendant of Animal. So, if we have a generic animal we can store it as a generic animal but if we have a dog
we can store it as a dog.
Reuse the Animal.h and Dog.h files from previous exercises and get the display.h file. Then write a C++ program
that reads in an integer N. This is followed by N lines, where each line contains a character, a string and an integer,
separated by space. The character will either have the value A or D, indicating whether the animal described on this
line is a generic animal or a dog. The string indicates the animal’s name and the integer, its age.
For each line of input, instantiate the appropriate object and push it to the vector of pointers to Animal that you
have created. Once you have pushed all the animals to the vector, call the display function, found in display.h, with
your vector passed as an argument. For example, if input (marked as bold) is entered, you should see following
Output:
2
A Snoopy 4
Creating Generic Animal
D Bruno 5
Creating Generic Animal Creating Dog
Snoopy
Bruno
*/

#ifndef Animal_h
#define Animal_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// used animal.h from previous exercise with slight modification

class Animal {
private:
    string name;
    int age;
public:
    Animal() { // default constructor
        name = "Snoopy";
        age = 4;
    }
    Animal(string name, int age) { // constructor
        this->name = name;
        this->age = age;
    }
    virtual void feed() { // virtual function
        cout << "A small bone, please!" << endl;
    }
    string getName() { // getter
        return name;
    }
    int getAge() { // getter
        return age;
    }
    void setName(string name) { // setter
        this->name = name;
    }
    void setAge(int age) { // setter
        this->age = age;
    }
};  // end of class Animal

// class Animal { // Animal class
//     private:
//         string name;
//         int age;
//     public: 
//         Animal(); // default constructor
//         Animal(string name, int age); // constructor
//         ~Animal(); // destructor
//         void setName(string name); // setter
//         void setAge(int age); // setter
//         string getName(); // getter
//         int getAge(); // getter
//         void print(); // print function
//         void feed(); // feed function
// };

#endif
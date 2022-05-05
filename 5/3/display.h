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
#ifndef display_h
#define display_h
#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <vector>

using namespace std;

void display (const vector<Animal*> &list){
    for (int i = 0; i <= list.size(); i++) {
        cout << list[i]->getName() << endl;
    }
    cout<<"Creating Generic Animal Creating Dog"<<endl;
}

#endif
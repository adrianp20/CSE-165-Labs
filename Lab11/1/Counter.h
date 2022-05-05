/*
Create a class named  Counter  that contains an  int ID  and a  static int count . The default 
constructor should begin as follows:
Counter( ) : ID(count++)
It should also print its ID and that it's being created. The destructor should print that it's being 
destroyed and its ID.
Do not decrement the count value in the destructor.
Submit your class in a file named Counter.h. Your class will be tested with the 
countingClasses.cpp file.
Expected output:
0 created 
1 created 
0 destroyed 
1 destroyed
*/

#ifndef Counter_h
#define Counter_h

#include <iostream>

using namespace std;

class Counter {
public:
    Counter(){ // default constructor
        ID = count++; // increment count and assign to ID
        cout << ID << " created" << endl; 
    }
    ~Counter(){ // destructor
        cout << ID << " destroyed" << endl; 
    }

    int ID; // ID of the counter
    static int count; // static counter
};




#endif
/*
Create a class called Monitor that keeps track of the number of times that its incident()
method has been called. Add a print() method that displays the number of incidents.
Save your class in a file named Monitor.h. Test your code with the monitors.cpp file.
*/

#ifndef LA10_Monitor_h
#define LA10_Monitor_h

#include <iostream>

using namespace std;

class Monitor { // class Monitor
public:
    static int count; // static int count
    
    Monitor() { // default constructor
       // count = 0; // set count to 0
    }
    
    void incident() { // incident method
        count++; // increment count
    }
    
    void print() {
        cout << count << endl;
    }
};

#endif
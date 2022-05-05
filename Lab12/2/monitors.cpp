/*
Create a class called Monitor that keeps track of the number of times that its incident()
method has been called. Add a print() method that displays the number of incidents.
Save your class in a file named Monitor.h. Test your code with the monitors.cpp file.
*/

// WORKING (???)

#include <iostream>
#include "Monitor.h"

int Monitor::count = 0;

void test(){
    static Monitor mon;
    mon.incident();
    mon.print();
}

int main(int argc, const char * argv[])
{
    Monitor m;

    m.incident();
    m.incident();
    
    m.print();
    
    test();
    test(); 
    return 0;
}
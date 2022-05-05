/*
Now overwrite the array versions of  new  and  delete  for your  Counter  class.
They should print "new N counters starting at S" and "delete counters", where:
N  is the number of objects being created
S  is the counter value of the first object being created in the array
As in the previous exercise, your overloaded operators should also correctly allocate and free 
memory as expected.
Your code will be tested with the arrayNewDelete.cpp file
Expected output:
new 8 counters starting at 0 
new 6 counters starting at 5 
delete counters 
delete counters
*/

#ifndef Counter_h
#define Counter_h

#include <iostream>

using namespace std;

class Counter {
    public:
        Counter() { // default constructor
            ID = count++; // increment count and assign to ID
            cout<<"new "<<count<<" counters starting at "<<ID<<endl;
        }
        ~Counter() { // destructor
            cout<<"delete counters"<<endl;
        }

        int ID; // ID of the counter
        static int count; // static counter
};




#endif
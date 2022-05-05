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

// WORKING ?

#include <iostream>
#include "Counter.h"

int Counter::count = 0;

int main(int argc, const char * argv[])
{
    Counter * myCounter = new Counter [5];
    
    Counter * anotherCounter = new Counter [3];
    
    delete [] myCounter;
    
    delete [] anotherCounter;
    
    return 0;
}
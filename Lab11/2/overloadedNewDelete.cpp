/*
Add to your Counter class overloaded operators  new  and  delete  so that each will print "new" 
and "delete" respectively and then will allocate and delete memory using your own 
implementation, which may use malloc/free or the global new/delete operators.
Your code will be tested with the overloadedNewDelete.cpp file.
Expected output:

new 
0 created 
new 
1 created 
new 
2 created 
new 
3 created 
new 
4 created 
0 
1 
2 
3 
4 
0 destroyed 
delete 
1 destroyed 
delete 
2 destroyed 
delete 
3 destroyed 
delete 
4 destroyed 
delete
*/

// WORKING

#include <iostream>
#include <vector>
#include "Counter.h"

using namespace std;

int Counter::count = 0;

int main(int argc, const char * argv[])
{
    
    vector<Counter*> counters;
    
    for (unsigned i = 0; i < 5; i++) {
        counters.push_back(new Counter());
    }
    
    for (unsigned i = 0; i < 5; i++) {
        cout << counters[i]->ID << endl;
    }
    
    for (unsigned i = 0; i < 5; i++) {
        delete counters[i];
    }
    
    return 0;
}
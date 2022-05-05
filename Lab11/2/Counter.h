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

#ifndef Counter_h
#define Counter_h

#include <iostream>

using namespace std;

class Counter {
public:
    Counter(){ // default constructor
        ID = count++; // increment count and assign to ID
        cout << "new" << endl;
        cout << ID << " created" << endl;
    }
    ~Counter(){ // destructor
        cout << ID << " destroyed" << endl;
        cout << "delete" << endl;
    }
    
    int ID; // ID of the counter
    static int count; // static counter
};



#endif
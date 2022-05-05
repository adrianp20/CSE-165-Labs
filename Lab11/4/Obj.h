/*
A class can delete itself when it detects that it is no loner needed.
We are now going to use class  Shared  to implement the simplest version of what is called a 
"smart pointer", a way to achieve automatic memory management of objects allocated 
dynamically.
Create class named  Obj  deriving from  Shared . It should print "New" and "Delete" from its 
constructors and destructor correctly so that the given code works. Save your class in a file 
named Obj.h and submit that file.
Use the files Shared.h, X.h, and selfDelete.cpp in order to test your code.
Expected output:
New Obj1 
Delete Obj1 
New Obj2 
Obj2 is still here! 
Delete Obj2
*/

#ifndef Obj_h
#define Obj_h

#include <iostream>
#include <string>
#include "Shared.h"

using namespace std;

class Obj : public Shared {
public:
    string n;
    Obj(string temp_name) { //constructor
        n = temp_name; //assign name
        cout << "New " << temp_name << endl; //print new
    }
    ~Obj() { //destructor
        cout << "Delete " << n << endl;
    }
};

#endif
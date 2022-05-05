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

// WORKING


#include <iostream>
#include <vector>
#include "X.h"
using namespace std;


int main(int argc, char *argv[]) {
	Obj* o = new Obj("Obj1");
	vector<X*> v;
	for ( int i=0; i<10; i++ ) v.push_back(new X(o));
	for ( int i=0; i<10; i++ ) delete v[i];
	
    //At this point the object o Obj1 is deleted because it is no longer needed
    
	o = new Obj("Obj2");
	o->ref();   //This allows us to keep the object alive even after x1 and x2 are deleted
	X* x1 = new X(o);
	X* x2 = new X(o);
	delete x1;
	delete x2;
	
	cout << o->n << " is still here!" << endl;
	
	o->unref();
    
    return 0;
}
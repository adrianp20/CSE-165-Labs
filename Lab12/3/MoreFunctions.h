/*
Use the files Functions.h and namespaces.cpp. There is a namespace called MyLib defined
in Functions.h. Extend that namespace in a file called MoreFunctions.h so that the
code compiles and runs without errors and matches the expected output. Submit your
MoreFunctions.h file.
Expected Output:
f
someFunction
*/

#ifndef LA10_MoreFunctions_h
#define LA10_MoreFunctions_h

#include "Functions.h"
#include <iostream>

using namespace MyLib;

using namespace std;

class someFunction {
public:
    someFunction() { // default constructor
        cout << "someFunction" << endl; // print someFunction
    }
};


#endif
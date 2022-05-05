/*
Use the files Functions.h and namespaces.cpp. There is a namespace called MyLib defined
in Functions.h. Extend that namespace in a file called MoreFunctions.h so that the
code compiles and runs without errors and matches the expected output. Submit your
MoreFunctions.h file.
Expected Output:
f
someFunction
*/

// WORKING

#include <iostream>
#include "MoreFunctions.h"


using namespace MyLib;

int main(int argc, const char * argv[])
{
    f();
    someFunction();
    return 0;
}
/*
Use the files Functions.h and namespaces.cpp. There is a namespace called MyLib defined
in Functions.h. Extend that namespace in a file called MoreFunctions.h so that the
code compiles and runs without errors and matches the expected output. Submit your
MoreFunctions.h file.
Expected Output:
f
someFunction
*/

#ifndef LA12_Functions_h
#define LA12_Functions_h

#include <iostream>

namespace MyLib {
    void f(){
        std::cout << "f" << std::endl;
    }
    void g(){
        std::cout << "g" << std::endl;
    }
}


#endif
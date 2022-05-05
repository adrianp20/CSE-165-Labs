/*
References in C++ 
Study the file refs.cpp. It makes use of a function named triple which returns a number multiplied by three. Provide
this function in a file named refs.h.
Sample output from refs.cpp
>>Enter a number : 5
<<15
*/

#ifndef REFS_H
#define REFS_H

#include <iostream>

using namespace std;

struct refs{
    int num;
    int triple(int num){ // function
        return num * 3; // return
    };
    
};


#endif


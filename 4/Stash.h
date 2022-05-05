/*
Modified Stash
In the following exercise you will again use the Stash structure, however with two modifi-
cations:
(a) you will have a new integer member to store the desired increment to be used during
re-allocation (not a fixed 100 value as in the book)
(b) you will have another integer member variable to count the number of re-allocations
(calls to the inflate method) the Stash structure needed during its use.
You will now write a variation of the run-length encoder you wrote in the previous lab
using the Stash structure with each entry being one character.
First of all you will read as input an integer that will tell how much the Stash should use
as increment. Then you will read a sequence of pairs, each pair containing a character and
a number. For each pair (C,N), add to a Stash object the character C, N times without
spaces. If a pair has a negative N number, then add the character C, |N| times and then
add a newline character (’\n’). If a pair (&,99) is read, then stop reading values, print the
elements in the Stash in the order received, and then print two numbers: the number of
calls that were made to inflate() inside your Stash object, and the total size in bytes that
was allocated by the Stash object at the end (the value of the quantity variable).
Example:

Input:
10
a 2
b 3
c −1
& 99

Output:
aabbbc
1
10
*/
#ifndef Stash_h
#define Stash_h

#include <iostream>

struct Stash {
    int quantity;
    int increment;
    int num_reallocs;
    char *storage;
    
    Stash(int size = 100, int increment = 100) {
        quantity = 0;
        this->increment = increment;
        num_reallocs = 0;
        storage = new char[size];
    }
    
    ~Stash() {
        delete[] storage;
    }
    
    void inflate(int increase) {
        char *old_storage = storage;
        storage = new char[quantity + increase];
        for (int i = 0; i < quantity; i++) {
            storage[i] = old_storage[i];
        }
        delete[] old_storage;
        num_reallocs++;
    }
    
    void add(char c) {
        if (quantity == 0) {
            storage[quantity++] = c;
        } else {
            if (quantity == increment) {
                inflate(increment);
            }
            storage[quantity++] = c;
        }
    }
    
    void add(char c, int n) {
        if (n < 0) {
            n = -n;
            while (n--) {
                add(c);
            }
        } else {
            while (n--) {
                add(c);
            }
        }
    }
    
    void print() {
        for (int i = 0; i < quantity; i++) {
            std::cout << storage[i];
        }
        std::cout << std::endl;
    }
};





#endif
/*
Stash 
Consider the file Stash.h. This file contains the Stash data structure from Chapter 4 of
the textbook. Your task is to write a program that declares an instance of Stash, fills
it up with double numbers and then prints out the numbers. You have to use the Stash
member functions to complete this exercise. You need to create a file called input.txt,
which contains floating points numbers at each line. Your program should read in these
values, store them in a Stash object and print out the values. After the floating points
values have been printed out, use the appropriate member function of Stash to free up the
memory your object occupied.
Example:
Input:
2.3
5.6
9.7
−0.5
Output:
2.3
5.6
9.7
−0.5
*/

// doesnt output the numbers in the correct order
// not outputting negative numbers


#include <iostream>
#include <fstream>
#include "Stash.h"

using namespace std;


int main() {
    Stash s;
    s.initialize(sizeof(double)); // initialize the stash with double size
    ifstream in("input.txt"); // open the input file
    double d;
    while (in >> d) { // read in the numbers
        s.add(&d); // add the numbers to the stash
    }
    for (int i = 0; i < s.count(); i++) { // print out the numbers
        cout << *(double*)s.fetch(i) << endl;
    }
    s.cleanup(); // free up the memory
    return 0;
}

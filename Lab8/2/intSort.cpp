/*
Integer Sorting 
Your task is to write a class called Data, stored in a file named Data.h. Your class should
be able to store a collection (vector) of integers. In addition to the appropriate construc-
tors, your class should also have the following methods.
void add (int number); // Adds a number to the data set.
void print (); // Prints out the entire data set on a single line, separated by space.
void sort (); // Sorts the data set in ascending order. You may implement any sorting
algorithm here, for example, max sort, bubble sort, insertion sort, merge sort, quick sort,
etc... There is no need to try to implement the most efficient one, any one will do.
Make sure your class works as expected with the file intSort.cpp.
Sample output from intSort.cpp
Input: 4 5 2 3 1
Output: 1 2 3 4 5
*/

// working

#include <iostream>
#include "Data.h"

int main(int argc, const char * argv[])
{
    Data myData; // create an instance of Data
    
    myData.add(4); // add 4 to data set
    myData.add(5); // add 5 to data set
    myData.add(2); // add 2 to data set
    myData.add(3); // add 3 to data set
    myData.add(1); // add 1 to data set
    
    myData.print(); // print data set
    
    myData.sort(); // sort data set
    
    myData.print(); // print data set
    
    return 0;
}
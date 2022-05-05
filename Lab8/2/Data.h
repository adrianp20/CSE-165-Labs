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

#ifndef Data_h
#define Data_h

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Data {
    private:
        vector<int> data; // vector of integers
    public:
        void add(int number){ // adds a number to the data set
            data.push_back(number); // add number to vector
        }

        void sort() { // sorts the data set in ascending order
            int temp;
            for(int i = 0; i < data.size(); i++) { // loop through vector
                for(int j = 0; j < data.size() - 1; j++) { // loop through vector
                    if(data[j] > data[j + 1]) { // if current number is greater than next number
                        temp = data[j]; // swap numbers
                        data[j] = data[j + 1]; // swap numbers
                        data[j + 1] = temp; // swap numbers
                    }
                }
            }
        }

        void print() {
            for(int i = 0; i < data.size(); i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    
};




#endif
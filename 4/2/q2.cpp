/*
Stack 
Consider the file Stack.h. This file contains the Stack data structure from Chapter 4 of
the textbook. Your task is to write a program that declares an instance of Stack, fills
it up with double numbers and then prints out the numbers. You have to use the Stack
member functions to complete this exercise (except for printing). You need to create a file
called input.txt, which contains floating points numbers at each line. Your program should
read in these values, store them in a Stack object and print out the values in the reverse
order without deleting them from the stack (for printing you can directly access member
variables). After the double values have been printed out, free the Stack by removing all
elements with the pop() function. When the stack is empty, call the cleanup() function.
Example:

Input:
2.3
5.6
9.7
−0.5

Output:
−0.5
9.7
5.6
2.3

*/
// print in reverse order
// printing memory address not doubles from text file

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Stack.h"

using namespace std;

void double_to_string(double *num, string& s){ // convert double to string
    ostringstream new_s; // output string stream
    new_s << num;
    s = new_s.str();
}

int main() {
    Stack stack_1 = Stack();
    Stack stack_2 = Stack();
    ifstream txt_file("input.txt");

    stack_1.initialize();

    string s;

    do {
        txt_file >> s; // read in a string
        double *num = new double; // create a double pointer
        double_to_string(num, s); // convert string to double
        stack_1.push(num); // push the double pointer into stack_1
    } while(!txt_file.eof()); // until end of file

    while(stack_1.head != NULL) { // while stack is not empty
        // cout<<*(double *)stack_1.head->data<<endl; // print out the double values (find alternate way)
        //cout<<stack_1.pop()<<endl; // pop the double values
        //cout<<stack_1.head->data<<endl; // print out the head pointer
        //stack_2.push(stack_1.pop()); // push the popped value into stack_2
        cout<<stack_1.pop()<<endl; // pop the double values
        cout<<stack_1.head->data<<endl; // print out the head pointer
        stack_1.head = stack_1.head->next; // move to next node
    }

    stack_1.head = stack_2.head; // copy stack_1 to stack_2

    while(stack_1.head != NULL) { // while stack_1 is not empty
        stack_1.pop(); // remove the double values from stack_1
    }

    stack_1.cleanup(); // call cleanup() function
    return 0;
}
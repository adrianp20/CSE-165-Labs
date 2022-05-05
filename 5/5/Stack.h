/*
Extend the file stack.h containing Stack class given in order for it to store double numbers (instead of void* pointers).
Add a destructor that will delete all the stack by making calls to pop(), and for each element destroyed the element
will be printed to the output. Now add two constructors: the default one that will create an empty stack, and
another one that will receive an integer n and will build a stack of n elements, such that the first element is 1.0, and
the next ones are incremented of 0.1. Upload your Stack class. It will be then tested for correctness with stacks.cpp.
2 1.5 1 0.5
1.3 1.2 1.1 1 end 
*/

// can use stack.h from other questions in this lab

// add 2 default constructors

#ifndef Stack_h
#define Stack_h
#include <iostream>

using namespace std;

struct StackElement { // struct to store the data
    double value;
    StackElement *next; // pointer to next element
    void initialize(double value) { // initialize the element
        this->value = value;
        next = NULL;
    }
};

class Stack { // class to store the stack
    private:
        StackElement *top; // pointer to the top element
    public:
        Stack() { // default constructor
            top = NULL;
        }
        Stack(int n) { // constructor with n elements
            top = NULL;
            double num = 1.0;
            for (int i = 0; i < n; i++) { // loop to add n elements
                push(num); // add element
                num += 0.1; // increment num
            }
        }
        ~Stack() { // destructor
            while (top != NULL) { // loop to delete all elements
                cout << top->value << " ";
                StackElement *temp = top;
                top = top->next;
                delete temp;
            }
        }

        void push(double value) { // function to add element
            StackElement *temp = new StackElement;
            temp->initialize(value); // initialize the element
            temp->next = top;
            top = temp;
        }

        double pop() { // function to remove element
            if (top == NULL) {
                cout << "Stack is empty" << endl;
                return 0;
            }
            double value = top->value; // store the value
            StackElement *temp = top; // store the top element
            top = top->next; // move top to next element
            delete temp;
            return value;
        }

        double peek() { // function to return the top element
            if (top == NULL) {
                cout << "Stack is empty" << endl;
                return 0;
            }
            return top->value; // return the value
        }
};

#endif
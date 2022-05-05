/*
One of the problems of our Stack and LinkedList structs is that if we make them handle
generic types with void* pointers, they will not know how to delete the elements we insert
in them. We will see later how templates will solve that, but for now let’s practice using
pointers to functions. Extend the book’s Stack struct (file Stack.h) with one more member
variable that will hold a pointer to the following function prototype:
void deletecb(void* pt)
You will then add a member function to set this pointer:
void stack::DeleteCallback(void (*delcb)(void* pt)) 
After you do this, then add the corresponding code in the cleanup method to traverse
all elements of the stack, deleting the links and calling the delete callback once for each
stored void pointer. The user will be responsible for providing the delete callback and
implementing it with the correct delete call after converting the void pointer argument to
its correct type. You may download the Stack.h file, make the modifications described
above and submit it. Your code will be evaluated using voidPointers.cpp.
*/

// working

#include <iostream>
#include <stack>
#include "Stack.h"

using namespace std;

void deletecb(void * pt){
    double * dpt = (double *)pt; // convert void pointer to double pointer
    cout<<"Removing pointer: " << * dpt << endl;
    delete dpt;
}

void read_user_input(double *num) {
    cout << "Enter a double: ";
    cin >> *num; // read a double from the user
}

int main() {
    Stack *float_stack = new Stack; // create a new stack called float_stack
	
	float_stack->initialize(); // initialize the stack
    
    double num = 0;
	int user = 0;;
	
    cout<<"Enter number of entries you would like to input: ";
	cin >> user;
    
    for(int i = 0; i < user; i++) {
        read_user_input(&num); // read in a number
        float_stack->push(new double(num)); // push the value to the stack
    }
    
    void (*delete_ptr)(void * pt) = deletecb; // pointer to function
    
    float_stack->setDeleteCallback(delete_ptr); // set the delete callback
    
    float_stack->cleanup(); // delete all elements
    
    return 0;
}

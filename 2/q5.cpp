/*
Pointer math 
Write a program that a user enters two integers. Create a pointer to each of the numbers.
Multiply, add, subtract and divide the pointers together (remember to dereference them)
and output the result to the console.
*/
#include <iostream>

using namespace std;

void multiply_pointers(int *p1, int *p2) {
    cout<<"Multiplication: "<<*p1 * *p2<<endl;
}

void add_pointers(int *p1, int *p2) {
    cout<<"Addition: "<<*p1 + *p2<<endl;
}

void subtract_pointers(int *p1, int *p2) {
    cout<<"Subtraction: "<<*p1 - *p2<<endl;
}

void divide_pointers(int *p1, int *p2) {
    cout<<"Division: "<<*p1 / *p2<<endl;
}

void display_pointers(int *p1, int *p2) {
    cout<<"Pointer 1: "<<*p1<<endl;
    cout<<"Pointer 2: "<<*p2<<endl;
}

int main() {
    int num1, num2;
    cout<<"Enter two integers: ";
    cin>>num1>>num2;
    int *p1 = &num1; // pointer to num1
    int *p2 = &num2; // pointer to num2
    multiply_pointers(p1, p2);
    add_pointers(p1, p2);
    subtract_pointers(p1, p2);
    divide_pointers(p1, p2);
    display_pointers(p1, p2);
    // dereference pointers
    // cout<<"Dereferenced pointers: "<<*p1<<" "<<*p2<<endl;
    cout<<endl;
    return 0;
}
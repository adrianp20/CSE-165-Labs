/*
Formatted Output 
Write a program that keeps reading in positive integers and for each integer outputs the
corresponding value in hexadecimal and binary format. Stop when -1 is read. No output
should be generated for -1. set binary to be 5 digits long.
*/

#include <iostream>
#include <iomanip>

using namespace std;

bool is_positive(int n) {
    if(n > 0) { // checking for positive integers
        return true;
    } else {
        return false;
    }
}

void display_hex(int n) {
    cout<<"Hexadecimal: "<<hex<<n<<endl;
}

void display_binary(int n) {
    cout<<"Binary: "<<setw(5)<<setfill('0')<<bitset<5>(n)<<endl; // set to 5 digits
}

int main() {
    int n;
    while(true) { // while integer is positive
        cout<<"Enter -1 to exit the program."<<endl;
        cout<<"Enter a positive integer: ";
        cin>>n;
        if(is_positive(n)) {
            display_hex(n);
            display_binary(n);
        }
        if(n == -1) { // for breaking out of loop
            cout<<"Exiting program."<<endl;
            break;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

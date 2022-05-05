/*
 If-else statements 
Write a program that reads in an integer and outputs ”POSITIVE” if the integer is positive
and ”NEGATIVE” if it is negative, and ”ODD” if the integer is odd and ”EVEN” if the
integer is even.
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cout<<"Enter an integer: ";
    cin >> n;
    
    if (n > 0) {
        cout << "POSITIVE" << endl;
    } else if (n < 0) {
        cout << "NEGATIVE" << endl;
    } else {
        cout << "ZERO" << endl;
    }
    if (n % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    return 0;
}
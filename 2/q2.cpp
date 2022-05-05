/*
While loops 
Modify the program just you wrote for the previous exercise so that it keeps reading integers
and classifying them as ODD or EVEN and POSITIVE or NEGATIVE until the user inputs
0. Then the program ends. No classification should be produced for the 0.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    while (true) {
        cout << "Enter 0 to exit program.\nEnter an integer: ";
        
        cin >> n;
        if (n == 0) {
            cout<<"Exiting program."<<endl;
            break;
        }
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
    }
    return 0;
}
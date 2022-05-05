/*
References in C++ 
Study the file refs.cpp. It makes use of a function named triple which returns a number multiploed by three. Provide
this function in a file named refs.h.
Sample output from refs.cpp
>>E n t e r a number : 5
<<15
*/

// Working

#include <iostream>
#include "refs.h"

using namespace std;


int main() {
	refs myRefs; // myRefs is a reference to the class refs
	int num;
	cout << "Enter a number : ";
	cin >> num;
	cout << "Triple of " << num << " is " << myRefs.triple(num) << endl; // call the function
	return 0;
	// int num;

	// cout << "Enter a number: ";
	// cin >> num;

	// triple(num);

	// cout << num << endl;
	// return 0;
}
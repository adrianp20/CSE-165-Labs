/*
Modified Stash
In the following exercise you will again use the Stash structure, however with two modifi-
cations:
(a) you will have a new integer member to store the desired increment to be used during
re-allocation (not a fixed 100 value as in the book)
(b) you will have another integer member variable to count the number of re-allocations
(calls to the inflate method) the Stash structure needed during its use.
You will now write a variation of the run-length encoder you wrote in the previous lab
using the Stash structure with each entry being one character.
First of all you will read as input an integer that will tell how much the Stash should use
as increment. Then you will read a sequence of pairs, each pair containing a character and
a number. For each pair (C,N), add to a Stash object the character C, N times without
spaces. If a pair has a negative N number, then add the character C, |N| times and then
add a newline character (’\n’). If a pair (&,99) is read, then stop reading values, print the
elements in the Stash in the order received, and then print two numbers: the number of
calls that were made to inflate() inside your Stash object, and the total size in bytes that
was allocated by the Stash object at the end (the value of the quantity variable).
Example:

Input:
10
a 2
b 3
c −1
& 99

Output:
aabbbc
1
10
*/

// not working

#include <iostream>
#include "Stash.h"

using namespace std;

int main() {
    int size, increment;
    cin >> size >> increment; // read size and increment
    Stash stash(size, increment);
    char c;
    int n;
    while (cin >> c >> n) { // read pairs
        if (n < 0) {
            n = -n; // make n positive
            for (int i = 0; i < n; i++) { // add n times
                stash.add(c); // add c
            }
            stash.add('\n'); // add newline
        } else {
            for (int i = 0; i < n; i++) { // add n times
                stash.add(c); // add c
            }
        }
        if (c == '&') { // stop reading
            break;
        }
    }
    cout << stash.num_reallocs << endl; // print number of reallocs
    cout << stash.quantity << endl; // print total size
    return 0;
}
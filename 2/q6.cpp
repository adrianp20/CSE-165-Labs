/*
Bit Manipulation 
Write a program that reads in a decimal number ”n”. Convert the decimal number into
binary format and prints out the number in binary format. Now, Write following functions
to get, set and clear bit at the position ”index” and display the corresponding output given
below. Please note that index 0 is the right most(least significant) bit.

Example1:
Consider input number n = 20 and index = 0
Binary representation of 20 is: 10100
Get bit at position 0: 0
Binary representation after setting bit at position 0: 10101
Binary representation after clearing bit at position 0: 10100

*/

#include <iostream>
#include <bitset>

using namespace std;

int getBit(int n, int index) {
    return (n >> index) & 1; // return 1 if bit is set, 0 otherwise
}

int setBit(int n, int index) {
    return n | (1 << index); // return n or 1 shifted index times
}

int clearBit(int n, int index) {
    return n & ~(1 << index); // ~ used to modify the bit at index
}

int main() {
    int n;
    int index;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a position: ";
    cin>>index;
    cout<<"Binary representation of "<<n<<" is: "<<bitset<5>(n)<<endl; // 5 is the number of bits
    cout<<"Get bit at position "<<index<<": "<<getBit(n, index)<<endl;
    cout<<"Binary representation after setting bit at position "<<index<<": "<<bitset<5>(setBit(n, index))<<endl;
    cout<<"Binary representation after clearing bit at position "<<index<<": "<<bitset<5>(clearBit(n, index))<<endl;
    return 0;
}
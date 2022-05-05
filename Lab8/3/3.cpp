/*
 Sortable Objects x
Study the file Sortable.h. It contains class template Sortable which inherits from class
template vector<T> and adds sorting to it. Write a driver code for Sortable.h in a .cpp
file to create Sortable objects to store the input data from sample input files. The first
input file contains integer numbers, the second input file contains characters and the third
one has strings in every line. Then call method sort from Sortable and print out the
sorted values.
Output
Output1: 1 2 3 4 5 6 7 8 9
Output2: a b c d e f g
Output3: a big dog is running
*/

// working

#include "Sortable.h"

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    // input file stream
    ifstream inFile1; 
    ifstream inFile2;
    ifstream inFile3;

    // output file stream
    ofstream outFile;
    string line;

    inFile1.open("input1.txt");
    inFile2.open("input2.txt");
    inFile3.open("input3.txt");

    // sort each file
    Sortable<int> sortable1;
    Sortable<char> sortable2;
    Sortable<string> sortable3;

// read each line from input file
    while (getline(inFile1, line)) { 
        sortable1.push_back(stoi(line));
    }

    while (getline(inFile2, line)) {
        sortable2.push_back(line[0]);
    }

    while (getline(inFile3, line)) {
        sortable3.push_back(line);
    }

// sort each file
    sortable1.sort();
    sortable2.sort();
    sortable3.sort();

    // print out each file in console
    cout << "Output1: ";
    for (int i = 0; i < sortable1.size(); i++) {
        cout << sortable1[i] << " ";
    }

    cout << endl;

    cout << "Output2: ";
    for (int i = 0; i < sortable2.size(); i++) {
        cout << sortable2[i] << " ";
    }

    cout << endl;

    cout << "Output3: ";
    for (int i = 0; i < sortable3.size(); i++) {
        cout << sortable3[i] << " ";
    }

    cout << endl;

    return 0;
}
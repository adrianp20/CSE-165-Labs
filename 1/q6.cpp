/*
Change Fillvector.cpp so that it concatenates all the elements in the vector into a single string before printing it out,
but do not try to add line numbering. Again, read the file named ”code.cpp” as in the previous exercise.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("code.cpp");
    string line;
    string concat_string = ""; // used to attach all the lines together
    while (getline(inFile, line)) { // getline because we want to read the whole line
        concat_string += line + " "; // concatenate the line to the string
    }
    cout << concat_string << endl;
    return 0;
}
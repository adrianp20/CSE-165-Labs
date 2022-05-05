/*
Extend the program from the previous exercise in the following way: after all input strings are read, you will output
for each non-empty entry of V the number of letters in that entry and the number of strings in that entry. In the
following example the same input is used from the previous exercise, and the resulting outputs are pairs for each
index in V. For the first output line, 1 and 1, means there is one string with length 1, for a total of 1 character.
Whereas the fifth output line, there is a 15 and 3, because there are 3 strings that have length 5 for a total of
15 characters. The order of the output is similar to the previous exercise, except this time the output is the total
characters instead of the strings.
input:
A
Box
Cube
to
happy
hello
computer
mouse
happiness
quit
Output :
1 1
2 1
3 1
4 1
15 3
8 1
9 1
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display_output(vector<vector<string> > V) {
    // multiply the occurence of strings by the length of the string
    for (int i = 0; i < V.size(); i++) {
        if (!V[i].empty()) { // if the vector is not empty
            int count = 0;
            for (int j = 0; j < V[i].size(); j++) { // count the number of strings in the vector
                count += V[i][j].length(); // add the length of the string to the count
            }
            cout<<count<<" "<<V[i].size()<<endl; // print the count and the number of strings in the vector
        }
    }
}

int main() {
    // used same code from q4.cpp
    vector<vector<string> > V(10);
    string str;
    cout<<"Enter strings and enter a character to output the strings that begin with that character. Enter \"quit\" to stop."<<endl;
    while (cin >> str) { // read in the strings
        if (str == "quit") {
            cout<<"Exiting"<<endl;
            break;
        }
        int len = str.length(); // get the length of the string
        if (len > 10) { // if the length of the string is greater than 10, then skip it
            continue;
        }
        if (V[len - 1].empty()) { // if the vector is empty, then add the string to the vector
            V[len - 1].push_back(str); // push_back adds the string to the vector
        } else {
            bool found = false; // if the string is not found in the vector, then add it to the vector
            for (int i = 0; i < V[len - 1].size(); i++) { // check if the string is already in the vector
                if (V[len - 1][i] == str) { // if the string is found in the vector, then skip it
                    found = true; 
                    break;
                }
            }
            if (!found) {
                V[len - 1].push_back(str); // if the string is not found in the vector, then add it to the vector
            }
        }
    }
    display_output(V); // display the output
    return 0;
}

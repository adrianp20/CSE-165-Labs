/*
Write a program where you will have a vector V where each entry is a pointer to a vector of strings. This means
that each entry in V points to a vector of strings. Your program will then read input strings. For each string, if the
number of characters in the string is N, then add it to the string vector in entry V[N-1]. Be sure to allocate the string
vector in each entry as needed. The input string will have a maximum of 10 characters so you can initialize V with
10 entries. Do not add repeated entries. Stop when string ”quit” is read. String ”quit” should not be processed.
Then output the contents of each V entry in order from V[0] to V[9], separated by spaces within the same V entry
and by a new line when switching to the next entry. Skip empty entries. In the following example a seqeuence of
strings, each less than 10 characters, are read, followed by the string ”quit” to stop reading. The output prints the
strings grouped by character lengths on the same line, starting with length 1, all the way to longest length string,
”happiness”, which has 9 characters.

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

Output:
A
to
Box
Cube
happy hello mouse
computer
happiness
*/

#include <iostream> 
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<string> > V(10); // 10 is the size of the vector
    string str;
    while (cin >> str) {
        if (str == "quit") {
            cout<<"Exiting..."<<endl<<endl;
            break;
        }
        int len = str.length();
        if (len > 10) { // if the length of the string is greater than 10, then skip it
            continue;
        }
        if (V[len - 1].empty()) { // if the vector is empty, then add the string to the vector
            V[len - 1].push_back(str); // push_back adds the string to the vector
        } else {
            bool found = false;
            for (int i = 0; i < V[len - 1].size(); i++) {
                if (V[len - 1][i] == str) {
                    found = true;
                    break;
                }
            }
            if (!found) { // if the string is not found in the vector, then add it to the vector
                V[len - 1].push_back(str);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        if (!V[i].empty()) {
            for (int j = 0; j < V[i].size(); j++) {
                cout << V[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
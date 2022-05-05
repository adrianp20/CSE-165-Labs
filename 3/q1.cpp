/*
Write a program that keeps reading in strings of varied sizes. If an input string has length greater than one store it
in a vector. When an input string has length one (a single character) you will output the string stored in your vector
that has the first letter matching the input character. Keep doing this while you read string ”quit”. In the following
example, the user enters four words with more than one letter, followed by the character ”a”. The resulting output
contains all the words previously read that start with the letter ”a”. Note that the string matching should be case
insensitive as seen in the example, the single character is a lowercase ”a”, whereas the matched strings start with
uppercase ”A”.

input:
Apple
Orange
Banana
Apricot
a
quit

Output:
Apple
Apricot
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void lower_case(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') { // if capital letter
            s[i] = tolower(s[i]); // convert to lowercase
        }
    }
}

void display_output(vector<string> &v, string &s) {
    for (int i = 0; i < v.size(); i++) {
        string user = v.at(i); // get string from vector at index i
        if(tolower(user[0]) == s[0]) { // if first letter of string is same as input
            cout << v.at(i) << " "; // output string
        }
    }
    cout << endl;
}

int main() {
    string s;
    vector<string> v;
    cout<<"Enter 'quit' to exit program.\nEnter a string: "<<endl;
    while(true) {
        cin >> s;
        if(s == "quit" || s == "Quit" || s == "QUIT") {
            break;
        }
        if(s.size() > 1) { // if string has more than one character
            v.push_back(s); // add string to vector
        } else {
            lower_case(s); // convert to lowercase
            display_output(v, s); // output strings that begin with input
        }
    }
    //display_output(v, s); // output strings that begin with input


    // while(cin >> s) {
    //     if (s == "quit") {
    //         cout<<"Exiting..."<<endl;
    //         break;
    //     }
    //     if (s.size() > 1) { // if string has more than one character
    //         v.push_back(s); // add string to vector
    //     } else {
    //         lower_case(s); // convert to lowercase
    //         display_output(v, s); // display output
    //     }
        
    // }
    // display_output(v, s);
    return 0;
}

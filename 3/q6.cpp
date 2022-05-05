/*
Write a program where you keep reading strings from the input, and then: if the number of characters is four or
more, you will store the string in a vector; if the number of characters is less than or equals to three, you will find
the strings which begin with the input string in the vector of strings, and then you will output the found strings.
Stop when string ”quit” is read. String ”quit” should not be processed. If no match is found, continue reading. In
the following example, a sequence of five strings, each with more 3 characters, are read, followed by a 3 character
string, then the ’quit’ to stop reading. The output prints all the strings that were read up to that point, that begin
with the same characters as the 3 character string, ”Hel”. Note the matching of strings should be case insensitive,
so if in the example we matched ”hel” with a lowercase ”h”, it should produce the same result.

input:
Hello
HelloWorld
HelloHarry
Care
Careless
Hel
quit
Output:
Hello HelloWorld HelloHarry
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void lower_case(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') { // if capital letter
            s[i] = tolower(s[i]); // convert to lowercase
        }
    }
}

vector<string> find_sub(string sub_found, vector<string> strings) {

    vector<string> results;

    for (int i = 0; i < strings.size(); i++) { // for each string in vector
        string input = strings.at(i); // get string from vector at index i

        // convert to lowercase 
        lower_case(input);
        lower_case(sub_found);

        if (input.find(sub_found) != string::npos) { // if substring is found and has not reached end of string
            results.push_back(strings.at(i)); // add string to vector
        }
    }
    return results; // return vector
}

void display_output(vector<string> strings) {
    for(int i = 0; i < strings.size(); i++) { // for each string in vector strings
        cout<< strings.at(i) << " "; // output string at index i
    }
}

int main() {
    vector<string> results;
    vector<string> strings;

    cout<<"Enter 'quit' to exit program.\nEnter a string less than 4 chars to output strings with matching chars \nEnter a string: \n";

    do {
        string user;
        cin>>user;

        if(user.size() < 4) { // if string has less than 4 characters
            results = find_sub(user, strings); // find strings that begin with user input
        } else if(user == "quit") { // if string is quit
            if (!results.empty()){ // if vector is not empty
                cout<<"Exiting..."<<endl<<endl;
                break;
            } 
        } else { // if string has more than 4 characters
            strings.push_back(user); // add string to vector
        }        
    } while (true); // loop until user enters quit

    display_output(results);
    cout<<endl;

    return 0;
}

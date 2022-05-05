/*
 you will read a sequence of pairs containing a character and a number. For each
pair (C,N), output the character N times without spaces. When a pair has number -1 print a newline, if the number
is -2 then stop. In the following example, the user enters the first pair, ”h” and 3, which results in the letter ”h”
printing 3 times. The second pair, ”b” and -1, results in a newline being printed. The third pair, ”a” and 2, results
in the letter ”a” printing twice. Finally, the pair ”f” and -2 exits the program.
input:
h
3
b
−1
a
2
f
−2

Output:
hhh

aa
(program exit)
*/

#include <iostream>
#include <vector>

using namespace std;

void user_decision(int num, char c) { // used for user input
    if(num == -1) { // print new line if user enters -1
        cout<<endl;
    } else if(num == -2) { // exit program is user enters -2
        cout<<"Exiting...\n"<<endl;
        exit(0); 
    } else {
        for(int i = 0; i < num; i++) { // print num times
            cout<<c;
        }
    }
}

void display_output(vector<pair<char, int> > &v) {
    for(int i = 0; i < v.size(); i++) {
        user_decision(v.at(i).second, v.at(i).first); // get char and num from vector at index i and call user_decision
    }
    cout<<endl;
}

int main() {
    char c;
    int num;
    vector<pair<char, int> > v; // vector of pairs
    cout<<"Enter -2 to quit program.\nEnter a character and a number: " <<endl;
    while(num != -2) {  // -2 is the exit condition
        cin>>c>>num; // read user input
        if(num == -2) {
            cout<<"Exiting..."<<endl;
            break;
        }
        v.push_back(make_pair(c, num)); // add pair to vector
    }
    display_output(v); // display output
    return 0;

}

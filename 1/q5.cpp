/*
The FillVector.cpp program prints its own lines with numbers at the beginning of each line. Modify this program in
the following ways. First, make it read and print the lines of a file called ”code.cpp”. Second, print the same content
with the line numbers reversed (i.e. starting with the highest number and counting down).
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void print_original_vector(vector<string> &v) {
    int count = 1;
    for (int i = 0; i < v.size(); i++) {
        cout << count << ": " << v[i] << endl;
        count++;
    }
}

void print_vector_reverse(vector<string> &v) {
    int count = v.size();
    for (int i = 0; i < v.size(); i++) {
        cout << count << ": " << v[i] << endl;
        count--;
    }
}

int main() {
    cout<<endl; // added for personal readability
    ifstream inFile;
    inFile.open("code.cpp");
    string line;
    vector<string> line_count;
    while (getline(inFile, line)) {
        line_count.push_back(line);
    }
    print_original_vector(line_count);
    cout<<endl;
    print_vector_reverse(line_count);
    return 0;
}

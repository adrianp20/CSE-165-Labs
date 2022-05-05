// Create a program that opens a file named words.txt and counts the whitespace-separated words in that file.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("words.txt");
    string word;
    int count = 0;
    while (inFile >> word) {
        count++;
    }
    cout << "There are " << count << " words in the file." << endl;
    return 0;
    
}
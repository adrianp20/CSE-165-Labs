#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    ifstream in("file.txt");
    string line;
    while (getline(in, line)) //getline returns true if read successfully
    v.push_back(line); // Add the line to the end of v // Add line numbers:
    for(int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl;
}
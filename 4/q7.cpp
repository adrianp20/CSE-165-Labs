/*
How big is a structure? 
Write a piece of code that prints the size of the structures specified below, in the order
they appear.
• containing 1 char and 1 double
• 2 chars and 1 double
• 3 chars and 1 double
• 4 chars and 1 double
• an empty struct
• 1 char, followed by 1 int and then 1 char
• 2 chars followed by 1 int
*/

// working

#include <iostream>

using namespace std;

struct part1 {
    char c;
    double d;
};

struct part2 {
    char c1;
    char c2;
    double d;
};

struct part3 {
    char c1;
    char c2;
    char c3;
    double d;
};

struct part4 {
    char c1;
    char c2;
    char c3;
    char c4;
    double d;
};

struct empty {
};

struct part5 {
    char c;
    int i;
    char c2;
};

struct part6 {
    char c1;
    char c2;
    int i;
};

int main() {
    cout<<"part 1: "<<sizeof(part1)<<endl;
    cout<<"part 2: "<<sizeof(part2)<<endl;
    cout<<"part 3: "<<sizeof(part3)<<endl;
    cout<<"part 4: "<<sizeof(part4)<<endl;
    cout<<"empty: "<<sizeof(empty)<<endl;
    cout<<"part 5: "<<sizeof(part5)<<endl;
    cout<<"part 6: "<<sizeof(part6)<<endl;
    return 0;

}
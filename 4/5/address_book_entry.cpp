/*
Create a struct named Entry that stores an entry of an address book. It should have
fields for first name, last name and email address. Provide the appropriate getter and
setter functions for each one of the fields. In addition provide a function called print. This
function should print out the information in the class in the way it appears in the sample.
Your code should go into a file named Entry.h with all the member functions implemented
inline (in the header file). Your code will be tested using the file address book entry.cpp.
*/

// working

#include <iostream>
#include <string>
#include "Entry.h"

void read_user_info(string &first_name, string &last_name, string &email_address) {
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    cout << "Enter your email address: ";
    getline(cin, email_address);
}

void set_all_info(Entry &myEntry, string first_name, string last_name, string email_address) {
    myEntry.set_first_name(first_name); // set the name
    myEntry.set_last_name(last_name); // set the last name
    myEntry.set_email(email_address); // set the email
}


int main() {
    string first_name;
    string last_name;
    string email_address;
    
    read_user_info(first_name, last_name, email_address); // read user info
    
    Entry myEntry;

    set_all_info(myEntry, first_name, last_name, email_address); // set all info into the struct
    
    // myEntry.set_first_name(first_name); // set the name
    // myEntry.set_last_name(last_name); // set the last name
    // myEntry.set_email(email_address); // set the email
    
    myEntry.print(); // print the entry
    
    return 0;
}
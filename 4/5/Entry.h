/*
Create a struct named Entry that stores an entry of an address book. It should have
fields for first name, last name and email address. Provide the appropriate getter and
setter functions for each one of the fields. In addition provide a function called print. This
function should print out the information in the class in the way it appears in the sample.
Your code should go into a file named Entry.h with all the member functions implemented
inline (in the header file). Your code will be tested using the file address book entry.cpp.
*/

#ifndef Entry_h
#define Entry_h

#include <iostream>

using namespace std;

struct Entry { // struct Entry
    // class myEntry {
    public: // make public
        string first_name;
        string last_name;
        string email_address;
        
        // change all void funcs to string so they can return a value
        string set_first_name(string n) { // set the first_name
            first_name = n;
            return first_name;
        }
        
        string set_last_name(string l) { // set the last_name
            last_name = l;
            return last_name;
        }
        
        string set_email(string email) { // set the email
            email_address = email; // assign the email to the email address
            return email_address;
        }
        
        void print() { // display all user input info
            cout<<"\nDisplaying user information: "<<endl;
            cout<<"First Name: "<<first_name<<endl;
            cout<<"Last Name: "<<last_name<<endl;
            cout<<"Email Address: "<<email_address<<endl;
            cout<<endl;
        }
};

#endif
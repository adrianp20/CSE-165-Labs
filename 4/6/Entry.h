#ifndef Entry_h
#define Entry_h

#include <iostream>
#include <string>

using namespace std;

class Entry {
    public: 
    string first_name;
    string last_name;
    string email_address;

    string set_first_name(string n) {
        first_name = n; // set the name
        return first_name;
    }

    string set_last_name(string l) {
        last_name = l; // set the last name
        return last_name;
    }

    string set_email(string e) {
        email_address = e; // set the email
        return email_address;
    }

    void print_info() {
        cout<<"First Name: "<<first_name<<endl;
        cout<<"Last Name: "<<last_name<<endl;
        cout<<"Email Address: "<<email_address<<endl;
    }
};

#endif
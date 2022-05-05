/*
AddressBook.h 
Create a struct named AddressBook that stores multiple Entry structs (that you created
in the previous exercise). Your code must be saved in a file named AddressBook.h and
should use Entry structs from Entry.h.
Member functions for AddressBook should be able to add an entry and print all the entries
in the address book. Your code will be tested with the file addressBook.cpp, which reads
in several entries from standard input, stores them in an AddressBook instance and prints
them all out
*/

// working

#include <iostream>
#include <string>

#include "Entry.h"
#include "AddressBook.h"

using namespace std;

void read_user_input(string &first_name, string &last_name, string &email_address) {
    cout << "Enter your first name: ";
    cin>>first_name;
    cout << "Enter your last name: ";
    cin>>last_name;
    cout << "Enter your email address: ";
    cin>>email_address;
}

void set_all_info(Entry &myEntry, string first_name, string last_name, string email_address) {
    myEntry.set_first_name(first_name); // set the name
    myEntry.set_last_name(last_name); // set the last name
    myEntry.set_email(email_address); // set the email
}

int main() {
    int n = 0;
    
    cout<<"Enter number of entries: ";
    cin >> n;
    
    string first_name;
    string last_name;
    string email_address;

    AdressBook new_address_book; // create a new address book

    for (int i = 0; i < n; i++) { // read user info and add to the address book
        read_user_input(first_name, last_name, email_address);
        
        Entry *entry = new Entry();
  
        set_all_info(*entry, first_name, last_name, email_address);

        new_address_book.add(entry); // add the entry to the address book
    }
    
    cout<<endl;
    cout<<"Printing all user entries: "<<endl;
    new_address_book.print(); // print all entries in the address book 
    
    return 0;
}
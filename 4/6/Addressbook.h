#ifndef AdressBook_h
#define AdressBook_h

#include <iostream>
#include <string>
#include <vector>
#include "Entry.h"

using namespace std;

struct AdressBook {
    public: 

        vector<Entry*> entries; // create a vector of entries

        void add(Entry * e) { // add an entry to the address book
            entries.push_back(e); // add the entry to the vector
        }

        void print() {
            for (int i = 0; i < entries.size(); i++) {
                entries[i]->print_info(); // print all entries in the address book
                //entries[i]->Entry::print_info();
            }
            cout<<endl;
        }

};
#endif

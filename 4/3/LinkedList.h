#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

class LinkedList {      
public:
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head;
    
    LinkedList(double* d, int val){
        head = 0;
        head = new Link;
        head->initialize(d, NULL);
    }

    void add(double* d, int val){
        Link* newLink = new Link;
        newLink->initialize(d, head);
        head = newLink;
    }
	
    void add(Link* l, double val){   
        Link* link;
        link = l;
        for (double i = 0; i < val; i++){
            link->next = new Link();
            link->next->initialize(new double(i), new Link());
            link = link->next;
        }   
    }
	
    void print(){
        Link* link;
        link = head;
        while(link->data != 0){
            cout << *(double*)(link->data) << endl;
            link = link->next;
        }
    }
	
    void cleanup() {
        Link* link;
        link = head;
        while(link->data != 0){
            delete link->data;
            link = link->next;
        }
    }
};
#endif

/*
LinkedList 
You are now going to create a LinkedList structure that will work very similarly to the
Stack structure seen in the book (and used in the previous exercise). The starter code is
provided in LinkedList.h. After you complete the LinkedList.h, create another program
which will use your LinkedList.h similar to the previous exercise. You need to create a file
called input.txt, which contains floating points numbers at each line. Your code should
read in floating point numbers from input.txt, and store them in a LinkedList. Then it
should iterate through the LinkedList, and print out the stored values. Then it should
clear up LinkedList, and free all the dynamically allocated memory.
*/

#include <iostream>
#include <string>
#include <fstream>
#include "LinkedList.h"

// not outputting the correct values

using namespace std;

class Node {
public:
    void* data;
    Node* next;
    
    void initialize(void* dat, Node* nxt) {
        data = dat;
        next = nxt;
    }
};

void insert_node(Node*& head, void* data) {
    Node* newNode = new Node;
    newNode->initialize(data, head);
    head = newNode;
}

void display_txt(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << *(double*)(curr->data) << endl;
        curr = curr->next;
    }
}

// void display_list(Node* head) {
//     Node* current = head;
//     while (current != NULL) {
//         cout << *(double*)(current->data) << endl;
//         current = current->next;
//     }
// }

int main() {
    Node* head = NULL;
    ifstream txt_file("input.txt");
    
    string s;
    
    do {
        txt_file >> s;
        double *num = new double;
        insert_node(head, num);
    } while(!txt_file.eof());
    
    //display_list(head);
    display_txt(head);
    
    while(head != NULL) {
        delete head->data;
        head = head->next;
    }
    
    return 0;
}



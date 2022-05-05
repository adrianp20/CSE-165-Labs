#include <iostream>
#include <vector>
#include "Dog.h"
#include "display.h"

// working

using namespace std;

int main() {
    cout<<"Enter number of animals: ";
    int n;
    cin >> n;
    vector<Animal*> list; // vector of pointers to Animal
    for (int i = 0; i < n; i++) { // for each animal
        char c;
        string name;
        int age;

        cout<<"Enter type of animal, name and age: ";
        cin >> c >> name >> age; // read in the animal's type, name and age

        if (c == 'A') {
            list.push_back(new Animal(name, age)); // create a new Animal object
        } else {
            list.push_back(new Dog(name, age)); // create a new Dog object
        }
    }
    display(list); // display the animals
    return 0;
}
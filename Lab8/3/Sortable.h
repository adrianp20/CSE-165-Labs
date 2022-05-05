/*
 Sortable Objects x
Study the file Sortable.h. It contains class template Sortable which inherits from class
template vector<T> and adds sorting to it. Write a driver code for Sortable.h in a .cpp
file to create Sortable objects to store the input data from sample input files. The first
input file contains integer numbers, the second input file contains characters and the third
one has strings in every line. Then call method sort from Sortable and print out the
sorted values.
Output
Output1: 1 2 3 4 5 6 7 8 9
Output2: a b c d e f g
Output3: a big dog is running
*/

#ifndef SORTABLE_H
#define SORTABLE_H
#include <cstring>
#include <cstddef>
#include <string>
#include <vector>
using std::size_t;

template<class T>
class Sortable : public std::vector<T> {
public:
  void sort();
};

template<class T>
void Sortable<T>::sort() { // A simple sort
  for(size_t i = this->size(); i > 0; --i)
    for(size_t j = 1; j < i; ++j)
      if(this->at(j-1) > this->at(j)) {
        T t = this->at(j-1);
        this->at(j-1) = this->at(j);
        this->at(j) = t;
      }
}

// Partial specialization for pointers:
template<class T>
class Sortable<T*> : public std::vector<T*> {
public:
  void sort();
};

template<class T>
void Sortable<T*>::sort() {
  for(size_t i = this->size(); i > 0; --i)
    for(size_t j = 1; j < i; ++j)
      if(*this->at(j-1) > *this->at(j)) {
        T* t = this->at(j-1);
        this->at(j-1) = this->at(j);
        this->at(j) = t;
      }
}

// Full specialization for char*
// (Made inline here for convenience -- normally you would
// place the function body in a separate file and only
// leave the declaration here).
template<> inline void Sortable<char*>::sort() {
  for(size_t i = this->size(); i > 0; --i)
    for(size_t j = 1; j < i; ++j)
      if(std::strcmp(this->at(j-1), this->at(j)) > 0) {
        char* t = this->at(j-1);
        this->at(j-1) = this->at(j);
        this->at(j) = t;
      }
}
#endif // SORTABLE_H ///:~

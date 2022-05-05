/*
This exercise demonstrates the concept of an iterator. Extend your DynArray class of the 
previous exercise so the  iterators.cpp  file works correctly. Your implementation should allow 
the for loop to function using the Iterator class and the DynArray class should define element 
access (hint: operator overload).
Expected output from  iterators.cpp  :
0 : 2 
1 : 1 
2 : 0 
3 : -1 
0 : 2 
1 : 1.0806 
2 : -0.832294 
3 : -1.97998
*/


#ifndef DYNARRAY_H
#define DYNARRAY_H

#include <iostream>
#include <vector>

//using namespace std;

template <typename T> // template class DynArray

class DynArray // class DynArray 
{
    private:
        //vector<T> arr;
        std::vector<T> arr; // vector of type T
        // int size;

    public:
        // DynArray(); <- this did not work without {}
        DynArray(){}; // default constructor
        void add(T x){ // add method
            //arr.push_back(x); size++;
            this->arr.push_back(x); // add x to end of arr
        }
        T operator[](int i){ // [] operator
            // return arr[i];
            return this->arr[i]; // return element at index i
        }
        int getSize(){ // getSize method
            // return size;
            return this->arr.size(); // return size of arr
        }
};


#endif
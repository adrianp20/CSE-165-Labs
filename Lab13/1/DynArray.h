/*
In the  dynArray.cpp  file, a template class DynArray is needed for it to correctly compile and 
display the given output when executed. Namely, DynArray can be instantiated with an arbitrary 
type. Provide its implementation in a header file  DynArray.h
Expected Output from  dynArray.cpp  :
2 1.0806 -0.832294 -1.97998 -1.30729  
2 1 0 -1 -1
Each line outputs the contents of the array separated by a space. The array is populated from 
results of the cosine function for inputs  [0, 1, 2, 3, 4]  , where the values are casted to either a 
float  or  int  type.
*/

#ifndef DYNARRAY_H
#define DYNARRAY_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class DynArray
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
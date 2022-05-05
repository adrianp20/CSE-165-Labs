/*
Create a header file called Matrix.h and implement a class template called Matrix which
inherits from Sortable. Each Matrix object is in fact a Sortable vector that has two
variables row and column to store the size of the matrix. The class template Matrix has
a constructor Matrix(int row, int col) to initialize the Matrix object by setting its
size. It also has methods print and resize. The method print() uses the object’s row
and column values to print out the vector in matrix format, and bool resize(int row)
resizes the matrix by setting new values for row and column. As input, resize only gets
a new value for row and it should find the proper value for column. resize should return
False if it is not possible to resize the original matrix to fit the new row size, and return
True otherwise.
You need to write a driver code in a .cpp file to create one Matrix object for storing
numbers and another object for characters. You need to ask the user to enter the row
and column size, and generate random numbers to fill the first object and and generate
random characters to fill the second object. Then for each object call print once before
calling sort and once after it. Finally, ask the user for a new row size, then print out the
resized matrix.

Sample Output
Numbers:
sample row size: 3
sample column size: 2
Before Sort:
14 10
12 13
11 15
After Sort:
10 11
12 13
14 15
New number of rows: 6
Resized matrix:
10
11
12
13
14
15
Characters:
sample row size: 4
sample column size: 5
Before Sort:
b v e i h
k g c j t
d f y a o
n u r x q
After Sort:
a b c d e
f g h i j
k n o q r
t u v x y
New number of rows: 2
Resized matrix:
a b c d e f g h i j
k n o q r t u v x y
*/

#ifndef MATRIX_H
#define MATRIX_H

#include "Sortable.h"

class Matrix : public Sortable<int> {  
    private:
        int row;
        int col;

    public:
        //Matrix(int row, int col);
        Matrix(int row, int col);
        bool resize(int row);
        void print();
};




#endif
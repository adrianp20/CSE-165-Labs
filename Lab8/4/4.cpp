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

// not working

#include <iostream>
#include <vector>


#include "Matrix.h"


using namespace std;

int main() {
    int row, col;
    cout << "Numbers: " << endl;
    cout << "sample row size: ";
    cin >> row;
    cout << "sample column size: ";
    cin >> col;
    // make matrix pair
    Matrix<int> matrix1(row, col);
    //Matrix<int> matrix1(row, col);

    cout << "Before Sort: " << endl;
    matrix1.print();
    matrix1.sort();
    cout << "After Sort: " << endl;
    matrix1.print();
    cout << "New number of rows: ";
    cin >> row;
    matrix1.resize(row);
    cout << "Resized matrix: " << endl;
    matrix1.print();
    cout << endl;

    cout << "Characters: " << endl;
    cout << "sample row size: ";
    cin >> row;
    cout << "sample column size: ";
    cin >> col;
    Matrix<char> matrix2(row, col);
    cout << "Before Sort: " << endl;
    matrix2.print();
    matrix2.sort();
    cout << "After Sort: " << endl;
    matrix2.print();
    cout << "New number of rows: ";
    cin >> row;
    matrix2.resize(row);
    cout << "Resized matrix: " << endl;
    matrix2.print();
    cout << endl;

    return 0;
}


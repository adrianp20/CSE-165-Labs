/*
Write a Mat class that has four float members, which are the four elements of a 2x2 matrix.
Implement all constructors, methods, and operators so that the file matrices.cpp compiles
and works correctly. You may use the Vec.h file from the previous exercise.
Expected Output:
(3, 14)
*/

#ifndef MAT_H
#define MAT_H

#include <iostream>
#include "Vec.h"

using namespace std;

class Mat{ // class for matrix
public:
    static Mat Identity; // static member
    float a, b, c, d;
    Mat(float a, float b, float c, float d){ // constructor
        this->a = a; 
        this->b = b;
        this->c = c;
        this->d = d;
    }
    Mat (const Mat& m){ // copy constructor is needed for the static member
        this->a = m.a; // copy the values of the matrix for the new matrix
        this->b = m.b; 
        this->c = m.c;
        this->d = m.d;
    }
    Mat operator+(const Mat& m) const{ // + operator overload
        Mat matrix = Mat(this->a + m.a, this->b + m.b, this->c + m.c, this->d + m.d); // add the two matrices
        return matrix; // return the sum of the two matrices
    }
    Mat operator-(const Mat& m) const{ // - operator overload
        Mat matrix = Mat(this->a - m.a, this->b - m.b, this->c - m.c, this->d - m.d); // subtract the two matrices
        return matrix; // return the difference of the two matrices
    }
    Mat operator*(const Mat& m) const{ // * operator overload
        Mat matrix = Mat((this->a * m.a) + (this->b * m.c), (this->a * m.b) + (this->b * m.d), (this->c * m.a) + (this->d * m.c), (this->c * m.b) + (this->d * m.d)); // multiply the two matrices
        return matrix; // return the product of the two matrices
    }
    Mat operator*(const int& x) const{ // * operator overload
        Mat matrix = Mat(this->a * x, this->b * x, this->c * x, this->d * x); // multiply the matrix by the scalar
        return matrix; // return the product of the matrix and the scalar
    }
    Vec operator*(const Vec v){ // * operator overload
        Vec vector = Vec((this->a * v.x) + (this->b * v.x), (this->c * v.y) + (this->d * v.y)); // multiply the matrix by the vector
        return vector; // return the product of the matrix and the vector
    }
};

Mat operator*(const int& x, Mat& m){ // * operator overload
    return m * x; // return the product of the scalar and the matrix
}

Mat Mat::Identity = Mat(1, 0, 0, 1); // static member

#endif


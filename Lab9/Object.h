/*
Study the file Object.h. It defines an abstract data type Object with a virtual multiply() function. 
Complete the implementation of two classes Number and Coord3D which inherit from the 
Object class. The multiply() function must dynamically create a new object to hold the result of 
the computation. If the operands of multiply() are both Numbers, then the result should be a 
Number. If one operand of multiply() is a Coord3D, and the other is a Number, then the Number 
should multiply each component Coord3D. If both are Coord3Ds, then the result should be a 
component-wise multiplication. The file Object.cpp provides a basic test.
*/

#include <iostream>


using namespace std;

//Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

// ****ORIGINAL CODE BELOW****

//The Object ADT
class Object {
public:
	virtual Object* multiply ( const Object* obj ) const = 0;
	virtual void print() = 0;
	virtual ~Object() {}
};

class Number : public Object{
public:
	int num;

	Number(){
		num = 0; // default constructor
	};

	Number(int new_num){
		num = new_num; // constructor
	};

	~Number() override = default; // destructor (default)

	/* 
	 * if other is a Number, then this should return a Number
	 * if other is a Coord3D, then this should return a Coord3D
	 * Hint: typeid(var) might be a helpful operator to know the type of an object at runtime
	 */ 
	Object* multiply(const Object* other) const override; // multiply() function for Number class

	void print() override { // print() function for Number class
		cout << "num = " << num << endl;
	};
};


class Coord3D : public Object {
public:
	int x, y, z;

	Coord3D(){
		x = 0;
		y = 0;
		z = 0;
	};

	Coord3D(int x1, int y1, int z1){
		x = x1;
		y = y1;
		z = z1;
	};

	~Coord3D() override = default; // destructor (default)

	// This should return a Coord3D
	Object* multiply(const Object* other) const override; // multiply() function for Coord3D class
	//Object* multiply(const Object* other) const;

	void print(){
		cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	};
};

Object *Number::multiply(const Object* other) const { // multiply() function for Number class
	if (typeid(*other) == typeid(Number)) { // if other is a Number
		return new Number(num * ((Number*)other)->num); // return a Number
	} else if (typeid(*other) == typeid(Coord3D)) { // if other is a Coord3D
		return new Coord3D(num * ((Coord3D*)other)->x, num * ((Coord3D*)other)->y, num * ((Coord3D*)other)->z); // return a Coord3D
	} else {
		return nullptr; // return nullptr
	}
}

Object *Coord3D::multiply(const Object* other) const { // multiply() function for Coord3D class
	if (typeid(*other) == typeid(Number)) { // if other is a Number
		return new Coord3D(x * ((Number*)other)->num, y * ((Number*)other)->num, z * ((Number*)other)->num); // return a Coord3D
	} else if (typeid(*other) == typeid(Coord3D)) { // if other is a Coord3D
		return new Coord3D(x * ((Coord3D*)other)->x, y * ((Coord3D*)other)->y, z * ((Coord3D*)other)->z); // return a Coord3D
	} else {
		return nullptr; // return nullptr
	}
}


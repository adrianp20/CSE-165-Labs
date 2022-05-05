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

// WORKING


#include <iostream>
#include <math.h>

#include "DynArray.h"

using namespace std;

template <class A>
class Iterator
{
	int cur;
	A& arr;
public:
	Iterator(A& a) : cur(0), arr(a) {} // constructor
	void begin() { // begin method
		//write your code here
		this -> cur = 0; // set cur to 0
	}
	void end() { // end method
		//write your code here
		this -> cur = arr.getSize(); // set cur to size of arr
	}
	bool atend() { // atend method
		//write your code here
		return (this -> cur == arr.getSize()); // return true if cur is equal to size of arr

	}
	void advance() { // advance method
		//write your code here
		this -> cur++;	 // increment cur	
	}
	void print() {
		//write your code here
		//cout << arr[cur] << " "<<endl;
		cout<< this -> cur << " : " << arr[cur] << endl; // print cur and arr[cur]
	}
};

template <class A, class X> // template class Iterator
void insert_four(A& a) 
{
	for (int i = 0; i < 4; i++) // changed from 5 to 4 to match expected output
		a.add((X)(2.0*cos(double(i)))); // add 2.0*cos(double(i)) to arr
};


int main(int argc, const char * argv[])
{
	DynArray<int> ia;
	insert_four<DynArray<int>, int>(ia);

	DynArray<float> fa;
	insert_four<DynArray<float>, float>(fa);

	{ Iterator<DynArray<int> > it(ia);
	for (it.begin(); !it.atend(); it.advance()) it.print();
	}

	{ Iterator<DynArray<float> > it(fa);
	for (it.begin(); !it.atend(); it.advance()) it.print();
	}

	return 0;
}
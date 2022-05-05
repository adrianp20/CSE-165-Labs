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

// WORKING

#include <iostream>
#include <math.h>

#include "DynArray.h"

using namespace std;

template <class A, class X>
void set_five(A& a)
{
	X x = 0;
	for (int i = 0; i < 5; i++)
	{
		x = (X)(2.0*cos(double(i)));
		a.add(x);
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(int argc, const char * argv[])
{
	DynArray<float> fa;
	set_five<DynArray<float>, float>(fa);

	DynArray<int> ia;
	set_five<DynArray<int>, int>(ia);
	return 0;
}
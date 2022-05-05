#include <iostream>
using namespace std;

// complex number defintion as given
class ComplexNumber{
    public:
        double re, im;
        ComplexNumber(double x, double y){
            re = x;
            im = y; }

};

// operator overloading for operator + 
ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b){
    // return a new object of complex number with its 
    // real value = sum of real of a and b, and imaginary value = sum of imaginary of a and b
    return ComplexNumber(a.re + b.re, a.im + b.im); // return the sum of the two complex numbers
}
// operator overloading for operator *
ComplexNumber operator*(const ComplexNumber& a, const ComplexNumber& b){

    // return a new object of class complex number with the corresponding 
    // real and imaginary value as given in the problem hint
    return ComplexNumber(a.re*b.re - a.im*b.im, a.re*b.im + a.im*b.re ); // return the product of the two complex numbers
}

// testing
int main(){
    // make a complex number 2+3i
    ComplexNumber a(2,3);
    // make another 5+6i
    ComplexNumber b(5,6);

    // store its addition and multiplication
    ComplexNumber addResult = a+b;
    ComplexNumber mulResult = a*b;

    // print the a and b
    cout<<"a = "<<a.re<<" + "<<a.im<<"i"<<endl;
    cout<<"b = "<<b.re<<" + "<<b.im<<"i"<<endl;

    // print the addition and multiplication result
    cout<<"a + b = "<<addResult.re<<" + "<<addResult.im<<"i"<<endl;
    cout<<"a * b = "<<mulResult.re<<" + "<<mulResult.im<<"i"<<endl;


    return 0;
}

// #include<iostream>
// using namespace std;

// template <class T> T ArrayAve(T arr[], int n)
// {
//     // initialize sum to first element of array
//     T sum; //= arr[0];
    
//     // add each element of array
//     for (int i = 0; i < n; i++)
//         sum += arr[i];
        
//     // calculate and return average
//     return sum / n;
// }

// int main()
// {
//     float ar[10];
//     for(int i = 0; i < 10; i++)
//         ar[i] = (float)i*1.1;
//     float ave = ArrayAve<float>(ar, 10);
//     cout << ave << endl;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// // question 10
// class Object {
// public:
// static int count;

// Object(){
//     cout << "Object()"<< endl;
//     cout << ++count << endl;
// }

// ~Object(){
//     cout << "~Object()"<< endl;
//     cout << --count << endl;
// }

// };

//     int Object::count = 0;

//     Object f(Object someObject){
//         return someObject;
//     }

// int main(int argc, const char * argv[])
// {
//     Object myObject;
//     Object another = f(myObject);
//     return 0;
// }

// // question 2
// class CoolArray{
//     int *arr;
// public :
//     CoolArray(int size){
//         arr = new int[size];
//     }

//     // We added this portion so that whenever the object is being destroyed ,
//     // The allocated memory for arr from heap would be freed up
//     // Hence memory leak can be prevented
//     ~CoolArray(){
//         delete[] arr;
//     }
// };

// int main(){
//     CoolArray *a = new CoolArray(100);

//     // This would invoke a Call to destructor which will deallocate the storage
//     delete a;
// }


// // question 3
// class Students {
//   public:
//     Students(){}
// };

// class Tutor : public Students {
//   public:
//     Tutor(){}
// };

// class TA : public Students {
//   public:
//     TA(){}
// };

// class Student_Staff: virtual public TA, virtual public Tutor {
//   public:
//     Student_Staff(){}
// };

// // question 4
// class Students{
//     public:
//     static int x;
//     static int y;
//         Students(){
//             // cout<<"Students class constructor"<<endl;
//             x = 10;
//         }
// };
// //TA class - publicly inherited from Students class
// class TA:public Students{
//     public:
//     //string s = "bitches"   ;
//         TA(){
//             cout << x ;
//             // cout<<"TA class constructor"<<endl;
//         }
// };
// //Tuto class - publicly inherited from Students class
// class Tutor:public Students{
//     public:
//         Tutor(){
//             cout << y ;
//             // cout<<"Tuto class constructor"<<endl;
//         }
// };
// //Student_Staff class - publicly inherited from TA class 
// //and Tuto class
// class Student_Staff:public TA,public Tutor{
//     public:
//         Student_Staff(){
//             //cout << s;
//             // cout<<"Student_staff constructor"<<endl;
//         }
// };

// int main() {
//     //Creating object for Student_Staff class which results 
//     //in the execution of default constructors of Student class,
//     //TA class , Student class , Tuto class and Student_Staff class
//     Student_Staff sf;
//     TA ta;
//     Tutor tuto;
//     Students stu;

//     return 0;
// }

// // question 5
// class A{
//     public:
//         int f ( int x ) { return (x + 5); }
//         // virtual int f ( int x ) { return (x + 5); }
// };

// class C : public A {
//     public:
//         int f ( int x ) { return (x - 5); }
// };

// int main() {
//     C obj; cout << obj.f(15) << endl;
//     C* c = new C; cout << c->f(15) << endl; delete c;
//     A* a = new A; cout << a->f(15) << endl; delete a;
// }


// // Question 6
// class A { // base class
//     public:
//         virtual int f ( int x ) { return (x + 5); } // virtual function f that returns x + 5
// };

// class C : public A { // class A is derived from class C
//     public:
//         int f ( int x ) { return (x - 5); } // redefine f to return x - 5
// };

// int main() {
//     C o; cout << o.f(15) << endl; // call f of class C which is derived from class A and redefine f to return x - 5
//     C* c = new C; cout << c->f(15) << endl; delete c; // create an object of class C and call f of class C which is derived from class A and redefine f to return x - 5 and delete the object
//     A* a = new C; cout << a->f(15) << endl; delete a; // create an object of class C and call f of class A which is derived from class C and redefine f to return x + 5 and delete the object
// }
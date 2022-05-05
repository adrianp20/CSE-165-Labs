/*
Virtual Methods 
You are required to complete the following tasks:
* Create a AppWindow class that will contain as member a rectangle AppRect. AppRect will define it’s position
and size. AppWindow will have the following two constructors:
AppWindow (int x , int y , int w, int h);
AppWindow (const AppRect& r);
* Write a method to retrieve the rectangle:
const AppRect& AppWindow::rect();
* Write the resize() virtual method as described below. Everytime this method is called, your implementation
is supposed to change the coordinates of the internal rectangle of the window. (Method resize will be called by the
system every time the window is resized)
virtualvoid AppWindow :: resize(int w, int h);
* Now write two classes deriving the AppWindow: CircleWin and RectWin. These classes will have correct
constructors as needed and will override the resize method such that:
a) CircleWin will get the minimum dimension (among w and h) and will print it like this: radius: (min), where
(min) is the minimum dimension.
b) RectWin will print the area like this: area: (area)
Upload your three classes as a single header file named Header.h. your code will be tested for correctness using
the file virtualMethods.cpp.
Sample output from virtualMethods.cpp :
>>radius: 2
>>area: 8
>>radius: 1
>>area: 4
*/

#ifndef Header_h
#define Header_h

#pragma once // include guard
#include<iostream>
#include<algorithm>

using namespace std;

class AppRect{
    public:
    int x,y,w,h;

    AppRect() {
        
    }

    AppRect(int a, int b, int c, int d) { // x,y,w,h
        x = a;
        y = b;
        w = c;
        h = d;
    }
};

class AppWindow { // base class
    public: 
    AppRect rect_1;

    AppWindow () { // default constructor

    }

    AppWindow (int x, int y, int w, int h) { // x,y,w,h
        rect_1 = AppRect(x,y,w,h); // assign values to rect_1
        // rect_1.x = x;
        // rect_1.y = y;
        // rect_1.w = w;
        // rect_1.h = h;
    }

    AppWindow (const AppRect& r) { // copy constructor
        this -> rect_1 = r;
        // rect_1 = r;
    }

    const AppRect& rect() { // return the rectangle
        return rect_1;
    }

    virtual void resize(int w, int h) = 0; // pure virtual function
};

class RectWin : public AppWindow { // RectWin class
    public:
    RectWin() { // default constructor


    }

    RectWin(int x, int y, int w, int h) : AppWindow(x,y,w,h) { // constructor

    }

    RectWin(AppRect r) : AppWindow(r) { // copy constructor


    }

    void resize(int w, int h) { // override resize
        cout<<"area: "<<w*h<<endl;
    }
};

class CircleWin : public AppWindow { // derived class
    public:
    CircleWin() {

    }

    CircleWin(int x, int y, int w, int h) : AppWindow(x,y,w,h) { // constructor


    }

    CircleWin(AppRect r) : AppWindow(r) { // copy constructor


    }

    void resize(int w, int h) { // override resize
        //int min = min(w,h);
        cout<<"radius: "<<min(w,h)<<endl;
    }
};

#endif
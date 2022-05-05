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

//working

#include <iostream>
#include <vector>

#include "Header.h"

using namespace std;

int main() {
    AppRect r(2,0,4,2); // x,y,w,h
    
    vector<AppWindow*> w; // vector of pointers to AppWindow
    
    w.push_back(new CircleWin(r)); // CircleWin
    w.push_back(new RectWin(r)); // RectWin
    w.push_back(new CircleWin(1,1,2,3)); // CircleWin
    w.push_back(new RectWin(1,1,3,2)); // RectWin
    
    for (int i = 0; i < w.size(); i++){
        w[i]->resize(w[i]->rect().x, w[i]->rect().h * 2);
    }
    
    return 0;
}
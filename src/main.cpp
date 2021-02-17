#include <iostream>
#include "../header/rectangle.hpp"
using namespace std;

int main(){
Rectangle rect;

rect.set_width(4);
rect.set_height(2);

cout << "Rectangle area with width of 4 & height of 2: " << rect.area() << endl;
cout << "Rectangle perimeter with width of 4 & height of 2: " << rect.perimeter() << endl;
Rectangle* rect2 = new Rectangle();
cout <<"Calling rectangle constructor with zero parameters:"<< endl;
cout << "Rectangle area with no width or height: " << rect2->area() << endl; 
cout << "Rectangle perimeter with no width or height: " << rect2->perimeter() << endl;
return 0;
}

#include "../header/rectangle.hpp"

void Rectangle::set_width(int w){
this->width = w;
}
void Rectangle::set_height(int h){
this->height = h;
}
int Rectangle::area(){
if((this->width * this->height) < 0 ) return 0;
return this->width * this->height;
}
int Rectangle::perimeter(){
if((2 *(this->width + this->height)) < 0 ) return 0;
return 2 * (this->width + this->height);
}
Rectangle::Rectangle(){
this->width = 0;
this->height = 0;	
}
Rectangle::Rectangle(int w, int h){
this->width = w;
this->height = h;
}

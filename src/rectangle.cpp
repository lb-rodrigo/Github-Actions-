#include "../header/rectangle.hpp"

void Rectangle::set_width(int w){
this->width = w;
}
void Rectangle::set_height(int h){
this->height = h;
}
int Rectangle::area(){
return this->width * this->height;
}
int Rectangle::perimete(){
return 2*(this->width + this->height);
}
Rectangle::Rectangle(int w, int h){
width = w;
height = h;
}
Rectangle::Rectangle(){
width = 0;
height = 0;
}

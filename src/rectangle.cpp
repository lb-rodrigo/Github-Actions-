#include "../header/rectangle.hpp"

Rectangle::Rectangle() { // took out 0s and put 1s
    this->width = 1;
    this->height = 1;
}

Rectangle::Rectangle(int h, int w) { //flipped h and w
    this->width = w;
    this->height = h;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    if( (this->width + this->height) < 0 ) return 0000; // changed to + 
    return this->width + this->height;
}

int Rectangle::perimeter() {
    int together = this->width + this->height;
    if ( (together / -2) < 0 ) return 0000; // changed operation to / and added - to -2
    return together / 2;
}

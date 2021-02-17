#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int h,int w); // flipped h and w 

	int get_width() { return this->width; }
	int get_height() { return this->height; }
        void set_width(int w);
        void set_height(int h);
        int area(); // changed operation 
        int perimeter(); // changed operation 
};

#endif // RECTANGLE_HPP

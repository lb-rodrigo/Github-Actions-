#include "../header/rectangle.hpp"
#include <iostream>

using namespace std;

int main() {
	
	cout << "Default Rectangle:" << endl;

        Rectangle* boring = new Rectangle();
        cout << "Area: " << boring->area() << endl;
        cout << "Perimeter: " << boring->perimeter() << endl << endl;

	/////////////////////
	
	int width;
        int height;

	cout << "Value Rectangle:" << endl;
	
	cout << "Enter width: " << endl;
	cin >> width; 

	cout << "Enter height: " << endl;
        cin >> height;
	
	Rectangle* shape = new Rectangle(width, height);
	cout << "Area: " << shape->area() << endl;
	cout << "Perimeter: " << shape->perimeter() << endl;	

	return 0;

}

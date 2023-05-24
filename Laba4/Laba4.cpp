#include <iostream>
#include"Shapes.h"
using std::cout;
using std::cin;
using std::endl;
int main()
{
    double newside, newradius;
    cout << "Enter the side of the square: ";
    cin >> newside;
    cout << "Enter the radius of the circle: ";
    cin >> newradius;

    Circle circle(newradius);
    Square square(newside);

    cout << "Square with a side of " << square.getSide() << endl;
    cout << "The area is " << square.getArea() << endl;
    cout << "The perimeter is " << square.getPerimeter() << endl;
    cout << endl;
    cout << "Circle with a radius of " << circle.getRadius() << endl;
    cout << "The area is " << circle.getArea() << endl;
    cout << "The circumference is " << circle.getPerimeter() << endl;

}



#include"Shapes.h"

Square::Square(double newside)
{
	this->side = newside;
}
Square::Square()
{
	this->side = 1;
}
Square::Square(Square& anotherSqr)
{
	this->side = anotherSqr.getSide();
}
double Square::getArea()
{
	return side * side;
}
double Square::getPerimeter()
{
	return side * 4;
}
double Square::getSide()
{
	return side;
}
void Square::setSide(double newside)
{
	side = newside;
}


double Circle::getArea()
{
	return radius * radius * PI;
}
double Circle::getPerimeter()
{
	return radius * 2 * PI;
}
double Circle::getRadius()
{
	return radius;
}
void Circle::setRadius(double newradius)
{
	radius = newradius;
}
Circle::Circle()
{
	radius = 1;
}
Circle::Circle(double newradius)
{
	radius = newradius;
}
Circle::Circle(Circle& anotherCirc)
{
	radius = anotherCirc.getRadius();
}
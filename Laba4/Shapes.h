#pragma once

const double PI = 3.141629;

class PlaneShape
{
public:
	~PlaneShape(){}
	virtual double getArea()=0;
	virtual double getPerimeter()=0;
};

class Square : public PlaneShape
{
private:
	double side;
public:
	Square(double);
	Square();
	Square(Square& anotherSqr);
	double getArea();
	double getPerimeter();
	double getSide();
	void setSide(double);
};

class Circle :public PlaneShape
{
private:
	double radius;
public:

	Circle();
	Circle(double);
	Circle(Circle& anotherCirc);
	double getArea();
	double getPerimeter();
	double getRadius();
	void setRadius(double);
};
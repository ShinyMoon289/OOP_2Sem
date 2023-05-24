#pragma once

class Complex
{
private:
	double Re=0, Im=0;
public:
	Complex();
	Complex(Complex& anotherComp);
	Complex(double, double);
	double operator+();
	Complex* operator+(double );
	Complex* operator+(Complex& );
	friend void displayNumber(Complex&);
};
#include"Class.h"
#include<math.h>
#include<iostream>
Complex::Complex(double re, double im)
{
	this->Re = re;
	this->Im = im;
}

Complex::Complex(Complex& anotherComp)
{
	this->Re = anotherComp.Re;
	this->Im = anotherComp.Im;
}

double Complex::operator+()
{
	return (pow(Re, 2) + pow(Im, 2));
}

Complex* Complex::operator+(double num)
{
	Re = Re + num;
	Im = Im + num;
	return this;
}

Complex* Complex::operator+(Complex& compNumber)
{
	this->Re = Re + compNumber.Re;
	this->Im = Im + compNumber.Im;
	return this;
}

void displayNumber(Complex& compNumber)
{
	std::cout << compNumber.Re << "+" << compNumber.Im << "i";
}

#include"Class.h"
#include <iostream>

using namespace std;

int main()
{
	double re=0, im=0;
	cout << "Set real part: ";
   cin >> re;
   cout << "Set imaginary part: ";
   cin >> im;
   Complex comp(re, im);
   cout << "The module of the number is " << +comp << endl;
   Complex comp2(comp);
   comp + 6;
   cout << "The number + 6 is "; displayNumber(comp); cout << endl;
   comp+comp2;
   cout << "The fisrt number + second number is "; displayNumber(comp); cout << endl;
}


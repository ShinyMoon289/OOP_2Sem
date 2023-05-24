#include"Classes.h"
#include<iostream>
using namespace std;

int main()
{
	Faculty faculty;
	date newBirthdate;
	newBirthdate.day = 4;
	newBirthdate.month = 5;
	newBirthdate.year = 2004;
	Student student("Ilya", "Kudin", newBirthdate, faculty.getFacultyName());
	cout << "Name: " << student.getStudentName() << endl;
	cout << "Last name: " << student.getStudentLastName() << endl;
	cout << "DOB: " << student.getBirthdate().day<<"."<< student.getBirthdate().month<<"." << student.getBirthdate().year<<endl;
	cout << "Faculty: " << student.getFacultyName();


}
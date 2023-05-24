#include"Classes.h"

Faculty::Faculty()
{
	this->facultyName = "IEF";
	this->fndDate.day = 1;
	this->fndDate.month = 1;
	this->fndDate.year = 2001;
}

Faculty::Faculty(std::string newName, date newDate)
{
	this->facultyName = newName;
	this->fndDate = newDate;
}

void Faculty::setFacultyName(std::string newName)
{
	facultyName = newName;
}

std::string Faculty::getFacultyName()
{
	return facultyName;
}

void Faculty::setFndDate(date newDate)
{
	fndDate = newDate;
}
date Faculty::getFndDate()
{
	return fndDate;
}


Student::Student()
{
	this->facultyName = "DefaultName";
	this->studentName = "Vasiliy";
	this->studentLastName = "Krasilnikov";
	this->Birthdate.day = 1;
	this->Birthdate.month= 1;
	this->Birthdate.year = 1;
}

Student::Student(std::string newName, std::string newLastName, date newBirthdate, std::string newFacultyname)
{
	this->facultyName = newFacultyname;
	this->studentName = newName;
	this->studentLastName = newLastName;
	this->Birthdate = newBirthdate;
}

void Student::setStudentName(std::string newName)
{
	this->studentName = newName;
}
std::string Student::getStudentName()
{
	return this->studentName;
}

void Student::setStudentLastName(std::string newLastName)
{
	this->studentLastName = newLastName;
}
std::string Student::getStudentLastName()
{
	return this->studentLastName;
}

void Student::setBirthdate(date newbirthdate)
{
	this->Birthdate = newbirthdate;
}
date Student::getBirthdate()
{
	return this->Birthdate;
}
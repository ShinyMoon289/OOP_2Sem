#pragma once
#include<string>

struct date
{
	unsigned int day, month, year;
};

class Faculty
{
protected:
	std::string facultyName;
private:
	date fndDate;
public:

	Faculty();
	Faculty(std::string, date);

	void setFacultyName(std::string);
	std::string getFacultyName();

	void setFndDate(date);
	date getFndDate();


};

class Student :public Faculty
{
private:
	std::string studentName, studentLastName;
	date Birthdate;
public:
	Student();
	Student(std::string, std::string, date, std::string);

	void setStudentName(std::string);
	std::string getStudentName();

	void setStudentLastName(std::string);
	std::string getStudentLastName();

	void setBirthdate(date);
	date getBirthdate();
};
#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
using namespace std;

class Student
{
public:
	string firstName;
	string lastName;
	string birthDate;
	string group;

	Student();

	Student(string firstName, string lastName, string birthDate, string group);

	Student& operator=(Student& other);

	friend ostream& operator<<(ostream& out, Student& s);

	friend istream& operator>>(istream& in, Student& s);
};
#endif
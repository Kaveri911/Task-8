#include "Student.h"

Student::Student() {};

Student::Student(string firstName, string lastName, string birthDate, string group)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->birthDate = birthDate;
	this->group = group;
}

Student& Student::operator=(Student& other)
{
	if (this != &other) {
		firstName = other.firstName;
		lastName = other.lastName;
		birthDate = other.birthDate;
		group = other.group;
	}

	return *this;
}

ostream& operator<<(ostream& out, Student& s)
{
	setlocale(LC_ALL, "ru");
	out << "Студент" << endl;
	out << "Имя: " << s.firstName << " " << s.lastName << endl;
	out << "Дата рождения: " << s.birthDate << endl;
	out << "Учебная группа: " << s.group << endl;

	return out;
}

istream& operator>>(istream& in, Student& s)
{
	setlocale(LC_ALL, "ru");
	cout << "Имя ";
	in >> s.firstName;
	cout << "Фамилия: ";
	in >> s.lastName;
	cout << "Дата рождения: ";
	in >> s.birthDate;
	cout << "Учебная группа: ";
	in >> s.group;
	return in;
}
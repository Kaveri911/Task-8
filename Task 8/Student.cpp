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
	out << "�������" << endl;
	out << "���: " << s.firstName << " " << s.lastName << endl;
	out << "���� ��������: " << s.birthDate << endl;
	out << "������� ������: " << s.group << endl;

	return out;
}

istream& operator>>(istream& in, Student& s)
{
	setlocale(LC_ALL, "ru");
	cout << "��� ";
	in >> s.firstName;
	cout << "�������: ";
	in >> s.lastName;
	cout << "���� ��������: ";
	in >> s.birthDate;
	cout << "������� ������: ";
	in >> s.group;
	return in;
}
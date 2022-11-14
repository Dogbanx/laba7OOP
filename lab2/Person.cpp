#include "Person.h"

//Person::Person(string name, string surname) {
//
//	this->name = name;
//	this->surname = surname;
//}
//
//Person::~Person() {
//	cout << "Dest Person" << endl;
//}

void Person::setName(string name)
{
	this->name = name;
}

string Person::getName()
{
	return string(this->name);
}

void Person::setSurname(string surname)
{
	this->surname = surname;
}

string Person::getSurname()
{
	return string(this->surname);
}
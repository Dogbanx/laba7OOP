#include "visitor.h"
#include <iostream>
#include <fstream>
#include <string>

void visitor::setVisitorName(string name)
{
	this->name = name;
}

string visitor::getVisitorName()
{
	return this->name;
}

void visitor::setVisitorSurname(string surname)
{
	this->surname = surname;
}

string visitor::getVisitorSurname()
{
	return this->surname;
}

void visitor::RW()
{
	ofstream a_write("Visitor.TXT", ofstream::app);

	a_write << this->getVisitorName() << " " << this->getVisitorSurname() << endl;

	a_write.close();
}

void visitor::RD()
{
	ifstream a_read("Visitor.TXT");

	if (a_read.is_open())
	{
		a_read >> this->name >> this->surname;
	}
	else
	{
		cout << "Problem with Visitor.TXT" << endl;
		return;
	}
	a_read.close();
}
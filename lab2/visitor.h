#pragma once
#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;


class visitor: public Person
{
	
public:
	void setVisitorName(string name);
	string getVisitorName();
	void setVisitorSurname(string surname);
	string getVisitorSurname();

	void RW();
	void RD();
};


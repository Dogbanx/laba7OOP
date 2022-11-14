#pragma once
#include "concert.h"
#include "Person.h"
#include "Employees.h"
class Manager : public Person, private Employees
{
public:
	Manager(string Mname, string Msurname, int Msalary);
	~Manager();
	void Transferdata();
	float getSalary();

	void live(){
		cout << "Домовляюся за  нові концерти" << endl;
	}
};


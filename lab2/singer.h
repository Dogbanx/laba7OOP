#pragma once
#include <iostream>
#include <cstring>

#include "Person.h"
#include "Employees.h"

class singer : public Person, private Employees
{
	int performanceTime;
public:
	singer(string Sname, string Ssurname, int Ssalary,int performanceTime);
	~singer();
	int SetperformanceTime(int performanceTime);
	int GetperformanceTime();
	float getSalary();

	void live() {
		cout << "Готуюся до концерту" << endl;
	}
};


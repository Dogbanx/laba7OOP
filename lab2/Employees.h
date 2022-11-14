#pragma once
class Employees
{
protected:
	float salary;
public:
	Employees(float emp_salary = 0): salary(emp_salary){}
	void setSalary(float salary);
	float getSalary();
};


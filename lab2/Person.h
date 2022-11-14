#pragma once
#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	string surname;
public:

	//Person(string name, string surname);
	//~Person();

	void setName(string name);
	string getName();
	void setSurname(string surname);
	string getSurname();

	virtual void live() {
		cout << "Хочу сходити на концерт!!!" << endl ;
	}
};


#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include"Hall.h"

class concert
{
protected:

	int time;
	int date;
	int mouth;
	int duration;
	char title[64];
	float price;

public:

	concert();
	concert(int emp_time, int emp_date, int emp_mouth, int emp_duration, char* emp_title, float emp_price, char* emp_nameofSinger);
	concert(const concert& ref_concert);
	~concert();

	void Thepriceîftheconcert(int numberOfseats);
	void Netearnings(int salaryM, int salaryS, int numberOfseats);
	float getPrice();
	float getdate();
	float getmouth();
	float getduration();
	char getTitle();
	Hall* exp_Hall;

	bool operator == (const concert& other) {
		if (this->date == other.date && this->time == other.time && this->mouth == other.mouth) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator != (const concert& other) {
		if (this->date != other.date && this->time != other.time && this->mouth != other.mouth) {
			return true;
		}
		else {
			return false;
		}
	}
};


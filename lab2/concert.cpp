#define _CRT_SECURE_NO_WARNINGS
#include "concert.h"
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

concert::concert() {

	time = 17;
	date = 12;
	mouth = 10;
	duration = 2;
	strcpy(title, "Концерт назва");
	price = 300;

}

concert::concert(int emp_time ,int emp_date, int emp_mouth, int emp_duration, char* emp_title, float emp_price, char* emp_nameofSinger) {

	time = emp_time;
	date = emp_date;
	mouth = emp_mouth;
	duration = emp_duration;
	strcpy(title, emp_title);
	price = emp_price;

}


void concert::Thepriceоftheconcert(int numberOfseats) {

	float allprice;
	allprice = float(numberOfseats) * price;
	cout << allprice;

	
}
void concert::Netearnings(int salaryM, int salaryS, int numberOfseats) {

	setlocale(LC_ALL, "Ukrainian");

	int  allprice , Netearnings;
	allprice = numberOfseats * price;
	Netearnings = allprice - (salaryS + salaryM);
	cout << "Чистий заробіток організаторів" << Netearnings;
}

concert::concert(const concert& ref_concert) {

	date = ref_concert.date;
	mouth = ref_concert.mouth;
	duration = ref_concert.duration;
	strcpy(title, ref_concert.title);
	price = ref_concert.price;

}

concert::~concert() {

	cout << "Destructor";
}
float concert::getPrice() {

	return price;

}

float concert::getdate() {

	return date;

}

float concert::getmouth() {

	return mouth;

}
float concert::getduration() {

	return duration;

}

char concert::getTitle() {

	return *title;

}

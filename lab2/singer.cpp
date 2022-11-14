#include "singer.h"

singer::singer(string Sname, string Ssurname, int Ssalary, int performanceTime) {
	this->setName(Sname);
	this->setSurname(Ssurname);
	this->setSalary(Ssalary);
	this->performanceTime = performanceTime;
}
singer::~singer() {

	cout << "destSinger";
}
float singer::getSalary() {
	return salary;
}

int singer::SetperformanceTime(int performanceTime) {

	this->performanceTime = performanceTime;

}
int singer::GetperformanceTime() {

	return performanceTime;
}
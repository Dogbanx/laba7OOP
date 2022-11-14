#include "Manager.h"
#include "concert.h"

Manager::Manager(string Mname, string Msurname, int Msalary = 0) {
	this->setName(Mname);
	this->setSurname(Msurname);
	this->setSalary(Msalary);
 }
float Manager::getSalary() {
	return salary;
}
Manager::~Manager() {
	cout << "destManager";
}
void Manager::Transferdata() {

	cout << "Передав дані співаку" << endl;

}

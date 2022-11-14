#include "Ticket.h"

Ticket::Ticket(visitor* visit, concert* dept, int emp_numberOfTicket){

	this->vis_p = visit;
	this->con_p = dept;
	this->numberOfTicket = emp_numberOfTicket;
	cout << "Create new Ticket";

}
void Ticket::printTicket() {
	cout << vis_p->getName() << " " << vis_p->getSurname() << endl;
}
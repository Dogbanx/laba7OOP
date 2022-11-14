#include "Hall.h"

char Hall::getnameHall() {
	return *nameHall;
}
Hall::Hall(const char* nameHall, int numberOfsears) {

	cout << "Hall\n";
	this->nameHall = new char(sizeof(strlen(nameHall)));;
	strcpy(this->nameHall, nameHall);
	this->numberOfsears = numberOfsears;
}
Hall::~Hall() {
	cout << "Hall:dtor\n";
	unsigned int i;
	cout << "Delete all ticket ...\n";
	for (i = 0; i < 3; ++i)
	{
		if (ticketsList_p[i] != NULL)
		{
			delete (ticketsList_p[i]);
		}
	}
	delete[] ticketsList_p;
	delete (nameHall);
}
void Hall::Createticket(Hall* hse, concert* conc, visitor* visit, int numberOfTicket)
{
	
	Ticket::initList_v(ticketsList_p);
	Ticket* newTicket;
	Ticket::createTicket_v(newTicket, this, conc, visit, numberOfTicket);
	ticketsList_p[numberOfTicket-1] = newTicket;
		
}
int Hall::getnumberOfsears() {
	return numberOfsears;
}
int  Hall::SetnumberOfsears(int numberOfsears) {

	this->numberOfsears = numberOfsears;

}
void Hall::PrintTicket(Hall* hse, concert* conc, visitor* visit, int numberOfTicket) {
	cout <<visit->getName()<< visit->getSurname() << conc->getdate()<<conc->getPrice();
 }

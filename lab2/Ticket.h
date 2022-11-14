#pragma once
#include "visitor.h"
#include "concert.h"
#include "Hall.h"

class Ticket
{
public:

	Ticket() {};
	 void createTicket_v(Ticket* (&ticket), Hall* hse, concert *conc, visitor *visit, int numberOfTicket)
	{
		ticket = new Ticket(hse, conc, visit, numberOfTicket);
	}
	Ticket(Hall* hse, concert* conc, visitor* visit, int numberOfTicket) {
	
		myHse_p = hse;
		vis_p = visit;
		con_p = conc;
		if (numberOfTicket != -1) {
			cout << "New ticket\n";
			this->numberOfTicket = numberOfTicket;
		}
		else { cout << "Oops ticket is not Created Yet ...\n"; }
	};

	~Ticket() {
		myHse_p = NULL;
	};

	void disp() { cout << numberOfTicket; }

	static void initList_v(Ticket* (&ticketsList_p)[5])
	{
		ticketsList_p[5] = new Ticket[5];
	}

	Ticket(visitor* visit, concert* dept, int emp_numberOfTicket);
	void printTicket();
	

private: 

	Hall* myHse_p;
	visitor* vis_p;
	concert* con_p;
	int numberOfTicket;

};


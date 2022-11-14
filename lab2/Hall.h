#pragma once
#include "Ticket.h"
#include "concert.h"
#include "visitor.h"
#include <iostream>

using namespace std;
class Hall
{
	char *nameHall;
	int numberOfsears;
	Ticket* ticketsList_p[5];

public:
	Hall(const char *nameHal, int numberOfsears);
	~Hall();
	int getnumberOfsears();
	char getnameHall();
	int SetnumberOfsears(int numberOfsears);

	void Createticket(Hall* hse, concert* conc, visitor* visit, int numberOfTicket);
	void PrintTicket(Hall* hse, concert* conc, visitor* visit, int numberOfTicket);

};


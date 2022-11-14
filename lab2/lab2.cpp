#include <iostream>
#include <cstring>
#include <string.h>

#include <fstream>

#include "Hall.h"
#include "concert.h"
#include "visitor.h"
#include "Ticket.h"
#include "Manager.h"
#include "singer.h"

#include <list>
#include <vector>
#include <utility>
using namespace std;



int main()
{
	setlocale(LC_ALL,"Ukrainian");

	
	concert *yarmolinsty = new concert;

	concert *Khmelnytskyi = new concert;

	Manager NewManager("Bogdan","Mazur", 5000);
	singer NewSinger("Stepan", "Giga", 5000, 3);

	visitor *visit = new visitor[5];

	string names[5] = {
	"Bogdan", "Masha", "Natalia", "Tanya", "Kateryna"
	};

	string surnames[5] = {
		"Yablychna", "Koshova", "Perec", "Kacmar", "Mazur"
	};

	for (int i = 0; i < 5; i++)
	{

		visit[i].setName(names[i]);
		visit[i].setSurname(surnames[i]);	
		visit[i].RW();
	}

	Hall *NewHall = new Hall("Ukraine", 500);

	for (int i = 0; i < 5; i++)
	{
		NewHall->Createticket(NewHall, yarmolinsty, &visit[i], i);

		NewHall->PrintTicket(NewHall, yarmolinsty, &visit[i], i);
	
	}

	yarmolinsty->Thepriceоftheconcert(NewHall->getnumberOfsears());
	yarmolinsty->Netearnings(NewManager.getSalary(), NewSinger.getSalary(), NewHall->getnumberOfsears());

	NewManager.Transferdata();

	delete visit;
	delete yarmolinsty;

	Person* pointer = new Person;

	pointer->setName("Богдан");
	pointer->setSurname("Білий");
	pointer->live();
//1
	f(*pointer);
	f(NewManager);
	f(NewSinger);

	
//2
	pointer = &visit[1];
	pointer->live();
//3
	pointer = (Person*)&NewManager;
	pointer->live();

	pointer = (Person*)&NewSinger;
	pointer->live();


	if (yarmolinsty == Khmelnytskyi) {
		cout << "Концерт: " << Khmelnytskyi->getTitle() << " не може займати цей час бо він зайнятий" << endl;
	}

	if (yarmolinsty != Khmelnytskyi) {
		cout << "Концерт: " << Khmelnytskyi->getTitle() << " місце під концерт вільне" << endl;
	}

	pair <int, double> p;
	p.first = 5;
	p.second = 3.6;
	
	vector<int> array = { 1, 8, 6, 4, 2, 1 };
	array[0] = array.max_size();

	cout << "Найбільше число " << function(array[0], p.first) << endl;

}

void f(class Person& person) {
	person.live();
}

template <class T> T function(T a, T b) {
	if (a > b) return(a);
	else return(b);
}

template <class T> T function(T a, T b);

void savefile(Hall* hse, concert* conc, visitor* visit, int numberOfTicket) {
	try {
		ofstream a_write("Visitor.TXT", ofstream::app);
		/*if (a_write.fail()) { throw "Помилка відкривання фалу"; }*/
		a_write << "Місце концерту: " << hse->getnameHall() << " Номер місця: " << numberOfTicket << " Імя: " << visit->getVisitorName() << " Прізвище: " << visit->getVisitorSurname() << endl;

		a_write.close();
	}
	catch (...) {
		cout << "Помилка запису квитка у файл!!!!!" << endl;
	}
}
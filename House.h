#pragma once
#include "IRoom.h"
#include <vector>
using namespace std;

/*
	 addRoom :
		-> adauga o noua camera Living / Bedroom/...
	removeRoom:
		->sterge camera cu id-ul transmis ca si parametru

	 collectRoomData 
	  -> itereaza camerele si afiseaza datele inregistrate de senzori in fisier

	  viewRoomData:
		-> afiseaza datele de la toti senzorii pentru fiecare camera atasata folosind metodele de mai sus

*/

class House {

public:
	void addRoom(IRoom*);
	void removeRoom(int);
	void collectRoomData();
	void viewRoomData();

private:
	vector<IRoom*> rooms;
};

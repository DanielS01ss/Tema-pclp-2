#pragma once
#include "ISensor.h"
#include "IRoom.h"
#include <vector>

using namespace std;

/*
	create Room 
	->  Functia create Room creeaza un fisier unde putem stoca datele aferente citirii valorilor care au fost
	inregistrate camerei aferente

	delete Room
	-> Functia deleteRoom ce face este ca sterge de pe disc fisierul aferent camerei respective

	read Room:
	-> Functia readRoom afiseaza pe ecran intr-un format datele inregistrate aferente camerei

	update Room:
	-> salveaza in fisier masuratoriile de la senzorii atasati camerei


*/

class Living:public IRoom {

public:
	void createRoom();
	void readRoom();
	void updateRoom();
	void deleteRoom();

private:
	vector<ISensor*> sensors;
};

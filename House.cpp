#include <iostream>
#include <vector>
#include "IRoom.h"
#include "House.h"
using namespace std;

void House::addRoom(IRoom* r)
{
	this->rooms.push_back(r);
}



void House::removeRoom(int id)
{
	if (id > this->rooms.size()-1)
	{
		return;
	}
	else {
		this->rooms.erase(this->rooms.begin() + id);
	}
}
void House::collectRoomData()
{
	for (int i = 0; i < this->rooms.size(); i++)
	{
		(*rooms[i]).updateRoom();
	}
}

void House::viewRoomData()
{
	for (int i = 0; i < rooms.size(); i++)
	{
		(*rooms[i]).readRoom();
	}

}


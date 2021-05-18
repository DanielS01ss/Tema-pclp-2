#pragma once
#include "ISensor.h"
#include "IRoom.h"
#include <vector>
using namespace std;

class Bedroom: public IRoom {

public:
	void createRoom();
	void readRoom();
	void updateRoom();
	void deleteRoom();

private:
	vector<ISensor*> sensors;

};

#pragma once

#include "ISensor.h"
using namespace std;

class Pressure : public ISensor{

public:
	double readSensor();
private:
	double generateTemperature();
};

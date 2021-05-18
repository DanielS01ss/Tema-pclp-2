#pragma once
#include "ISensor.h"
using namespace std;

class Temperature : public ISensor {

public:
	double readSensor();

private:
	double generateTemperature();

};

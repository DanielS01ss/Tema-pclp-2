#pragma once

#include "ISensor.h"
using namespace std;

class Humidity : public ISensor {

public:
	double readSensor();

private:
	double generateHumidity();

};

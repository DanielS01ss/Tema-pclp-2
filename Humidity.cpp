#include <iostream>
#include <iomanip>
#include <random>
#include "Humidity.h"

using namespace std;



double Humidity::generateHumidity()
{
	const int humidity_min = 0;
	const int humidity_max = 99;
	random_device rd;
	default_random_engine eng(rd());
	uniform_real_distribution<> distr(humidity_min, humidity_max);
	return distr(eng);

}

double Humidity::readSensor()
{
	return generateHumidity();
}
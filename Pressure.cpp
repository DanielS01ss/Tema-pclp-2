#include <iostream>
#include <time.h>
#include "Pressure.h"

using namespace std;

///vom genera un numar random in intervalul 300 1100 hPa

double Pressure::generateTemperature()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(30, 1100);
	double random_num = dis(gen);
	return random_num;
}

double Pressure::readSensor()
{
	return generateTemperature();
}

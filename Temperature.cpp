#include <iostream>
#include <time.h>
#include <random>
#include <Windows.h>
#include "Temperature.h"
using namespace std;


///merge de la -40 la 80
double Temperature::generateTemperature()
{
	/*
	srand(time(NULL));
	
	double value = -40 + (rand() % (80 - (-40) + 1));
	return value;*/
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(-40, 80);
	double random_num = dis(gen);
	return random_num;

}

double Temperature::readSensor()
{
	return generateTemperature();
}
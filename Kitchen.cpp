#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstring>
#include <string>
#include "Kitchen.h"
using namespace std;

void Kitchen::createRoom()
{
	ifstream f("kitchen.txt");
	if (!f)
	{
		ofstream g("kitchen.txt");
		g.close();

	}
	else {

		cout << "Fisierul kitchen.txt deja exista!!!";
		f.close();
		return;
	}
	f.close();

}

void Kitchen::deleteRoom()
{

	remove("kitchen.txt");
}

///ce facem aicea este ca vom scrie in fisier datele de la senzori
///cei atasati acestei camere
void Kitchen::updateRoom()
{
	///deschidem fisierul in append
	///si adaugam valori care sunt generate de functia readSensors
	ifstream g("kitchen.txt");
	if (!g)
	{
		cout << "\n Fisierul kitchen.txt nu exista! \n";
		return;
	}

	ofstream f;
	f.open("kitchen.txt", ios::app);

	///si pot creea trei senzori:
	
	Temperature t1;
	Humidity h1;
	Pressure p1;

	ISensor* s1 = &t1,
		* s2 = &h1,
		* s3 = &p1;

	sensors.push_back(s1);
	sensors.push_back(s2);
	sensors.push_back(s3);

	f << t1.readSensor() << endl;
	f << h1.readSensor() << endl;
	f << p1.readSensor() << endl;


	f.close();
}

void Kitchen::readRoom()
{
	///datele sunt introduse in fisier in felul urmator:  temperatura umiditate presiune
	ifstream f("kitchen.txt");
	string temp, um, pres;
	system("cls");
	cout << "\n====------>>>>> ISTORIC CITIRE SENZORI KITCHEN <<<<<<------====\n";
	while (f >> temp >> um >> pres)
	{
		cout << endl << endl << "Temperatura:" << temp << " \370C" << endl;
		cout << "Umiditate:" << um << " RH" << endl;
		cout << "Presiune:" << pres << " hPA" << endl;
		cout << "------------------------------------------\n";
	}

	///
	system("pause");
	f.close();
}
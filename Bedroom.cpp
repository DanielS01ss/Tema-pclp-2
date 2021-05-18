#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstring>
#include <string>

#include "Bedroom.h"
using namespace std;

void Bedroom::createRoom()
{
	ifstream f("bedroom.txt");
	if (!f)
	{
		ofstream g("bedroom.txt");
		g.close();

	}
	else {

		cout << "Fisierul bedroom.txt deja exista!!!";
		f.close();
		return;
	}
	f.close();

}

void Bedroom::deleteRoom()
{

	remove("bedroom.txt");
}

///ce facem aicea este ca vom scrie in fisier datele de la senzori
///cei atasati acestei camere
void Bedroom::updateRoom()
{
	///deschidem fisierul in append
	///si adaugam valori care sunt generate de functia readSensors
	ifstream g("bedroom.txt");
	if (!g)
	{
		cout << "\n Fisierul bedroom.txt nu exista! \n";
		return;
	}

	ofstream f;
	f.open("bedroom.txt", ios::app);

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

void Bedroom::readRoom()
{
	///datele sunt introduse in fisier in felul urmator:  temperatura umiditate presiune
	ifstream f("bedroom.txt");
	string temp, um, pres;
	system("cls");
	cout << "\n====------>>>>> ISTORIC CITIRE SENZORI BEDROOM <<<<<<------====\n";
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
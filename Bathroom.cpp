#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstring>
#include <string>
#include "Bathroom.h"
using namespace std;

void Bathroom::createRoom()
{
	ifstream f("bathroom.txt");
	if (!f)
	{
		ofstream g("bathroom.txt");
		g.close();

	}
	else {

		cout << "Fisierul bathroom.txt deja exista!!!";
		f.close();
		return;
	}
	f.close();

}

void Bathroom::deleteRoom()
{

	remove("bathroom.txt");
}

///ce facem aicea este ca vom scrie in fisier datele de la senzori
///cei atasati acestei camere
void Bathroom::updateRoom()
{
	///deschidem fisierul in append
	///si adaugam valori care sunt generate de functia readSensors
	ifstream g("bathroom.txt");
	if (!g)
	{
		cout << "\n Fisierul bathroom.txt nu exista! \n";
		return;
	}

	ofstream f;
	f.open("bathroom.txt", ios::app);

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

void Bathroom::readRoom()
{
	///datele sunt introduse in fisier in felul urmator:  temperatura umiditate presiune
	ifstream f("bathroom.txt");
	string temp, um, pres;
	system("cls");
	cout << "\n====------>>>>> ISTORIC CITIRE SENZORI BATHROOM <<<<<<------====\n";
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
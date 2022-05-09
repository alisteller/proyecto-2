#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Bus
{
private:
	string tipoBus;
	int cantPasajeros;
	string placa; 
public:
	Bus();
	Bus(string, int, string);
	virtual ~Bus();
	void setTipoBus(string);
	void setCantPasajeros(int);
	void setPlaca(string);
	string getTipoBus();
	int getCantPasajeros();
	string getPlaca();
	string toString();
};


#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Rutas
{
private:
	string salida;
	string llegada;
public:
	Rutas();
	virtual ~Rutas();	
	void setSalida(string);
	void setLlegada(string);
	string getSalida();
	string getLlegada();
	string toString();
};


#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Fecha
{
private:
	int dia;
	int mes;
	int annio;
public:
	Fecha();
	virtual ~Fecha();
	string toString();

};


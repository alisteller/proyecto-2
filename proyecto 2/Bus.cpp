#include "Bus.h"

Bus::Bus()
{
	tipoBus = " ";
	cantPasajeros = 0;
	placa = " ";
}

Bus::Bus(string tipo, int cantidad, string pla) : tipoBus(tipo),cantPasajeros(cantidad),placa(pla)
{ 
}

Bus::~Bus()
{
}

void Bus::setTipoBus(string tipo)
{
	tipoBus = tipo;
}

void Bus::setCantPasajeros(int cantidad)
{
	cantPasajeros = cantidad;
}

void Bus::setPlaca(string pla)
{
	placa = pla;
}

string Bus::getTipoBus()
{
	return tipoBus;
}

int Bus::getCantPasajeros()
{
	return cantPasajeros;
}

string Bus::getPlaca()
{
	return placa;
}

string Bus::toString()
{
	stringstream s;
	s << "Tipo de Bus: " << tipoBus << endl
		<< "Cantidad de Pasajeros: " << cantPasajeros << endl
		<< "Numero de placa: " << placa << endl;
	return s.str();
}

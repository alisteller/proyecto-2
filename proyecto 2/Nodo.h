#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
template<class T>

class Nodo
{
private:
	T* dato;
	Nodo* sig;
public:
	Nodo();
	virtual ~Nodo();
	T* getDato()const;
	Nodo* getSig()const {
		return Sig;
	}
	void setDato(T*);
	void setSig(Nodo*);

};



#pragma once
#include "Nodo.h"
template<class T>
class Lista
{
private:
	Nodo* ppio;
public:
	Lista();
	virtual ~Lista();
	bool ingresaElemento(T&);
	T* buscar(string);
	bool esVacio();
	string toSring();
};


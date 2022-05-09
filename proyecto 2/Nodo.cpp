#include "Nodo.h"
template<class T>
Nodo<T>::Nodo()
{
	dato = nullptr;
	sig = nullptr;
}

template<class T>
Nodo<T>::~Nodo()
{

}

template<class T>
T* Nodo<T>::getDato() const
{
	return dato;
}

template<class T>
void Nodo<T>::setDato(T* Dato)
{
	dato = Dato;
}

template<class T>
void Nodo<T>::setSig(Nodo* nodo)
{
	sig = nodo;
}



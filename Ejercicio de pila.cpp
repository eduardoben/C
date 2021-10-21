#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
struct nodo
{
	int dato;
	nodo *siguiente;
};


void agregarDato(nodo*& pila, int n)
{
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout << "Elemento " << n << " agregado exitosamente"<<endl;

}
void main()
{
	nodo *pila = NULL;
	int numero,Snumero;
	cout << "Mete un numero para la pila" << endl;
	cin >> numero;
	agregarDato(pila, numero);
	cout << "Agrega el siguiente numero para la pila" << endl;
	cin >> Snumero;
	agregarDato(pila, Snumero);
}

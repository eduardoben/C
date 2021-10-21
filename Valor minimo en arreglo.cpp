//Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int main()
{
	int tamanio;
	cout << "Cuantos numeros agregaras?" << endl;
	cin >> tamanio;
	int* P_array = new int [tamanio];
	int menor;
	for (int i = 0;i < tamanio;i++)
	{
		cout << "Agrega un numero" << endl;
		cin >> *P_array;
		if (i == 0)
		{
			menor = *P_array;
		}
		if (*P_array < menor)
		{
			menor= menor = *P_array;
		}
		P_array++;	
	}
	
	cout << "El menor valor es: " << menor;
	
	delete [] P_array;
	
	return 0;

}
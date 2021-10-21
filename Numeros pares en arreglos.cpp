//Ingresar 10 numeros a un arreglo y utilizando punteros indicar numeros pares y su posicion en memoria
#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int array[10];	
	int i = 0;
	cout << "Agrega 10 numeros al arreglo" << endl;
	while (i < 10)
	{
		cout << "Agrega un numero al arreglo"<<endl;
		cin >> array[i];
		i++;
		
	}
	int* P_array = array;
	for (int j = 0;j < 10;j++)
	{
		if (P_array[j] % 2 == 0)
		{
			cout << "El numero " << P_array[j] << " es par y su direccion de memoria es " << &P_array[j] << endl;
		}
		
	}
	return 0;
}

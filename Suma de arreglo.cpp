//Sumar valores de un arreglo

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include <vector>

using namespace std;

int SumarA(int* a,int n);

int main()
{
	int array[] = { 5,8,7,9,6,5,1 };
	//int* dirarray;
	//dirarray = array;
	int tamanio = (sizeof array/sizeof array[0]);
		cout<<SumarA(array,tamanio);

	return 0;
}

int SumarA(int* a, int n)
{	
	int suma = 0;
	for (int i = 0;i < n ;i++)
	{
		suma += a[i];		
	}
	return suma;
}


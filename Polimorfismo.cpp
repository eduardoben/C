#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;
//Palabra polindroma?
string polindromo(char p[50])
{
	char revp[50];
	strcpy_s(revp, p);
	
	_strrev(revp);
	
	
	if (strcmp(revp,p)==0)
	{
		return "Si es polindromo";
	}
	else
	{
		return "No es polindromo";
	}
}
void main()
{	
	char palabra[50];
	cout << "Ingresa una palabra para ver si es polindromo" << endl;
	cin >> palabra;
	cout<<polindromo(palabra)<<endl;
}
#include<iostream>
#include<stdlib.h>

using namespace std;

class Animal
{
private:
	int edad;
public:
	Animal(int);
	virtual void comer();

};
Animal::Animal(int _edad){
	edad = _edad;
}

void Animal::comer() {
	cout << "Comiendo"<<endl;
}

class Humano : public Animal
{
private:
	string nombre;
public:
	Humano(int, string);
	void comer();
};
Humano::Humano(int _edad, string _nombre) : Animal(_edad)	{
	nombre = _nombre;
}
void Humano::comer()
{
	Animal::comer();
	cout << "Sentado" << endl;
};

class Perro : public Animal
{
private: 
	string raza;

public:
	Perro(int, string);
	
	void comer();
};
Perro::Perro(int _edad, string _raza) : Animal(_edad)
{
	raza = _raza;
}

void Perro::comer()
{
	Animal::comer();
	cout << "En 4 patas" << endl;
}
int main()
{
	Animal *animales[2];
	animales[0] = new Humano(55, "Himmler");
	animales[1] = new Perro(2, "French");


	animales[0]->comer();
	animales[1]->comer();
}
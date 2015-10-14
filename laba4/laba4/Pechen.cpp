#include"stdafx.h"
#include"Pechen.h"
#include"Kond_izdel.h"
#include<iostream>
using namespace std;

Pechen::Pechen(std::string name, std::string i) : Kond_izde(name)
{
	ingred = i;
}

void Pechen::setIngred(std::string ing)
{
	ingred = ing;
}
std::string Pechen::getIngrid()
{
	return ingred;
}

void Pechen::print()
{
	Kond_izde::print();
	cout << "Ingridient " << getIngrid() << endl;
}


Pechen::~Pechen()
{}
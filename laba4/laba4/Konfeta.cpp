#include"stdafx.h"
#include"Konfeta.h"
#include"Kond_izdel.h"
#include<iostream>
using namespace std;

Konfeta::Konfeta(std::string n, std::string fab) : Kond_izde(n)
{
	f = fab;
}

void Konfeta::setFabrik(std::string k)
{
	f = k;
}

std::string Konfeta::getFabrik()
{
	return f;
}

void Konfeta::print()
{
	cout << "Konfeta" << endl;
	Kond_izde::print();
	cout << "Fabrika" << getFabrik();
}

Konfeta::~Konfeta()
{}
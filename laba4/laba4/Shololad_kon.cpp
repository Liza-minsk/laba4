#include"stdafx.h"
#include "Shokolad_kon.h"
#include"Kond_izdel.h"
#include"Konfeta.h"
#include"string"
using namespace std;

Shok_konf::Shok_konf() {}

Shok_konf::Shok_konf(std::string nach, std::string fab, std::string nam) : Konfeta(fab, nam)
{
	nachinka = nach;
}

void Shok_konf::setShok_konf(std::string n)
{
	nachinka = n;
}

std::string Shok_konf::getShok_konf(void)
{
	return nachinka;
}


void Shok_konf::print()
{
	cout << "Shokoladnaja konfeta" << endl;
	Konfeta::print();
	Kond_izde::print();
	}

Shok_konf::~Shok_konf()
{}
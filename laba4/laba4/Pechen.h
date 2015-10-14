#pragma once
#include"Kond_izdel.h"
#include"string"
class Pechen : public Kond_izde
{
	std::string ingred;
public:
	Pechen() {};
	Pechen(std::string, std::string);
	void setIngred(std::string);
	std::string getIngrid();
	virtual void print();
	~Pechen();

};
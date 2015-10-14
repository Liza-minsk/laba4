#pragma once
#include"stdafx.h"
#include"Kond_izdel.h"
#include"Konfeta.h"
#include"string"
class Karamel : public Konfeta
{
	std::string vkus;
public:
	Karamel();
	Karamel(std::string, std::string, std::string);
	void setVkus(std::string);
	std::string getVkus();
	virtual void print();
	~Karamel();

};
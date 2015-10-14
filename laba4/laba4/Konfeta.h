#pragma once
#include"string"
#include"stdafx.h"
#include"Kond_izdel.h"
class Konfeta : public Kond_izde
{
	std::string f;
public:
	Konfeta() {};
	Konfeta(std::string, std::string);
	void setFabrik(std::string f);
	std::string getFabrik(void);
	virtual void print();
	~Konfeta();
};
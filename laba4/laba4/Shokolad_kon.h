#pragma once
#include"stdafx.h"
#include"Kond_izdel.h"
#include"Konfeta.h"
#include<iostream>
#include<string>
class Shok_konf : public Konfeta
{
	std::string nachinka;
public:
	Shok_konf();
	Shok_konf(std::string, std::string, std::string);
	void setShok_konf(std::string);
	std::string getShok_konf(void);
	virtual void print();
	~Shok_konf();
};
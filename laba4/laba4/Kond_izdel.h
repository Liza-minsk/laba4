#pragma once
#include<iostream>
#include"Begin.h"
#include "string"
class Kond_izde :public Begin
{
	std::string name;
public:
	Kond_izde(std::string);
	Kond_izde();
	void setName(std::string);
	std::string getName();
	virtual void print();
	void add();
	~Kond_izde();

};
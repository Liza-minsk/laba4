#include"stdafx.h"
#include "Karamel.h"
#include"Konfeta.h"
#include<string>
#include<iostream>
using namespace std;

Karamel::Karamel() {};

Karamel::Karamel(std::string vk, std::string f, std::string n) : Konfeta(f, n)
{
	vkus = vk;
}

void Karamel::setVkus(std::string vk)
{
	vkus = vk;
}
std::string Karamel::getVkus()
{
	return vkus;
}
void Karamel::print()
{
	cout << "Karamel" << endl;
	Konfeta::print();
	cout << getVkus() << endl;
}

Karamel::~Karamel()
{}
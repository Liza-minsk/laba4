#include "stdafx.h"
#include<iostream>
#include<locale>
#include"Kond_izdel.h"
#include"Pechen.h"
#include"Konfeta.h"
#include"Karamel.h"
#include"Shokolad_kon.h"
using namespace std;


int main()
{
	Begin *h;

	Kond_izde t;
	t.setName("tort");
	t.getName();
	cout << endl;

	Konfeta k("Romashka","Komunarka");
	h = &k;
	h->add();
	h->add();

	cout << endl;

	Karamel l;
	l.setName("Raduga");
	l.getName();
	l.setVkus("Jabloko");
	l.getVkus();
	cout << endl;

	Shok_konf sh;
	sh.setName("Griljashc");
	sh.getName();
	sh.setShok_konf("Oreh");
	sh.getShok_konf();
	cout << endl;

	Pechen p("Pesochnoe","Marmelad");
	cout << endl;

	Begin::show();
	return 0;
}
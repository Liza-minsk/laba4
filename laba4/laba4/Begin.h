#pragma once
class Begin {
protected :
	static Begin *head;
public:
	Begin *next;
	virtual void add()=0 ;
	static void show();
	virtual void print() = 0;
};

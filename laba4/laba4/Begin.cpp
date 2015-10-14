#include"stdafx.h"
#include"Begin.h"
Begin *Begin::head = NULL;
void Begin::show()
{
	Begin *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}

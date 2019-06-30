#include <stdio.h>
#include <stdlib.h>
#include "position.h"

position_t creer_position(int x,int y)
{
	position_t p;
		p.abs=x;
		p.ord=y;
	return p;
}

int compare_position(position_t p1, position_t p2)
{
	if(p1.abs==p2.abs && p1.ord==p2.ord)
		return 1;
			return 0;
}

void modifier_position(position_t p, int x,int y)
{
		p.abs=x;
		p.ord=y;
	
}

void afficher_position(position_t p)
{
	printf("%d,%d\n",p.abs,p.ord);
}

position_t saisie_position()
{
	position_t c;
	
	printf("Saisir l'abs\n");
	scanf("%d",c.abs);
	printf("Saisir l'ord\n");
	scanf("%d",c.ord);
	
	if((c.abs > 1 && c.abs < 11) && (c.ord > 1 && c.ord < 11))
	{
		return c;
	}
		
}

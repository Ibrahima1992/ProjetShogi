
#include <stdio.h>
#include <stdlib.h>
#include "reserve.h"
#include "piece.h"
/*
struct reserve_s
{
	piece_t p;
	struct reserve_s *debut;
};
typedef struct reserve_s reserve_t;

struct liste_reserve_s
{
	reserve_t *debut;
	int taille;
};
*/


reserve_t *creer_reserve(piece_t p)
{
	reserve_t *r;
				r=(reserve_t *)malloc(sizeof(reserve_t));
				r->p=p;
				r->suivant=NULL;
	return r;
}

void afficher_maillon(reserve_t *r)
{
	printf("%c", r->p.type);
}

void reserve_detruire(reserve_t *r)
{
	free(r);
}
liste_reserve_t *liste_reserve_initialiser()
{
	liste_reserve_t *l=malloc(sizeof(liste_reserve_t));
				l->debut=NULL;
				l->taille=0;
	return l;
}

void afficher_reserve(piece_t *p)
{
	printf("%c", p->type);
}

int liste_reserve_videe(liste_reserve_t *l)
{
	if(l -> taille==0)
		return 1;
			return 0;
}
int liste_reserve_card(liste_reserve_t *l)
{
	return l -> taille;
}
void liste_reserve_afficher(liste_reserve_t *l)
{
	reserve_t *tmp;
			tmp=l -> debut;
				while(tmp!=NULL)
				{
					printf("%c-->",tmp->p.type);
					tmp=tmp->suivant;
				}
      printf("NULL\n");
		
}

int liste_appartient(liste_reserve_t *l, piece_t x)
{
	reserve_t *tmp;
		tmp=l->debut;
		while(tmp!=NULL)
		{
			if(piece_comparer(tmp->p, x))
			{
				return 1;
			}
			tmp=tmp->suivant;
		}
		       return 0;
		

			
}

reserve_t *liste_reserve_acces(liste_reserve_t *l, int pos)
{
		int i;
		reserve_t *tmp;
			for(i=0;i<l->taille;i++)
			{
				if(i==pos)
				{
					return tmp;
				}
					tmp=tmp->suivant;
			}
			return NULL;
}
void liste_reserve_ajouter_debut(liste_reserve_t *l, reserve_t *r)
{
		r->suivant=l->debut;
		l->debut=r;
		l->taille++;
}

reserve_t *liste_reserve_extraire(liste_reserve_t *l)
{
	reserve_t *r;
		r=l->debut;
		l->debut=r->suivant;
		l->taille--;
		r->suivant = NULL;
	return r;
}
void liste_reserve_detruire(liste_reserve_t *l)
{
	reserve_t *tmp;

		tmp=l->debut;
			while(tmp!=NULL)
			{
				reserve_detruire(liste_extraire_debut(l));
				tmp=tmp->suivant;
			}
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liste_coups_joues.h"
//#include "piece.h"
#define PROMU 0
#define NON_PROMU 1
#define TRUE 1
#define FALSE 0

lcj_t *liste_initialiser()
{
	lcj_t *l;
		l=(lcj_t *)malloc(sizeof(lcj_t));
		l->debut=NULL;
		l->fin=NULL;
		l->taille=0;
	return l;
}
int test_egalite_coup(coup_t *c1, coup_t *c2)
{
	if(c1==c2)
		return 1;
			return 0;
}

coup_t *creer_coup(piece_t *p, position_t dpr, position_t arv)
{
	coup_t *c;
		c=(coup_t *)malloc(sizeof(coup_t));
		//c->p=piece_creer(c->p.joueur,c->p.type, c->p.statut);
		c->depart=dpr;
		c->arrive=arv;
		c->promotion=1;
		c->capture=1;

		c->suivant=NULL;
		c->precedent=NULL;
	return c;
}

void detruire_coup(coup_t *c)
{
	free(c);
}



int liste_coup_vide(lcj_t *l)
{
	if(l->taille==0)
	 {
		return 1;
	 }
	        return 0;
}

int liste_coup_cardinal(lcj_t *l)
{
	return l->taille;
}

void liste_coup_ajouter_debut(lcj_t *l, coup_t *c)
{
	if(l->taille==0)
	{
		l->fin=c;
	}
	else
	{
		c->suivant=l->debut;
		l->debut=c;

	}
		l->taille++;
}


coup_t *liste_extraire_debut(lcj_t *l)
{
	coup_t *c;
		c=l->debut;
			if(l->taille!=0)
			 {
			 	if(l->taille==1)
			 	{
			 		l->debut=c->suivant;
			 		l->debut->precedent=NULL;
			 		c->suivant=NULL;
			 	}
			 	l->taille--;
			 }
			 	return c;
}
void liste_detruire(lcj_t *l)
{
    coup_t *tmp;
        tmp=l->debut;
            while(tmp!=NULL)
            {
                free(liste_extraire_debut(l));
                tmp=tmp->suivant;
            }
}
/*
void afficher_liste_coup(lcj_t *l)
{
	coup_t *tmp;
		tmp=l->debut;
			while(tmp!=NULL)
			{
				printf("%c -->",tmp->type);
			}
				tmp=tmp->suivant;

}
*/

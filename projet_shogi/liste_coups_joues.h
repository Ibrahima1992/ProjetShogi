#ifndef LCJ_H
#define LCJ_H
#include "position.h"
#include "piece.h"
#define CAPTURE 0
#define NON_CAPTURE 1



typedef struct coup_s coup_t;
struct coup_s
{
	int  promotion;
	int  capture;
	position_t depart;
	position_t arrive;
	coup_t *suivant;
	coup_t *precedent;

};

struct lcj_s
{	
	coup_t *debut;
	coup_t *fin;
	int taille;
};
typedef struct lcj_s lcj_t;

lcj_t *liste_coup_initialiser();
int liste_coup_vide(lcj_t *l);
int liste_coup_cardinal(lcj_t *l);
void liste_coup_ajouter_debut(lcj_t *l, coup_t *c);
coup_t *liste_extraire_debut(lcj_t *l);
void liste_coup_afficher(lcj_t *l);
void liste_coup_detruire(lcj_t *l);
int test_egalite_coup(coup_t *c1, coup_t *c2);
void afficher_liste_coup(lcj_t *l);
#endif

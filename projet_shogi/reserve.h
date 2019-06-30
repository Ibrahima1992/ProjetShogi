#ifndef RESERVE_H
#define RESERVE_H 
#include "piece.c"
struct reserve_s
{
	piece_t p;
	struct reserve_s *suivant;
};
typedef struct reserve_s reserve_t;

struct liste_reserve_s
{
	reserve_t *debut;
	int taille;
};
typedef struct liste_reserve_s liste_reserve_t;

reserve_t *creer_reserve(piece_t p);
void reserve_detruire(reserve_t *r);
void afficher_reserve(piece_t *p);
int liste_appartient(liste_reserve_t *l, piece_t x);
liste_reserve_t *liste_reserve_initialiser();
int liste_reserve_card(liste_reserve_t *l);
int liste_reserve_videe(liste_reserve_t *l);
void liste_reserve_afficher(liste_reserve_t *l);
reserve_t *liste_reserve_acces(liste_reserve_t *l, int pos);
void liste_reserve_ajouter_debut(liste_reserve_t *l, reserve_t *r);
reserve_t *liste_reserve_extraire(liste_reserve_t *l);
void liste_reserve_detruire(liste_reserve_t *l);


#endif

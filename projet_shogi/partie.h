#ifndef PARTIE_H
#define PARTIE_H
#include "liste_coups_joues.c"
#define TRUE 1
#define FALSE 0
//#define M 12
struct partie_s
{
	char **tablier;//[M][M];
	lcj_t *l;
	int choix_joueur;
};
typedef struct partie_s partie_t;
int case_vide(char **tableau);
void modifie_case(partie_t *partie, piece_t p, position_t dpr, position_t arv);
void changer_joueur(partie_t *partie);
void afficher_plateau(partie_t *partie);
void deplacement(partie_t *partie, position_t d, position_t a);
void annuler_deplacement(partie_t *partie,position_t d, position_t a);
position_t saisie_case();
partie_t *partie_creer();
void partie_detruire(partie_t *partie);
void partie_sauvegarde(partie_t *partie,char *chaine);
partie_t *partie_charge(char *chaine);
partie_t *partie_nouvelle();
void partie_joue();
partie_t *replay_charger(char *chaine);
void replay_joue(partie_t partie);

#endif


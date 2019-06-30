#ifndef PIECE_H
#define PIECE_H

struct piece_s
{
	int joueur;
	char type;
	int statut;
};
typedef struct piece_s piece_t;
piece_t piece_initialiser();
piece_t piece_creer(int j, char t, int s);
int piece_joueur(piece_t p);
void afficher(piece_t p);
piece_t piece_identifier(char x);
char piece_caractere(piece_t p);
int piece_comparer(piece_t p1, piece_t p2);

#endif

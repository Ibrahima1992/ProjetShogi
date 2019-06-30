#ifndef POSITION_H
#define POSITION_H

struct position_s
{
	int abs;
	int ord;
};
typedef struct position_s position_t;

position_t creer_position(int x,int y);
int compare_position(position_t p1, position_t p2);
void modifier_position(position_t p, int x,int y);
void afficher_position(position_t p);
position_t saisie_position();

#endif

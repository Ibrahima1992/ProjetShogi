#include<stdio.h>
#include<stdlib.h>
#include "partie.h"
#include "position.h"
#include "liste_coups_joues.h"
#define J1 0
#define J2 1
#define RC printf("\n");
#define M 12

int case_vide(char **tableau)
{
	char vide='.';
	int i,j;
	
		if(tableau[i][j]==vide)
		{
			return 1;
		}
	
			 return 0;
}

void modifie_case(partie_t *partie, piece_t p, position_t dpr, position_t arv)
{
	partie->tablier[dpr.abs][arv.ord]=p.type;
}

void changer_joueur(partie_t *partie)
{
	if(partie->choix_joueur==J1)
	{
		partie->choix_joueur=J2;
	}
	else
	{
		partie->choix_joueur=J1;
	}
}
/*
struct partie_s
{
	char tablier[M][M];//[][];
	lcj_t *l;
	int choix_joueur;
};
typedef struct partie_s partie_t;
*/
void afficher_plateau(partie_t *partie)
{
	//char tablier[M][M];
	int i,j;
	char vide='.';
	int numero1=0;
	int numero2=0;
		RC;RC;
		
		for(i=0;i<M;i++)
		{
			for(j=0;j<M;j++)
			{	
				
				partie->tablier[i][j]=vide;
					
			}
		}
		for(i=0;i<M;i++)
		{
			printf("\t\t");
				for(j=0;j<M;j++)
				{
					if(i==0 && j==0)
					{
						printf("  ");
					}
					else if(i==0 && j!=0)
					{
						printf("  ");
						printf("%d",j-1);
						numero1++;
					}
					else if(j==0 && i!=0)
					{	
						printf("  ");
						printf("%d",i-1);
						numero2++;
					}
					else
					{
						printf("  ");
						printf("%c",partie->tablier[i][j]);
					}	
				}
			printf("\n");
		}
		
}

/*void deplacement(partie_t *partie, position_t d, position_t a)
{
	liste_reserve_t *l;
	reserve_t *r;
	lcj_t *liste;
	coup_t *c;

	int capture = 1;
	if(deplacement_valide(d, a))
	{
		if(capture != 1)
		{
			liste_reserve_ajouter_debut(l, r);
			liste_coup_ajouter_debut(liste, c);
			
		}
		liste_coup_ajouter_debut(liste, c);
	}
}

void annuler_deplacement(partie_t *partie,liste_resereve_t *liste, position_t d, position_t a)
{
	coup_t *c;
	reserve_t *r;
	piece_t p;
	if(deplacement(partie,d,a))
	 {
		c=liste_extraire_debut(partie->l);
		r=liste_reserve_extraire(liste);
		
	}
	p=r->p;
	modifie_case(partie,p,a,d);

}*/



position_t saisie_case()
{
	int choix;
	printf("1 Pour saisir des coordonnées\n 2 Pour annuler le deplacement\n 3 Pour quitter la partie\n");

	  do{
		switch(choix)
		{
			case 1:
			saisie_position();
			break;
		
			case 2:
			//annuler_deplacement(partie_t *partie,liste_resereve_t *liste, position_t d, position_t a);
			break;
	
			case 3:
			
			break;

			default:
			printf("Veuillez choisir entre 1, 2 ou 3");
	         }
	}while(choix!=0);
	
}

partie_t *partie_creer()
{
	partie_t *partie;

	partie->tablier= malloc((sizeof(partie_t)));
	partie->l=NULL;
	partie->choix_joueur=0;
	
	
	return partie;
}

void partie_detruire(partie_t *partie)
{
	
	liste_detruire(partie->l);
	free(partie->tablier);
}



